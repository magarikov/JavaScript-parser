

%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex();
extern int yylineno;
extern FILE *yyin;
void yyerror(const char *s);
%}

/* Типы данных для стека парсера */
%union {
    char *str;
}

/* Определение токенов (из обновленного лексера) */
%token <str> IDENTIFIER NUMBER STRING BOOLEAN
%token CONST LET VAR_KEYWORD FUNCTION CLASS CONSTRUCTOR THIS NEW RETURN
%token IF ELSE FOR WHILE TYPEOF USE_STRICT IMPORT EXPORT FROM TRY CATCH FINALLY THROW
%token AND OR NOT BIT_AND BIT_OR BIT_XOR BIT_NOT LSHIFT RSHIFT URSHIFT
%token STRICT_EQUAL STRICT_NOT_EQUAL EQUAL NOT_EQUAL GE LE G L
%token INC DEC ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN POW_ASSIGN POW ARROW ASSIGN
%token PLUS MINUS MUL DIV MOD
%token LPAREN RPAREN LBRACE RBRACE LBRACKET RBRACKET SEMICOLON COMMA DOT QUESTION COLON
%token NULL_TOKEN UNDEFINED NAN_TOKEN INFINITY_TOKEN

/* Таблица приоритетов (от низшего к высшему)[cite: 2] */
%right ASSIGN ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN POW_ASSIGN
%right QUESTION COLON
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
%right NOT BIT_NOT INC DEC TYPEOF NEW
%left DOT LPAREN LBRACKET

%%

/* Грамматика */

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
    ;

/* Переменные */
variable_declaration:
    declaration_keyword IDENTIFIER
    | declaration_keyword IDENTIFIER ASSIGN expression
    ;

declaration_keyword:
    CONST | LET | VAR_KEYWORD
    ;

/* Функции и классы */
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
    | IDENTIFIER ASSIGN expression /* Дефолтные значения как в Book */
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

/* Выражения (самая объемная часть)[cite: 1, 2] */
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
    | expression G expression
    | expression L expression
    | expression GE expression
    | expression LE expression
    | expression ASSIGN expression
    | expression ADD_ASSIGN expression
    | expression DOT IDENTIFIER         /* this.id[cite: 1] */
    | expression LPAREN arguments RPAREN /* вызов функции/метода[cite: 1] */
    | expression LBRACKET expression RBRACKET /* доступ по индексу list[0][cite: 1] */
    | NEW expression                     /* new Date()[cite: 1] */
    | INC expression
    | expression INC
    | NOT expression
    | IDENTIFIER ARROW expression        /* стрелочная функция[cite: 1] */
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
    | LBRACKET arguments RBRACKET        /* [1, 2, 3][cite: 1] */
    | LBRACE object_properties RBRACE    /* {name: "Ivan"}[cite: 1] */
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
    ;

/* Управляющие конструкции[cite: 1] */
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
    | TRY LBRACE statements RBRACE FINALLY LBRACE statements RBRACE
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

/* Обработка ошибок[cite: 2] */
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

    if (yyparse() != 0)
        return 1;


    return 0;
}