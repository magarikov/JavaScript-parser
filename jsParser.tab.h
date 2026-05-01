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
    IF = 271,                      /* IF  */
    ELSE = 272,                    /* ELSE  */
    FOR = 273,                     /* FOR  */
    WHILE = 274,                   /* WHILE  */
    TYPEOF = 275,                  /* TYPEOF  */
    USE_STRICT = 276,              /* USE_STRICT  */
    IMPORT = 277,                  /* IMPORT  */
    EXPORT = 278,                  /* EXPORT  */
    FROM = 279,                    /* FROM  */
    TRY = 280,                     /* TRY  */
    CATCH = 281,                   /* CATCH  */
    FINALLY = 282,                 /* FINALLY  */
    THROW = 283,                   /* THROW  */
    AND = 284,                     /* AND  */
    OR = 285,                      /* OR  */
    NOT = 286,                     /* NOT  */
    BIT_AND = 287,                 /* BIT_AND  */
    BIT_OR = 288,                  /* BIT_OR  */
    BIT_XOR = 289,                 /* BIT_XOR  */
    BIT_NOT = 290,                 /* BIT_NOT  */
    LSHIFT = 291,                  /* LSHIFT  */
    RSHIFT = 292,                  /* RSHIFT  */
    URSHIFT = 293,                 /* URSHIFT  */
    STRICT_EQUAL = 294,            /* STRICT_EQUAL  */
    STRICT_NOT_EQUAL = 295,        /* STRICT_NOT_EQUAL  */
    EQUAL = 296,                   /* EQUAL  */
    NOT_EQUAL = 297,               /* NOT_EQUAL  */
    GE = 298,                      /* GE  */
    LE = 299,                      /* LE  */
    G = 300,                       /* G  */
    L = 301,                       /* L  */
    INC = 302,                     /* INC  */
    DEC = 303,                     /* DEC  */
    ADD_ASSIGN = 304,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 305,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 306,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 307,              /* DIV_ASSIGN  */
    POW_ASSIGN = 308,              /* POW_ASSIGN  */
    POW = 309,                     /* POW  */
    ARROW = 310,                   /* ARROW  */
    ASSIGN = 311,                  /* ASSIGN  */
    PLUS = 312,                    /* PLUS  */
    MINUS = 313,                   /* MINUS  */
    MUL = 314,                     /* MUL  */
    DIV = 315,                     /* DIV  */
    MOD = 316,                     /* MOD  */
    LPAREN = 317,                  /* LPAREN  */
    RPAREN = 318,                  /* RPAREN  */
    LBRACE = 319,                  /* LBRACE  */
    RBRACE = 320,                  /* RBRACE  */
    LBRACKET = 321,                /* LBRACKET  */
    RBRACKET = 322,                /* RBRACKET  */
    SEMICOLON = 323,               /* SEMICOLON  */
    COMMA = 324,                   /* COMMA  */
    DOT = 325,                     /* DOT  */
    QUESTION = 326,                /* QUESTION  */
    COLON = 327,                   /* COLON  */
    NULL_TOKEN = 328,              /* NULL_TOKEN  */
    UNDEFINED = 329,               /* UNDEFINED  */
    NAN_TOKEN = 330,               /* NAN_TOKEN  */
    INFINITY_TOKEN = 331,          /* INFINITY_TOKEN  */
    SPREAD = 332,                  /* SPREAD  */
    OPTIONAL_CHAIN = 333,          /* OPTIONAL_CHAIN  */
    TRIPLE_DOT = 334,              /* TRIPLE_DOT  */
    LOWER_THAN_ELSE = 335,         /* LOWER_THAN_ELSE  */
    UMINUS = 336                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "jsParser.y"

    char *str;

#line 149 "jsParser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_JSPARSER_TAB_H_INCLUDED  */
