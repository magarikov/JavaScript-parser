/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_JSPARSER_TAB_H_INCLUDED
# define YY_YY_JSPARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    NUMBER = 259,                  /* NUMBER  */
    STRING = 260,                  /* STRING  */
    BOOLEAN = 261,                 /* BOOLEAN  */
    CONST = 262,                   /* CONST  */
    LET = 263,                     /* LET  */
    VAR_KEYWORD = 264,             /* VAR_KEYWORD  */
    FUNCTION = 265,                /* FUNCTION  */
    CLASS = 266,                   /* CLASS  */
    CONSTRUCTOR = 267,             /* CONSTRUCTOR  */
    THIS = 268,                    /* THIS  */
    NEW = 269,                     /* NEW  */
    RETURN = 270,                  /* RETURN  */
    AS = 271,                      /* AS  */
    GET = 272,                     /* GET  */
    STATIC = 273,                  /* STATIC  */
    IF = 274,                      /* IF  */
    ELSE = 275,                    /* ELSE  */
    FOR = 276,                     /* FOR  */
    WHILE = 277,                   /* WHILE  */
    TYPEOF = 278,                  /* TYPEOF  */
    USE_STRICT = 279,              /* USE_STRICT  */
    IMPORT = 280,                  /* IMPORT  */
    EXPORT = 281,                  /* EXPORT  */
    FROM = 282,                    /* FROM  */
    TRY = 283,                     /* TRY  */
    CATCH = 284,                   /* CATCH  */
    FINALLY = 285,                 /* FINALLY  */
    THROW = 286,                   /* THROW  */
    AND = 287,                     /* AND  */
    OR = 288,                      /* OR  */
    NOT = 289,                     /* NOT  */
    BIT_AND = 290,                 /* BIT_AND  */
    BIT_OR = 291,                  /* BIT_OR  */
    BIT_XOR = 292,                 /* BIT_XOR  */
    BIT_NOT = 293,                 /* BIT_NOT  */
    LSHIFT = 294,                  /* LSHIFT  */
    RSHIFT = 295,                  /* RSHIFT  */
    URSHIFT = 296,                 /* URSHIFT  */
    STRICT_EQUAL = 297,            /* STRICT_EQUAL  */
    STRICT_NOT_EQUAL = 298,        /* STRICT_NOT_EQUAL  */
    EQUAL = 299,                   /* EQUAL  */
    NOT_EQUAL = 300,               /* NOT_EQUAL  */
    GE = 301,                      /* GE  */
    LE = 302,                      /* LE  */
    G = 303,                       /* G  */
    L = 304,                       /* L  */
    INC = 305,                     /* INC  */
    DEC = 306,                     /* DEC  */
    ADD_ASSIGN = 307,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 308,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 309,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 310,              /* DIV_ASSIGN  */
    POW_ASSIGN = 311,              /* POW_ASSIGN  */
    POW = 312,                     /* POW  */
    ARROW = 313,                   /* ARROW  */
    ASSIGN = 314,                  /* ASSIGN  */
    PLUS = 315,                    /* PLUS  */
    MINUS = 316,                   /* MINUS  */
    MUL = 317,                     /* MUL  */
    DIV = 318,                     /* DIV  */
    MOD = 319,                     /* MOD  */
    LPAREN = 320,                  /* LPAREN  */
    RPAREN = 321,                  /* RPAREN  */
    LBRACE = 322,                  /* LBRACE  */
    RBRACE = 323,                  /* RBRACE  */
    LBRACKET = 324,                /* LBRACKET  */
    RBRACKET = 325,                /* RBRACKET  */
    SEMICOLON = 326,               /* SEMICOLON  */
    COMMA = 327,                   /* COMMA  */
    DOT = 328,                     /* DOT  */
    QUESTION = 329,                /* QUESTION  */
    COLON = 330,                   /* COLON  */
    NULL_TOKEN = 331,              /* NULL_TOKEN  */
    UNDEFINED = 332,               /* UNDEFINED  */
    NAN_TOKEN = 333,               /* NAN_TOKEN  */
    INFINITY_TOKEN = 334,          /* INFINITY_TOKEN  */
    SPREAD = 335,                  /* SPREAD  */
    OPTIONAL_CHAIN = 336,          /* OPTIONAL_CHAIN  */
    TRIPLE_DOT = 337,              /* TRIPLE_DOT  */
    LOWER_THAN_ELSE = 338,         /* LOWER_THAN_ELSE  */
    UMINUS = 339                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "jsParser.y"

    char *str;

#line 152 "jsParser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_JSPARSER_TAB_H_INCLUDED  */
