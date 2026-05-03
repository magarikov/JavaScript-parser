%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jsParser.tab.h" // Генерируется Bison

void yyerror(const char *s);
%}

%option yylineno
%option noyywrap

    // Регулярные выражения для сложных конструкций JS 
DIGIT [0-9]
HEX 0[xX][0-9a-fA-F]+
BIN 0[bB][01]+
OCT 0[oO][0-7]+
    // Числа с подчеркиванием, экспонентой и BigInt
NUM_LITERAL    {DIGIT}({DIGIT}|_)*(\.{DIGIT}+)?([eE][-+]?{DIGIT}+)?n?
    // Идентификаторы: разрешены $, _ и буквы
ID [a-zA-Z_$][a-zA-Z0-9_$]*
    // Обычные строки и шаблонные строки ` `
STRING_LIT     \"(\\.|[^"\\])*\"|\'(\\.|[^'\\])*\'|`(\\.|[^`\\])*`

%%

    //       КЛЮЧЕВЫЕ СЛОВА
"const" { return CONST; }
"let" { return LET; }
"var" { return VAR_KEYWORD; }
"function" { return FUNCTION; }
"class" { return CLASS; }
"constructor" { return CONSTRUCTOR; }
"this" { return THIS; }
"new" { return NEW; }
"return" { return RETURN; }
"if" { return IF; }
"else" { return ELSE; }
"for" { return FOR; }
"while" { return WHILE; }
"typeof" { return TYPEOF; }
"use strict" { return USE_STRICT; }
"import" { return IMPORT; }
"export" { return EXPORT; }
"from" { return FROM; }
"try" { return TRY; }
"catch" { return CATCH; }
"finally" { return FINALLY; }
"throw" { return THROW; }
"as" { return AS; }
"static" { return STATIC; }
"get" { return GET; }

    /* Литералы и специальные значения */
"true" { yylval.str = strdup(yytext); return BOOLEAN; }
"false" { yylval.str = strdup(yytext); return BOOLEAN; }
"null" { return NULL_TOKEN; }
"undefined" { return UNDEFINED; }
"NaN" { return NAN_TOKEN; }
"Infinity" { return INFINITY_TOKEN; }

    /* числа */
{HEX}|{BIN}|{OCT}|{NUM_LITERAL} { 
    yylval.str = strdup(yytext); 
    return NUMBER; 
}

    /* Строки */
{STRING_LIT} { 
    yylval.str = strdup(yytext); 
    return STRING; 
}

    /* Логические и битовые операторы */ 
"&&"  { return AND; }
"||"  { return OR; }
"!" { return NOT; }
"&" { return BIT_AND; }
"|" { return BIT_OR; }
"^" { return BIT_XOR; }
"~" { return BIT_NOT; }
"<<"  { return LSHIFT; }
">>"  { return RSHIFT; }
">>>" { return URSHIFT; }

    /* Операторы сравнения */ 
"===" { return STRICT_EQUAL; }
"!==" { return STRICT_NOT_EQUAL; }
"=="  { return EQUAL; }
"!="  { return NOT_EQUAL; }
">="  { return GE; }
"<="  { return LE; }
">" { return G; }
"<" { return L; }

"..." { return SPREAD; }
"?."  { return OPTIONAL_CHAIN; }

    /* Математика и присваивание */ 
"++" { return INC; }
"--" { return DEC; }
"+=" { return ADD_ASSIGN; }
"-=" { return SUB_ASSIGN; }
"*=" { return MUL_ASSIGN; }
"/=" { return DIV_ASSIGN; }
"**=" { return POW_ASSIGN; }
"**" { return POW; }
"=>"  { return ARROW; }
"=" { return ASSIGN; }
"+" { return PLUS; }
"-" { return MINUS; }
"*" { return MUL; }
"/" { return DIV; }
"%" { return MOD; }

    /* Пунктуация */
"(" { return LPAREN; }
")" { return RPAREN; }
"{" { return LBRACE; }
"}" { return RBRACE; }
"[" { return LBRACKET; }
"]" { return RBRACKET; }
";" { return SEMICOLON; }
"," { return COMMA; }
"." { return DOT; }
"?" { return QUESTION; }
":" { return COLON; }
    /*"\n" { return NEW_LINE; }*/

    /* Идентификаторы */
{ID} { 
    yylval.str = strdup(yytext); 
    return IDENTIFIER; 
}

    /* Пропуски и комментарии */
[ \t\r\n]+      { /* игноририм */ }
"//".*          { /* комментарии */ }
"/*"([^*]|\*+[^*/])*\*+"/" { /* многострочные комментарии */ }

    /* Ошибка */
. { 
    fprintf(stderr, "Lexical Error: Unknown symbol '%s' at line %d\n", yytext, yylineno);
    exit(1); 
}

%%