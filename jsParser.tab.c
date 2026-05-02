/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 4 "jsParser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex();
extern int yylineno;
extern FILE *yyin;
void yyerror(const char *s);

#line 82 "jsParser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "jsParser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_NUMBER = 4,                     /* NUMBER  */
  YYSYMBOL_STRING = 5,                     /* STRING  */
  YYSYMBOL_BOOLEAN = 6,                    /* BOOLEAN  */
  YYSYMBOL_CONST = 7,                      /* CONST  */
  YYSYMBOL_LET = 8,                        /* LET  */
  YYSYMBOL_VAR_KEYWORD = 9,                /* VAR_KEYWORD  */
  YYSYMBOL_FUNCTION = 10,                  /* FUNCTION  */
  YYSYMBOL_CLASS = 11,                     /* CLASS  */
  YYSYMBOL_CONSTRUCTOR = 12,               /* CONSTRUCTOR  */
  YYSYMBOL_THIS = 13,                      /* THIS  */
  YYSYMBOL_NEW = 14,                       /* NEW  */
  YYSYMBOL_RETURN = 15,                    /* RETURN  */
  YYSYMBOL_IF = 16,                        /* IF  */
  YYSYMBOL_ELSE = 17,                      /* ELSE  */
  YYSYMBOL_FOR = 18,                       /* FOR  */
  YYSYMBOL_WHILE = 19,                     /* WHILE  */
  YYSYMBOL_TYPEOF = 20,                    /* TYPEOF  */
  YYSYMBOL_USE_STRICT = 21,                /* USE_STRICT  */
  YYSYMBOL_IMPORT = 22,                    /* IMPORT  */
  YYSYMBOL_EXPORT = 23,                    /* EXPORT  */
  YYSYMBOL_FROM = 24,                      /* FROM  */
  YYSYMBOL_TRY = 25,                       /* TRY  */
  YYSYMBOL_CATCH = 26,                     /* CATCH  */
  YYSYMBOL_FINALLY = 27,                   /* FINALLY  */
  YYSYMBOL_THROW = 28,                     /* THROW  */
  YYSYMBOL_AND = 29,                       /* AND  */
  YYSYMBOL_OR = 30,                        /* OR  */
  YYSYMBOL_NOT = 31,                       /* NOT  */
  YYSYMBOL_BIT_AND = 32,                   /* BIT_AND  */
  YYSYMBOL_BIT_OR = 33,                    /* BIT_OR  */
  YYSYMBOL_BIT_XOR = 34,                   /* BIT_XOR  */
  YYSYMBOL_BIT_NOT = 35,                   /* BIT_NOT  */
  YYSYMBOL_LSHIFT = 36,                    /* LSHIFT  */
  YYSYMBOL_RSHIFT = 37,                    /* RSHIFT  */
  YYSYMBOL_URSHIFT = 38,                   /* URSHIFT  */
  YYSYMBOL_STRICT_EQUAL = 39,              /* STRICT_EQUAL  */
  YYSYMBOL_STRICT_NOT_EQUAL = 40,          /* STRICT_NOT_EQUAL  */
  YYSYMBOL_EQUAL = 41,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 42,                 /* NOT_EQUAL  */
  YYSYMBOL_GE = 43,                        /* GE  */
  YYSYMBOL_LE = 44,                        /* LE  */
  YYSYMBOL_G = 45,                         /* G  */
  YYSYMBOL_L = 46,                         /* L  */
  YYSYMBOL_INC = 47,                       /* INC  */
  YYSYMBOL_DEC = 48,                       /* DEC  */
  YYSYMBOL_ADD_ASSIGN = 49,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 50,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 51,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 52,                /* DIV_ASSIGN  */
  YYSYMBOL_POW_ASSIGN = 53,                /* POW_ASSIGN  */
  YYSYMBOL_POW = 54,                       /* POW  */
  YYSYMBOL_ARROW = 55,                     /* ARROW  */
  YYSYMBOL_ASSIGN = 56,                    /* ASSIGN  */
  YYSYMBOL_PLUS = 57,                      /* PLUS  */
  YYSYMBOL_MINUS = 58,                     /* MINUS  */
  YYSYMBOL_MUL = 59,                       /* MUL  */
  YYSYMBOL_DIV = 60,                       /* DIV  */
  YYSYMBOL_MOD = 61,                       /* MOD  */
  YYSYMBOL_LPAREN = 62,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 63,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 64,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 65,                    /* RBRACE  */
  YYSYMBOL_LBRACKET = 66,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 67,                  /* RBRACKET  */
  YYSYMBOL_SEMICOLON = 68,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 69,                     /* COMMA  */
  YYSYMBOL_DOT = 70,                       /* DOT  */
  YYSYMBOL_QUESTION = 71,                  /* QUESTION  */
  YYSYMBOL_COLON = 72,                     /* COLON  */
  YYSYMBOL_NULL_TOKEN = 73,                /* NULL_TOKEN  */
  YYSYMBOL_UNDEFINED = 74,                 /* UNDEFINED  */
  YYSYMBOL_NAN_TOKEN = 75,                 /* NAN_TOKEN  */
  YYSYMBOL_INFINITY_TOKEN = 76,            /* INFINITY_TOKEN  */
  YYSYMBOL_SPREAD = 77,                    /* SPREAD  */
  YYSYMBOL_OPTIONAL_CHAIN = 78,            /* OPTIONAL_CHAIN  */
  YYSYMBOL_TRIPLE_DOT = 79,                /* TRIPLE_DOT  */
  YYSYMBOL_LOWER_THAN_ELSE = 80,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_UMINUS = 81,                    /* UMINUS  */
  YYSYMBOL_YYACCEPT = 82,                  /* $accept  */
  YYSYMBOL_program = 83,                   /* program  */
  YYSYMBOL_statements = 84,                /* statements  */
  YYSYMBOL_statement = 85,                 /* statement  */
  YYSYMBOL_variable_declaration = 86,      /* variable_declaration  */
  YYSYMBOL_declaration_keyword = 87,       /* declaration_keyword  */
  YYSYMBOL_function_declaration = 88,      /* function_declaration  */
  YYSYMBOL_parameters = 89,                /* parameters  */
  YYSYMBOL_parameter = 90,                 /* parameter  */
  YYSYMBOL_class_declaration = 91,         /* class_declaration  */
  YYSYMBOL_class_body = 92,                /* class_body  */
  YYSYMBOL_class_member = 93,              /* class_member  */
  YYSYMBOL_expression = 94,                /* expression  */
  YYSYMBOL_primary_expression = 95,        /* primary_expression  */
  YYSYMBOL_elements = 96,                  /* elements  */
  YYSYMBOL_element = 97,                   /* element  */
  YYSYMBOL_arguments = 98,                 /* arguments  */
  YYSYMBOL_argument = 99,                  /* argument  */
  YYSYMBOL_object_properties = 100,        /* object_properties  */
  YYSYMBOL_property = 101,                 /* property  */
  YYSYMBOL_arrow_body = 102,               /* arrow_body  */
  YYSYMBOL_if_statement = 103,             /* if_statement  */
  YYSYMBOL_while_statement = 104,          /* while_statement  */
  YYSYMBOL_for_statement = 105,            /* for_statement  */
  YYSYMBOL_try_catch_statement = 106,      /* try_catch_statement  */
  YYSYMBOL_import_export_statement = 107,  /* import_export_statement  */
  YYSYMBOL_return_statement = 108,         /* return_statement  */
  YYSYMBOL_throw_statement = 109           /* throw_statement  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1969

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  263

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   336


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    59,    59,    63,    64,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      87,    88,    92,    92,    92,    97,    98,   102,   103,   104,
     108,   109,   113,   117,   118,   122,   123,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   186,   187,   188,
     192,   193,   198,   199,   200,   204,   205,   210,   211,   215,
     216,   217,   222,   223,   228,   229,   230,   231,   235,   236,
     240,   241,   245,   246,   247,   251,   252,   253,   257,   258,
     262,   263
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER", "NUMBER",
  "STRING", "BOOLEAN", "CONST", "LET", "VAR_KEYWORD", "FUNCTION", "CLASS",
  "CONSTRUCTOR", "THIS", "NEW", "RETURN", "IF", "ELSE", "FOR", "WHILE",
  "TYPEOF", "USE_STRICT", "IMPORT", "EXPORT", "FROM", "TRY", "CATCH",
  "FINALLY", "THROW", "AND", "OR", "NOT", "BIT_AND", "BIT_OR", "BIT_XOR",
  "BIT_NOT", "LSHIFT", "RSHIFT", "URSHIFT", "STRICT_EQUAL",
  "STRICT_NOT_EQUAL", "EQUAL", "NOT_EQUAL", "GE", "LE", "G", "L", "INC",
  "DEC", "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN",
  "POW_ASSIGN", "POW", "ARROW", "ASSIGN", "PLUS", "MINUS", "MUL", "DIV",
  "MOD", "LPAREN", "RPAREN", "LBRACE", "RBRACE", "LBRACKET", "RBRACKET",
  "SEMICOLON", "COMMA", "DOT", "QUESTION", "COLON", "NULL_TOKEN",
  "UNDEFINED", "NAN_TOKEN", "INFINITY_TOKEN", "SPREAD", "OPTIONAL_CHAIN",
  "TRIPLE_DOT", "LOWER_THAN_ELSE", "UMINUS", "$accept", "program",
  "statements", "statement", "variable_declaration", "declaration_keyword",
  "function_declaration", "parameters", "parameter", "class_declaration",
  "class_body", "class_member", "expression", "primary_expression",
  "elements", "element", "arguments", "argument", "object_properties",
  "property", "arrow_body", "if_statement", "while_statement",
  "for_statement", "try_catch_statement", "import_export_statement",
  "return_statement", "throw_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-111)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-101)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -111,     6,  1038,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,    43,    55,  -111,  1364,  1364,     1,    19,    50,    -7,
      63,    18,    56,  1364,  1364,  1364,  1364,  1364,  1364,   131,
      65,   163,  -111,  -111,  -111,  -111,  -111,    58,   115,  -111,
    -111,  1438,    73,  -111,  -111,  -111,  -111,    61,    62,    64,
      69,    74,   210,   -26,  1740,  1364,   116,  1364,  -111,   109,
     129,  -111,  -111,  -111,  1740,   -26,   -26,   -26,   -26,   -26,
     137,  1364,  1740,   -40,  -111,   -54,    48,  -111,  1364,  1740,
     -20,  -111,  -111,    90,  1364,  1364,  1364,  1364,  1364,  1364,
    1364,  1364,  1364,  1364,  -111,  -111,  1364,  1364,  1364,  1364,
    1364,  1364,  1364,  1364,  1364,  1364,  1364,  1364,   210,  1364,
    -111,   144,  1364,     0,  1400,  -111,  -111,  -111,   148,  -111,
    1481,    84,  1524,   158,   298,    91,  1740,  -111,   210,   148,
    1364,  -111,    65,  1740,  -111,   163,  1364,  1863,  1823,  1891,
    1891,  1891,  1891,    49,    49,    49,    49,  1740,  1740,  1740,
    1740,  1740,   200,  1740,    95,    95,   200,   200,   200,   -39,
    1567,  -111,  1610,  -111,   210,    65,  1740,  -111,   108,   -32,
    -111,     4,  1112,  1364,  1186,  -111,     7,   148,  -111,   -18,
    1740,  -111,  -111,  1740,  -111,  -111,  1364,   -15,   372,  1364,
     106,   148,   112,   118,  -111,  -111,  1260,   164,  1654,  1260,
    -111,   122,   121,   -13,   126,  1783,  -111,  -111,  1740,  -111,
    -111,   148,   148,   -30,   -12,  1038,  1364,   127,   183,  -111,
     132,  -111,   446,    -4,    36,  1038,  -111,  -111,  1697,  -111,
     128,   520,  -111,   594,  -111,   134,   136,   138,  1334,   145,
    -111,   668,  -111,  -111,  -111,  -111,  1260,  -111,  -111,   149,
     742,   816,   152,   890,  -111,  -111,  -111,  -111,   174,   154,
    -111,   964,  -111
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     2,     1,    75,    76,    77,    78,    22,    23,
      24,     0,     0,    79,     0,   119,     0,     0,     0,     0,
       0,     0,     0,   121,     0,     0,     0,     0,     0,    94,
       0,    89,    80,    81,    82,    83,     3,     5,     0,     7,
       8,     0,    37,     9,    11,    10,    12,     0,    13,    15,
       0,     0,    94,    68,   118,     0,     0,     0,    19,     0,
       0,   116,   117,     4,   120,    73,    69,    71,    39,    38,
       0,     0,    95,     0,    93,   100,     0,    98,     0,    90,
       0,    88,     6,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    70,    72,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
      17,     0,     0,     0,     0,    18,    14,    16,    29,    34,
       0,     0,     0,     0,     0,     0,    96,    84,     0,    29,
       0,    86,     0,    91,    85,     0,     0,    50,    51,    47,
      48,    46,    49,    54,    55,    52,    53,    57,    58,    59,
      60,    61,    45,    56,    40,    41,    42,    43,    44,     0,
       0,    63,     0,    64,    94,     4,   102,    74,    30,     0,
      28,     0,     0,     0,     0,   115,     0,    29,    92,     0,
      99,    97,    87,    21,    65,    67,     0,     0,     0,     0,
       0,     0,     0,     0,    32,    33,     0,   104,     0,     0,
     108,     0,     0,     0,     0,    62,    66,   103,    31,     4,
      27,    29,    29,    75,     0,     0,     0,     0,     0,     4,
       0,     4,     0,     0,     0,     0,   105,   106,     0,   109,
       0,     0,     4,     0,    25,     0,     0,     0,     0,     0,
     113,     0,   101,     4,     4,   107,     0,   110,     4,     0,
       0,     0,     0,     0,    26,    36,    35,   111,   112,     0,
       4,     0,   114
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -111,  -111,   -61,    54,    -1,  -111,   198,  -110,    31,  -111,
    -111,  -111,   -14,  -111,  -111,    96,  -104,   102,  -111,   100,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    36,    37,    38,    39,   169,   170,    40,
     171,   195,    41,    42,    80,    81,    73,    74,    76,    77,
     167,    43,    44,    45,    46,    47,    48,    49
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      53,    54,   124,   163,   159,   225,     3,   192,   129,    64,
      65,    66,    67,    68,    69,    72,   193,    79,   130,   179,
      61,    94,    95,   127,   184,     8,     9,    10,    11,   128,
     128,   190,   129,   201,   202,  -100,   108,   191,    72,  -100,
     109,   120,   130,   122,   111,   204,    50,   134,   206,   135,
     220,   191,   113,   226,   128,   121,   191,   126,    51,   235,
     187,    58,   164,    55,   133,   191,    59,   203,    75,   194,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
      60,    56,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,    72,   160,    94,    95,   162,   236,
     166,   223,   224,   101,   188,   191,   103,   104,   105,   106,
     107,   108,    57,   131,    72,   109,   180,   132,    83,   111,
      63,    79,   183,     8,     9,    10,    82,   113,   114,   115,
     116,   118,   117,   123,     4,     5,     6,     7,   119,    70,
     125,    70,    94,    95,    13,    14,   136,   161,   222,   101,
      72,   168,   173,   177,   105,   106,   107,   108,   231,   198,
     233,   109,    24,   175,   189,   111,     4,     5,     6,     7,
     209,   241,   205,   113,   211,   208,    13,    14,    25,    26,
     212,   215,   250,   251,   218,   219,   230,   253,    27,    28,
     221,   239,   229,    52,    24,    30,   232,    31,   243,   261,
     244,   259,   228,   245,    32,    33,    34,    35,    71,   248,
      25,    26,   254,     4,     5,     6,     7,   257,   260,    62,
      27,    28,   210,    13,    14,    52,   197,    30,   200,    31,
     178,   182,   181,     0,     0,     0,    32,    33,    34,    35,
      78,    24,     0,     0,     0,     0,     0,    94,    95,     0,
     214,     0,     0,   217,   101,     0,     0,    25,    26,     0,
       0,     0,   108,     0,     0,     0,   109,    27,    28,   227,
     111,     0,    52,     0,    30,     0,    31,     0,   113,   237,
       0,     0,     0,    32,    33,    34,    35,    71,     0,     0,
       0,     0,   247,     0,     0,     0,     0,     0,     0,     0,
     252,     4,     5,     6,     7,     8,     9,    10,    11,    12,
       0,    13,    14,    15,    16,     0,    17,    18,     0,    19,
      20,    21,     0,    22,     0,     0,    23,     0,     0,    24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,    27,    28,     0,     0,     0,
      29,     0,    30,   176,    31,     0,     0,     0,     0,     0,
       0,    32,    33,    34,    35,     4,     5,     6,     7,     8,
       9,    10,    11,    12,     0,    13,    14,    15,    16,     0,
      17,    18,     0,    19,    20,    21,     0,    22,     0,     0,
      23,     0,     0,    24,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,    27,
      28,     0,     0,     0,    29,     0,    30,   207,    31,     0,
       0,     0,     0,     0,     0,    32,    33,    34,    35,     4,
       5,     6,     7,     8,     9,    10,    11,    12,     0,    13,
      14,    15,    16,     0,    17,    18,     0,    19,    20,    21,
       0,    22,     0,     0,    23,     0,     0,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,    27,    28,     0,     0,     0,    29,     0,
      30,   234,    31,     0,     0,     0,     0,     0,     0,    32,
      33,    34,    35,     4,     5,     6,     7,     8,     9,    10,
      11,    12,     0,    13,    14,    15,    16,     0,    17,    18,
       0,    19,    20,    21,     0,    22,     0,     0,    23,     0,
       0,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,    27,    28,     0,
       0,     0,    29,     0,    30,   240,    31,     0,     0,     0,
       0,     0,     0,    32,    33,    34,    35,     4,     5,     6,
       7,     8,     9,    10,    11,    12,     0,    13,    14,    15,
      16,     0,    17,    18,     0,    19,    20,    21,     0,    22,
       0,     0,    23,     0,     0,    24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,    27,    28,     0,     0,     0,    29,     0,    30,   242,
      31,     0,     0,     0,     0,     0,     0,    32,    33,    34,
      35,     4,     5,     6,     7,     8,     9,    10,    11,    12,
       0,    13,    14,    15,    16,     0,    17,    18,     0,    19,
      20,    21,     0,    22,     0,     0,    23,     0,     0,    24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,    27,    28,     0,     0,     0,
      29,     0,    30,   249,    31,     0,     0,     0,     0,     0,
       0,    32,    33,    34,    35,     4,     5,     6,     7,     8,
       9,    10,    11,    12,     0,    13,    14,    15,    16,     0,
      17,    18,     0,    19,    20,    21,     0,    22,     0,     0,
      23,     0,     0,    24,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,    27,
      28,     0,     0,     0,    29,     0,    30,   255,    31,     0,
       0,     0,     0,     0,     0,    32,    33,    34,    35,     4,
       5,     6,     7,     8,     9,    10,    11,    12,     0,    13,
      14,    15,    16,     0,    17,    18,     0,    19,    20,    21,
       0,    22,     0,     0,    23,     0,     0,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,    27,    28,     0,     0,     0,    29,     0,
      30,   256,    31,     0,     0,     0,     0,     0,     0,    32,
      33,    34,    35,     4,     5,     6,     7,     8,     9,    10,
      11,    12,     0,    13,    14,    15,    16,     0,    17,    18,
       0,    19,    20,    21,     0,    22,     0,     0,    23,     0,
       0,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,    27,    28,     0,
       0,     0,    29,     0,    30,   258,    31,     0,     0,     0,
       0,     0,     0,    32,    33,    34,    35,     4,     5,     6,
       7,     8,     9,    10,    11,    12,     0,    13,    14,    15,
      16,     0,    17,    18,     0,    19,    20,    21,     0,    22,
       0,     0,    23,     0,     0,    24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,    27,    28,     0,     0,     0,    29,     0,    30,   262,
      31,     0,     0,     0,     0,     0,     0,    32,    33,    34,
      35,     4,     5,     6,     7,     8,     9,    10,    11,    12,
       0,    13,    14,    15,    16,     0,    17,    18,     0,    19,
      20,    21,     0,    22,     0,     0,    23,     0,     0,    24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,    27,    28,     0,     0,     0,
      29,     0,    30,     0,    31,     0,     0,     0,     0,     0,
       0,    32,    33,    34,    35,     4,     5,     6,     7,     8,
       9,    10,    11,    12,     0,    13,    14,    15,    16,     0,
      17,    18,     0,    19,    20,    21,     0,    22,     0,     0,
      23,     0,     0,    24,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,    27,
      28,     0,     0,     0,    29,     0,   196,     0,    31,     0,
       0,     0,     0,     0,     0,    32,    33,    34,    35,     4,
       5,     6,     7,     8,     9,    10,    11,    12,     0,    13,
      14,    15,    16,     0,    17,    18,     0,    19,    20,    21,
       0,    22,     0,     0,    23,     0,     0,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,    27,    28,     0,     0,     0,    29,     0,
     199,     0,    31,     0,     0,     0,     0,     0,     0,    32,
      33,    34,    35,   213,     5,     6,     7,     8,     9,    10,
      11,    12,     0,    13,    14,    15,    16,     0,    17,    18,
       0,    19,    20,    21,     0,    22,     0,     0,    23,     0,
       0,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,    27,    28,     0,
       0,     0,    29,     0,    30,     0,    31,     0,     0,     0,
       0,     0,     0,    32,    33,    34,    35,     4,     5,     6,
       7,     8,     9,    10,    11,    12,     0,    13,    14,    15,
      16,     0,    17,    18,     0,    19,    20,    21,     0,    22,
       0,     0,    23,     0,     0,    24,     0,     4,     5,     6,
       7,     0,     0,     0,     0,     0,     0,    13,    14,     0,
       0,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,    27,    28,     0,     0,    24,    29,     0,   246,     0,
      31,     0,     0,     4,     5,     6,     7,    32,    33,    34,
      35,    25,    26,    13,    14,     0,     0,     0,     0,     0,
       0,    27,    28,     0,     0,     0,    52,     0,    30,     0,
      31,    24,     0,     0,     0,     0,     0,    32,    33,    34,
      35,     0,     0,     0,     0,     0,     0,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,    27,    28,     0,
       0,     0,    52,     0,   165,     0,    31,    84,    85,     0,
       0,     0,     0,    32,    33,    34,    35,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,     0,   102,   103,   104,   105,   106,   107,
     108,     0,     0,     0,   109,     0,   110,     0,   111,   112,
      84,    85,     0,     0,     0,     0,   113,     0,     0,     0,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,     0,   102,   103,   104,
     105,   106,   107,   108,   172,     0,     0,   109,     0,     0,
       0,   111,   112,    84,    85,     0,     0,     0,     0,   113,
       0,     0,     0,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,     0,
     102,   103,   104,   105,   106,   107,   108,   174,     0,     0,
     109,     0,     0,     0,   111,   112,    84,    85,     0,     0,
       0,     0,   113,     0,     0,     0,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,     0,   102,   103,   104,   105,   106,   107,   108,
       0,     0,     0,   109,   185,     0,     0,   111,   112,    84,
      85,     0,     0,     0,     0,   113,     0,     0,     0,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,     0,   102,   103,   104,   105,
     106,   107,   108,     0,     0,     0,   109,     0,     0,     0,
     111,   112,   186,    84,    85,     0,     0,     0,   113,     0,
       0,     0,     0,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,     0,
     102,   103,   104,   105,   106,   107,   108,     0,     0,     0,
     109,     0,   216,     0,   111,   112,    84,    85,     0,     0,
       0,     0,   113,     0,     0,     0,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,     0,   102,   103,   104,   105,   106,   107,   108,
     238,     0,     0,   109,     0,     0,     0,   111,   112,    84,
      85,     0,     0,     0,     0,   113,     0,     0,     0,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,     0,   102,   103,   104,   105,
     106,   107,   108,     0,     0,     0,   109,     0,     0,     0,
     111,   112,    84,    85,     0,     0,     0,     0,   113,     0,
       0,     0,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,     0,     0,     0,     0,     0,   101,     0,     0,
     103,   104,   105,   106,   107,   108,     0,     0,     0,   109,
       0,     0,    84,   111,   112,     0,     0,     0,     0,     0,
       0,   113,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,     0,     0,     0,     0,     0,   101,     0,     0,
     103,   104,   105,   106,   107,   108,     0,     0,     0,   109,
       0,     0,     0,   111,     0,     0,     0,     0,     0,     0,
       0,   113,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,     0,     0,     0,     0,     0,   101,     0,     0,
     103,   104,   105,   106,   107,   108,     0,     0,     0,   109,
       0,     0,     0,   111,    90,    91,    92,    93,    94,    95,
       0,   113,     0,     0,     0,   101,     0,     0,   103,   104,
     105,   106,   107,   108,     0,     0,     0,   109,     0,     0,
       0,   111,     0,     0,     0,     0,     0,     0,     0,   113
};

static const yytype_int16 yycheck[] =
{
      14,    15,    63,     3,   108,    17,     0,     3,    62,    23,
      24,    25,    26,    27,    28,    29,    12,    31,    72,   129,
      21,    47,    48,    63,    63,     7,     8,     9,    10,    69,
      69,    63,    62,    26,    27,    65,    62,    69,    52,    69,
      66,    55,    72,    57,    70,    63,     3,    67,    63,    69,
      63,    69,    78,    65,    69,    56,    69,    71,     3,    63,
     164,    68,    62,    62,    78,    69,     3,   177,     3,    65,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      62,    62,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,    47,    48,   112,    63,
     114,   211,   212,    54,   165,    69,    57,    58,    59,    60,
      61,    62,    62,    65,   128,    66,   130,    69,     3,    70,
      64,   135,   136,     7,     8,     9,    68,    78,    55,    68,
      68,    62,    68,    24,     3,     4,     5,     6,    64,    10,
       3,    10,    47,    48,    13,    14,    56,     3,   209,    54,
     164,     3,    68,    62,    59,    60,    61,    62,   219,   173,
     221,    66,    31,     5,    56,    70,     3,     4,     5,     6,
      64,   232,   186,    78,    62,   189,    13,    14,    47,    48,
      62,    17,   243,   244,    62,    64,     3,   248,    57,    58,
      64,    63,    65,    62,    31,    64,    64,    66,    64,   260,
      64,    27,   216,    65,    73,    74,    75,    76,    77,    64,
      47,    48,    63,     3,     4,     5,     6,    65,    64,    21,
      57,    58,   191,    13,    14,    62,   172,    64,   174,    66,
     128,   135,   132,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    31,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,
     196,    -1,    -1,   199,    54,    -1,    -1,    47,    48,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    66,    57,    58,   215,
      70,    -1,    62,    -1,    64,    -1,    66,    -1,    78,   225,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    -1,    -1,
      -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     246,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    13,    14,    15,    16,    -1,    18,    19,    -1,    21,
      22,    23,    -1,    25,    -1,    -1,    28,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,
      62,    -1,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    13,    14,    15,    16,    -1,
      18,    19,    -1,    21,    22,    23,    -1,    25,    -1,    -1,
      28,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    -1,    -1,    -1,    62,    -1,    64,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
      14,    15,    16,    -1,    18,    19,    -1,    21,    22,    23,
      -1,    25,    -1,    -1,    28,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    62,    -1,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    -1,    13,    14,    15,    16,    -1,    18,    19,
      -1,    21,    22,    23,    -1,    25,    -1,    -1,    28,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    -1,
      -1,    -1,    62,    -1,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    13,    14,    15,
      16,    -1,    18,    19,    -1,    21,    22,    23,    -1,    25,
      -1,    -1,    28,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    -1,    -1,    -1,    62,    -1,    64,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    13,    14,    15,    16,    -1,    18,    19,    -1,    21,
      22,    23,    -1,    25,    -1,    -1,    28,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,
      62,    -1,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    13,    14,    15,    16,    -1,
      18,    19,    -1,    21,    22,    23,    -1,    25,    -1,    -1,
      28,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    -1,    -1,    -1,    62,    -1,    64,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
      14,    15,    16,    -1,    18,    19,    -1,    21,    22,    23,
      -1,    25,    -1,    -1,    28,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    62,    -1,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    -1,    13,    14,    15,    16,    -1,    18,    19,
      -1,    21,    22,    23,    -1,    25,    -1,    -1,    28,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    -1,
      -1,    -1,    62,    -1,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    13,    14,    15,
      16,    -1,    18,    19,    -1,    21,    22,    23,    -1,    25,
      -1,    -1,    28,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    -1,    -1,    -1,    62,    -1,    64,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    13,    14,    15,    16,    -1,    18,    19,    -1,    21,
      22,    23,    -1,    25,    -1,    -1,    28,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,
      62,    -1,    64,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    13,    14,    15,    16,    -1,
      18,    19,    -1,    21,    22,    23,    -1,    25,    -1,    -1,
      28,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    -1,    -1,    -1,    62,    -1,    64,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
      14,    15,    16,    -1,    18,    19,    -1,    21,    22,    23,
      -1,    25,    -1,    -1,    28,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    62,    -1,
      64,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    -1,    13,    14,    15,    16,    -1,    18,    19,
      -1,    21,    22,    23,    -1,    25,    -1,    -1,    28,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    -1,
      -1,    -1,    62,    -1,    64,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    13,    14,    15,
      16,    -1,    18,    19,    -1,    21,    22,    23,    -1,    25,
      -1,    -1,    28,    -1,    -1,    31,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    -1,
      -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    -1,    -1,    31,    62,    -1,    64,    -1,
      66,    -1,    -1,     3,     4,     5,     6,    73,    74,    75,
      76,    47,    48,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    -1,    -1,    -1,    62,    -1,    64,    -1,
      66,    31,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    -1,
      -1,    -1,    62,    -1,    64,    -1,    66,    29,    30,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    -1,    -1,    -1,    66,    -1,    68,    -1,    70,    71,
      29,    30,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    66,    -1,    -1,
      -1,    70,    71,    29,    30,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      66,    -1,    -1,    -1,    70,    71,    29,    30,    -1,    -1,
      -1,    -1,    78,    -1,    -1,    -1,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      -1,    -1,    -1,    66,    67,    -1,    -1,    70,    71,    29,
      30,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      70,    71,    72,    29,    30,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    -1,    -1,    -1,
      66,    -1,    68,    -1,    70,    71,    29,    30,    -1,    -1,
      -1,    -1,    78,    -1,    -1,    -1,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    66,    -1,    -1,    -1,    70,    71,    29,
      30,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      70,    71,    29,    30,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      57,    58,    59,    60,    61,    62,    -1,    -1,    -1,    66,
      -1,    -1,    29,    70,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      57,    58,    59,    60,    61,    62,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      57,    58,    59,    60,    61,    62,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    70,    43,    44,    45,    46,    47,    48,
      -1,    78,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,
      59,    60,    61,    62,    -1,    -1,    -1,    66,    -1,    -1,
      -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    83,    84,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    13,    14,    15,    16,    18,    19,    21,
      22,    23,    25,    28,    31,    47,    48,    57,    58,    62,
      64,    66,    73,    74,    75,    76,    85,    86,    87,    88,
      91,    94,    95,   103,   104,   105,   106,   107,   108,   109,
       3,     3,    62,    94,    94,    62,    62,    62,    68,     3,
      62,    86,    88,    64,    94,    94,    94,    94,    94,    94,
      10,    77,    94,    98,    99,     3,   100,   101,    77,    94,
      96,    97,    68,     3,    29,    30,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    56,    57,    58,    59,    60,    61,    62,    66,
      68,    70,    71,    78,    55,    68,    68,    68,    62,    64,
      94,    86,    94,    24,    84,     3,    94,    63,    69,    62,
      72,    65,    69,    94,    67,    69,    56,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    98,
      94,     3,    94,     3,    62,    64,    94,   102,     3,    89,
      90,    92,    63,    68,    63,     5,    65,    62,    99,    89,
      94,   101,    97,    94,    63,    67,    72,    98,    84,    56,
      63,    69,     3,    12,    65,    93,    64,    85,    94,    64,
      85,    26,    27,    89,    63,    94,    63,    65,    94,    64,
      90,    62,    62,     3,    85,    17,    68,    85,    62,    64,
      63,    64,    84,    89,    89,    17,    65,    85,    94,    65,
       3,    84,    64,    84,    65,    63,    63,    85,    63,    63,
      65,    84,    65,    64,    64,    65,    64,    85,    64,    65,
      84,    84,    85,    84,    63,    65,    65,    65,    65,    27,
      64,    84,    65
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    82,    83,    84,    84,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      86,    86,    87,    87,    87,    88,    88,    89,    89,    89,
      90,    90,    91,    92,    92,    93,    93,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    96,    96,    96,
      97,    97,    98,    98,    98,    99,    99,   100,   100,   101,
     101,   101,   102,   102,   103,   103,   103,   103,   104,   104,
     105,   105,   106,   106,   106,   107,   107,   107,   108,   108,
     109,   109
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     2,     2,     2,
       2,     4,     1,     1,     1,     8,    10,     3,     1,     0,
       1,     3,     5,     2,     0,     7,     7,     1,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     5,     3,     3,     4,     5,     4,     2,     2,
       2,     2,     2,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     1,     0,
       1,     2,     3,     1,     0,     1,     2,     3,     1,     3,
       1,     7,     1,     3,     5,     7,     7,     9,     5,     7,
       9,    11,    11,     8,    15,     4,     2,     2,     2,     1,
       2,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {

#line 1698 "jsParser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 266 "jsParser.y"


/* Обработка ошибок */
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

    printf("Parsed successfully!\n");
    return 0;
}
