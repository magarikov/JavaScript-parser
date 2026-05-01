


%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex();
extern int yylineno;
extern FILE *yyin;
void yyerror(const char *s);
%}

%union {
    char *str;
}

%token <str> IDENTIFIER NUMBER STRING BOOLEAN
%token CONST LET VAR_KEYWORD FUNCTION CLASS CONSTRUCTOR THIS NEW RETURN
%token IF ELSE FOR WHILE TYPEOF USE_STRICT IMPORT EXPORT FROM TRY CATCH FINALLY THROW
%token AND OR NOT BIT_AND BIT_OR BIT_XOR BIT_NOT LSHIFT RSHIFT URSHIFT
%token STRICT_EQUAL STRICT_NOT_EQUAL EQUAL NOT_EQUAL GE LE G L
%token INC DEC ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN POW_ASSIGN POW ARROW ASSIGN
%token PLUS MINUS MUL DIV MOD
%token LPAREN RPAREN LBRACE RBRACE LBRACKET RBRACKET SEMICOLON COMMA DOT QUESTION COLON
%token NULL_TOKEN UNDEFINED NAN_TOKEN INFINITY_TOKEN
/* НОВЫЕ ТОКЕНЫ */
%token SPREAD OPTIONAL_CHAIN NULLISH

/* Обновленные приоритеты */
%right ASSIGN ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN POW_ASSIGN
%right QUESTION COLON
%left NULLISH
%left OR
%left AND
%left BIT_OR
%left BIT_XOR
%left BIT_AND
%left EQUAL NOT_EQUAL STRICT_EQUAL STRICT_NOT_EQUAL
%left G L GE LE
%left LSHIFT RSHIFT URSHIFT
%left PLUS MINUS
%left MUL DIV MOD
%right POW
%right UNARY NOT BIT_NOT INC DEC TYPEOF NEW SPREAD /* UNARY для минуса */
%left DOT OPTIONAL_CHAIN LPAREN LBRACKET

%%

program:
    statements
    ;

statements:
    statements statement
    | /* пусто */
    ;

statement:
    variable_declaration SEMICOLON
    | function_declaration
    | class_declaration
    | if_statement
    | for_statement
    | while_statement
    | try_catch_statement
    | return_statement SEMICOLON
    | expression_statement SEMICOLON
    | import_export_statement SEMICOLON
    | USE_STRICT SEMICOLON
    | LBRACE statements RBRACE /* Для блоков внутри map/reduce */
    ;

variable_declaration:
    declaration_keyword IDENTIFIER
    | declaration_keyword IDENTIFIER ASSIGN expression
    ;

declaration_keyword:
    CONST | LET | VAR_KEYWORD
    ;

function_declaration:
    FUNCTION IDENTIFIER LPAREN parameters RPAREN LBRACE statements RBRACE
    ;

parameters:
    parameters COMMA parameter
    | parameter
    | /* пусто */
    ;

parameter:
    IDENTIFIER
    | IDENTIFIER ASSIGN expression
    ;

class_declaration:
    CLASS IDENTIFIER LBRACE class_body RBRACE
    ;

class_body:
    class_body class_member
    | /* пусто */
    ;

class_member:
    CONSTRUCTOR LPAREN parameters RPAREN LBRACE statements RBRACE
    | IDENTIFIER LPAREN parameters RPAREN LBRACE statements RBRACE
    ;

expression_statement:
    expression
    ;

expression:
    primary_expression
    | expression PLUS expression
    | expression MINUS expression
    | expression MUL expression
    | expression DIV expression
    | expression MOD expression
    | expression POW expression
    | expression EQUAL expression
    | expression STRICT_EQUAL expression
    | expression NOT_EQUAL expression
    | expression AND expression
    | expression OR expression
    | expression NULLISH expression     /* oldest?.year || null */
    | expression G expression
    | expression L expression
    | expression GE expression
    | expression LE expression
    | expression ASSIGN expression
    | expression ADD_ASSIGN expression
    | expression DOT IDENTIFIER
    | expression OPTIONAL_CHAIN IDENTIFIER /* findById(3)?.markAsRead */
    | expression OPTIONAL_CHAIN LPAREN arguments RPAREN 
    | expression LPAREN arguments RPAREN
    | expression LBRACKET expression RBRACKET
    | NEW expression
    | MINUS expression %prec UNARY       /* Решение проблемы -1 */
    | INC expression
    | expression INC
    | NOT expression
    | SPREAD expression                  /* Решение проблемы [...this.books] */
    | IDENTIFIER ARROW expression
    | LPAREN parameters RPAREN ARROW expression /* (min, b) => ... */
    | expression QUESTION expression COLON expression /* Тернарный оператор */
    ;

primary_expression:
    IDENTIFIER
    | NUMBER
    | STRING
    | BOOLEAN
    | THIS
    | NULL_TOKEN
    | UNDEFINED
    | NAN_TOKEN
    | INFINITY_TOKEN
    | LPAREN expression RPAREN
    | LBRACKET arguments RBRACKET
    | LBRACE object_properties RBRACE
    ;

arguments:
    arguments COMMA expression
    | expression
    | /* пусто */
    ;

object_properties:
    object_properties COMMA property
    | property
    | /* пусто */
    ;

property:
    IDENTIFIER COLON expression
    | IDENTIFIER /* Сокращенная запись: { total } */
    | SPREAD expression /* { ...props } */
    ;

if_statement:
    IF LPAREN expression RPAREN statement
    | IF LPAREN expression RPAREN statement ELSE statement
    ;

while_statement:
    WHILE LPAREN expression RPAREN statement
    ;

for_statement:
    FOR LPAREN variable_declaration SEMICOLON expression SEMICOLON expression RPAREN statement
    ;

try_catch_statement:
    TRY LBRACE statements RBRACE CATCH LPAREN IDENTIFIER RPAREN LBRACE statements RBRACE
    ;

import_export_statement:
    IMPORT IDENTIFIER FROM STRING
    | EXPORT variable_declaration
    | EXPORT function_declaration
    ;

return_statement:
    RETURN expression
    | RETURN
    ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Syntax Error at line %d: %s\n", yylineno, s);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <source_file>\n", argv[0]);
        return 1;
    }
    FILE* file = fopen(argv[1], "r");
    if (!file) {
        perror("Cannot open file");
        return 1;
    }
    yyin = file;
    if (yyparse() != 0) return 1;
    printf("Parsing successful!\n");
    return 0;
}