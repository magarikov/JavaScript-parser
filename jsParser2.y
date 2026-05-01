



%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Прототипы функций
void yyerror(const char *s);
int yylex();

extern int yylineno;
%}

/* Стек значений (то, что передает лексер в yylval) */
%union {
    char *str;
}

/* Определение токенов на основе лексера и Синтаксис.md[cite: 1, 2] */
%token <str> NUMBER STRING IDENTIFIER BOOLEAN
%token CONST LET VAR_KEYWORD FUNCTION CLASS CONSTRUCTOR NEW RETURN
%token IF ELSE FOR WHILE TYPEOF THIS USE_STRICT
%token ARROW INC ADD_ASSIGN STRICT_EQUAL EQUAL ASSIGN
%token PLUS MINUS MUL DIV G L QUESTION COLON DOT
%token LPAREN RPAREN LBRACE RBRACE LBRACKET RBRACKET SEMICOLON COMMA
%token NULL_TOKEN UNDEFINED

/* Приоритеты операций (от низкого к высокому) */
%right ASSIGN ADD_ASSIGN
%left EQUAL STRICT_EQUAL G L
%left PLUS MINUS
%left MUL DIV
%right INC TYPEOF
%left DOT LBRACKET LPAREN

%%

/* Точка входа в программу */
program:
    directives source_elements
    ;

directives:
    /* пусто */
    | USE_STRICT SEMICOLON
    ;

source_elements:
    /* пусто */
    | source_elements statement
    | source_elements function_declaration
    | source_elements class_declaration
    ;

/* Объявление класса (как в примере Book) */
class_declaration:
    CLASS IDENTIFIER LBRACE class_body RBRACE { printf("Parsed class: %s\n", $2); }
    ;

class_body:
    /* пусто */
    | class_body constructor_declaration
    | class_body method_declaration
    ;

constructor_declaration:
    CONSTRUCTOR LPAREN parameters RPAREN block { printf("Parsed constructor\n"); }
    ;

method_declaration:
    IDENTIFIER LPAREN parameters RPAREN block { printf("Parsed method: %s\n", $1); }
    ;

/* Функции */
function_declaration:
    FUNCTION IDENTIFIER LPAREN parameters RPAREN block { printf("Parsed function: %s\n", $2); }
    ;

parameters:
    /* пусто */
    | parameter_list
    ;

parameter_list:
    IDENTIFIER
    | IDENTIFIER ASSIGN expression /* параметр по умолчанию, как isRead = false[cite: 1] */
    | parameter_list COMMA IDENTIFIER
    ;

block:
    LBRACE source_elements RBRACE
    ;

/* Инструкции (Statements) */
statement:
    variable_declaration SEMICOLON
    | expression_statement SEMICOLON
    | if_statement
    | return_statement SEMICOLON
    ;

variable_declaration:
    VAR_KEYWORD IDENTIFIER ASSIGN expression
    | LET IDENTIFIER ASSIGN expression
    | CONST IDENTIFIER ASSIGN expression
    ;

if_statement:
    IF LPAREN expression RPAREN statement ELSE statement
    | IF LPAREN expression RPAREN statement
    ;

return_statement:
    RETURN expression
    ;

expression_statement:
    expression
    ;

/* Выражения (самая сложная часть)[cite: 1] */
expression:
    primary_expression
    | expression PLUS expression
    | expression MINUS expression
    | expression MUL expression
    | expression DIV expression
    | expression ASSIGN expression
    | expression DOT IDENTIFIER         /* this.id[cite: 1] */
    | expression LPAREN arguments RPAREN /* вызов функции или метода[cite: 1] */
    | NEW IDENTIFIER LPAREN arguments RPAREN /* new Date()[cite: 1] */
    | IDENTIFIER INC                     /* a++[cite: 1] */
    | expression QUESTION expression COLON expression /* тернарный оператор[cite: 1] */
    ;

primary_expression:
    NUMBER
    | STRING
    | BOOLEAN
    | IDENTIFIER
    | THIS
    | NULL_TOKEN
    | UNDEFINED
    | array_literal
    | object_literal
    | LPAREN expression RPAREN
    ;

/* Массивы и Объекты[cite: 1] */
array_literal:
    LBRACKET arguments RBRACKET
    ;

object_literal:
    LBRACE property_list RBRACE
    ;

property_list:
    /* пусто */
    | IDENTIFIER COLON expression
    | property_list COMMA IDENTIFIER COLON expression
    ;

arguments:
    /* пусто */
    | expression_list
    ;

expression_list:
    expression
    | expression_list COMMA expression
    ;

%%

/* Функция вывода ошибок, как в твоем примере 
void yyerror(const char *s) {
    fprintf(stderr, "Grammar Error: %s at line %d\n", s, yylineno);
}

/* Main не нужен, если ты используешь main из лексера или вызываешь yyparse() отдельно */