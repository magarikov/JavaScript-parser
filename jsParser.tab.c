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
  YYSYMBOL_AS = 16,                        /* AS  */
  YYSYMBOL_GET = 17,                       /* GET  */
  YYSYMBOL_STATIC = 18,                    /* STATIC  */
  YYSYMBOL_IF = 19,                        /* IF  */
  YYSYMBOL_ELSE = 20,                      /* ELSE  */
  YYSYMBOL_FOR = 21,                       /* FOR  */
  YYSYMBOL_WHILE = 22,                     /* WHILE  */
  YYSYMBOL_TYPEOF = 23,                    /* TYPEOF  */
  YYSYMBOL_USE_STRICT = 24,                /* USE_STRICT  */
  YYSYMBOL_IMPORT = 25,                    /* IMPORT  */
  YYSYMBOL_EXPORT = 26,                    /* EXPORT  */
  YYSYMBOL_FROM = 27,                      /* FROM  */
  YYSYMBOL_TRY = 28,                       /* TRY  */
  YYSYMBOL_CATCH = 29,                     /* CATCH  */
  YYSYMBOL_FINALLY = 30,                   /* FINALLY  */
  YYSYMBOL_THROW = 31,                     /* THROW  */
  YYSYMBOL_AND = 32,                       /* AND  */
  YYSYMBOL_OR = 33,                        /* OR  */
  YYSYMBOL_NOT = 34,                       /* NOT  */
  YYSYMBOL_BIT_AND = 35,                   /* BIT_AND  */
  YYSYMBOL_BIT_OR = 36,                    /* BIT_OR  */
  YYSYMBOL_BIT_XOR = 37,                   /* BIT_XOR  */
  YYSYMBOL_BIT_NOT = 38,                   /* BIT_NOT  */
  YYSYMBOL_LSHIFT = 39,                    /* LSHIFT  */
  YYSYMBOL_RSHIFT = 40,                    /* RSHIFT  */
  YYSYMBOL_URSHIFT = 41,                   /* URSHIFT  */
  YYSYMBOL_STRICT_EQUAL = 42,              /* STRICT_EQUAL  */
  YYSYMBOL_STRICT_NOT_EQUAL = 43,          /* STRICT_NOT_EQUAL  */
  YYSYMBOL_EQUAL = 44,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 45,                 /* NOT_EQUAL  */
  YYSYMBOL_GE = 46,                        /* GE  */
  YYSYMBOL_LE = 47,                        /* LE  */
  YYSYMBOL_G = 48,                         /* G  */
  YYSYMBOL_L = 49,                         /* L  */
  YYSYMBOL_INC = 50,                       /* INC  */
  YYSYMBOL_DEC = 51,                       /* DEC  */
  YYSYMBOL_ADD_ASSIGN = 52,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 53,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 54,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 55,                /* DIV_ASSIGN  */
  YYSYMBOL_POW_ASSIGN = 56,                /* POW_ASSIGN  */
  YYSYMBOL_POW = 57,                       /* POW  */
  YYSYMBOL_ARROW = 58,                     /* ARROW  */
  YYSYMBOL_ASSIGN = 59,                    /* ASSIGN  */
  YYSYMBOL_PLUS = 60,                      /* PLUS  */
  YYSYMBOL_MINUS = 61,                     /* MINUS  */
  YYSYMBOL_MUL = 62,                       /* MUL  */
  YYSYMBOL_DIV = 63,                       /* DIV  */
  YYSYMBOL_MOD = 64,                       /* MOD  */
  YYSYMBOL_LPAREN = 65,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 66,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 67,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 68,                    /* RBRACE  */
  YYSYMBOL_LBRACKET = 69,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 70,                  /* RBRACKET  */
  YYSYMBOL_SEMICOLON = 71,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 72,                     /* COMMA  */
  YYSYMBOL_DOT = 73,                       /* DOT  */
  YYSYMBOL_QUESTION = 74,                  /* QUESTION  */
  YYSYMBOL_COLON = 75,                     /* COLON  */
  YYSYMBOL_NULL_TOKEN = 76,                /* NULL_TOKEN  */
  YYSYMBOL_UNDEFINED = 77,                 /* UNDEFINED  */
  YYSYMBOL_NAN_TOKEN = 78,                 /* NAN_TOKEN  */
  YYSYMBOL_INFINITY_TOKEN = 79,            /* INFINITY_TOKEN  */
  YYSYMBOL_SPREAD = 80,                    /* SPREAD  */
  YYSYMBOL_OPTIONAL_CHAIN = 81,            /* OPTIONAL_CHAIN  */
  YYSYMBOL_TRIPLE_DOT = 82,                /* TRIPLE_DOT  */
  YYSYMBOL_LOWER_THAN_ELSE = 83,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_UMINUS = 84,                    /* UMINUS  */
  YYSYMBOL_YYACCEPT = 85,                  /* $accept  */
  YYSYMBOL_program = 86,                   /* program  */
  YYSYMBOL_statements = 87,                /* statements  */
  YYSYMBOL_statement = 88,                 /* statement  */
  YYSYMBOL_terminator = 89,                /* terminator  */
  YYSYMBOL_variable_declaration = 90,      /* variable_declaration  */
  YYSYMBOL_declaration_keyword = 91,       /* declaration_keyword  */
  YYSYMBOL_function_declaration = 92,      /* function_declaration  */
  YYSYMBOL_parameters = 93,                /* parameters  */
  YYSYMBOL_parameter = 94,                 /* parameter  */
  YYSYMBOL_class_declaration = 95,         /* class_declaration  */
  YYSYMBOL_class_body = 96,                /* class_body  */
  YYSYMBOL_class_member = 97,              /* class_member  */
  YYSYMBOL_expression = 98,                /* expression  */
  YYSYMBOL_primary_expression = 99,        /* primary_expression  */
  YYSYMBOL_elements = 100,                 /* elements  */
  YYSYMBOL_element = 101,                  /* element  */
  YYSYMBOL_arguments = 102,                /* arguments  */
  YYSYMBOL_argument = 103,                 /* argument  */
  YYSYMBOL_object_properties = 104,        /* object_properties  */
  YYSYMBOL_property = 105,                 /* property  */
  YYSYMBOL_arrow_body = 106,               /* arrow_body  */
  YYSYMBOL_if_statement = 107,             /* if_statement  */
  YYSYMBOL_while_statement = 108,          /* while_statement  */
  YYSYMBOL_for_statement = 109,            /* for_statement  */
  YYSYMBOL_try_catch_statement = 110,      /* try_catch_statement  */
  YYSYMBOL_import_export_statement = 111,  /* import_export_statement  */
  YYSYMBOL_import_clause = 112,            /* import_clause  */
  YYSYMBOL_import_list = 113,              /* import_list  */
  YYSYMBOL_import_specifier = 114,         /* import_specifier  */
  YYSYMBOL_return_statement = 115,         /* return_statement  */
  YYSYMBOL_throw_statement = 116           /* throw_statement  */
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
#define YYLAST   2536

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  85
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  143
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  336

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   339


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
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    59,    59,    63,    64,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    88,    94,    95,    99,    99,    99,   104,   105,
     106,   110,   111,   112,   116,   117,   121,   125,   126,   130,
     131,   132,   133,   134,   135,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   201,   202,   203,
     204,   208,   209,   214,   215,   216,   220,   221,   226,   227,
     231,   232,   233,   238,   239,   244,   245,   246,   247,   251,
     252,   256,   257,   261,   262,   263,   269,   270,   271,   272,
     273,   277,   278,   279,   280,   284,   285,   286,   290,   291,
     296,   297,   301,   302
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
  "CONSTRUCTOR", "THIS", "NEW", "RETURN", "AS", "GET", "STATIC", "IF",
  "ELSE", "FOR", "WHILE", "TYPEOF", "USE_STRICT", "IMPORT", "EXPORT",
  "FROM", "TRY", "CATCH", "FINALLY", "THROW", "AND", "OR", "NOT",
  "BIT_AND", "BIT_OR", "BIT_XOR", "BIT_NOT", "LSHIFT", "RSHIFT", "URSHIFT",
  "STRICT_EQUAL", "STRICT_NOT_EQUAL", "EQUAL", "NOT_EQUAL", "GE", "LE",
  "G", "L", "INC", "DEC", "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN",
  "DIV_ASSIGN", "POW_ASSIGN", "POW", "ARROW", "ASSIGN", "PLUS", "MINUS",
  "MUL", "DIV", "MOD", "LPAREN", "RPAREN", "LBRACE", "RBRACE", "LBRACKET",
  "RBRACKET", "SEMICOLON", "COMMA", "DOT", "QUESTION", "COLON",
  "NULL_TOKEN", "UNDEFINED", "NAN_TOKEN", "INFINITY_TOKEN", "SPREAD",
  "OPTIONAL_CHAIN", "TRIPLE_DOT", "LOWER_THAN_ELSE", "UMINUS", "$accept",
  "program", "statements", "statement", "terminator",
  "variable_declaration", "declaration_keyword", "function_declaration",
  "parameters", "parameter", "class_declaration", "class_body",
  "class_member", "expression", "primary_expression", "elements",
  "element", "arguments", "argument", "object_properties", "property",
  "arrow_body", "if_statement", "while_statement", "for_statement",
  "try_catch_statement", "import_export_statement", "import_clause",
  "import_list", "import_specifier", "return_statement", "throw_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-125)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-112)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -125,    17,  1660,  -125,  -125,  -125,  -125,  -125,  -125,  -125,
    -125,     4,    35,  -125,  1923,  1923,   -57,   -15,   -10,    22,
      46,    55,    -8,  1923,  1923,  1923,  1923,  1923,  1923,   155,
       3,   251,  -125,  -125,  -125,  -125,  -125,  -125,  -125,    22,
      72,  -125,  -125,  2010,    84,  -125,  -125,  -125,  -125,    22,
      22,    22,    74,   118,    99,    87,   273,   219,  2312,  1923,
     190,  1923,  -125,   104,  -125,   154,   178,   163,   197,   191,
    -125,  -125,  -125,  -125,  2312,   219,   219,   219,   219,   219,
      49,  1923,  2312,   -38,  -125,   -42,  -125,   -43,  -125,  1923,
    2312,   139,  -125,  -125,   149,  1923,  1923,  1923,  1923,  1923,
    1923,  1923,  1923,  1923,  1923,  -125,  -125,  1923,  1923,  1923,
    1923,  1923,  1923,  1923,  1923,  1923,  1923,  1923,  1923,   273,
    1923,   209,  1923,    50,  -125,  1972,  -125,  -125,  -125,   118,
     158,   -27,  -125,  -125,  2053,   143,  2096,   151,   216,   205,
       5,  -125,   218,    53,   351,   160,   118,  2312,  -125,   273,
     118,  1923,  -125,   226,  2312,  -125,   251,  1923,  2435,  2395,
    1947,  1947,  1947,  1947,   123,   123,   123,   123,  2312,  2312,
    2312,  2312,  2312,    98,  2312,  2455,  2455,    98,    98,    98,
     -12,  2139,  -125,  2182,  -125,   273,     3,  2312,  -125,    -5,
    1923,   170,   118,    24,  1737,  1923,  1814,   178,  -125,   227,
    -125,   178,  -125,   118,    81,   118,     6,  -125,     8,  2312,
    -125,  -125,  2312,  -125,  -125,  1923,    56,   428,   171,  2312,
    -125,  -125,    59,   174,   237,    18,  -125,  -125,   505,   224,
    2226,   505,  -125,    85,  -125,  -125,    60,   180,   179,    61,
     181,   182,  2355,  -125,  -125,  -125,   582,   118,  -125,   118,
     185,   186,   244,   -28,   -11,  1660,  1923,   192,  -125,   195,
     250,  -125,   199,  -125,  -125,   659,  -125,    63,    65,   118,
     118,   193,  1660,  -125,  -125,  2269,  -125,  -125,   201,   736,
    -125,   813,   890,  -125,   204,   206,    68,    75,   118,   200,
    1891,   967,   207,  -125,  1044,   214,  -125,  -125,  -125,   208,
     215,    90,  -125,   505,  -125,   214,  -125,   223,  1923,  1121,
    1198,  -125,  -125,   229,   213,  1275,  1923,  2010,  -125,  -125,
    1352,  1429,  -125,  -125,   242,  2010,  -125,  -125,  -125,  1506,
     230,  -125,  -125,  -125,  1583,  -125
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     1,    83,    84,    85,    86,    25,    26,
      27,     0,     0,    87,     0,   141,     0,     0,     0,     0,
       0,     0,     0,   143,     0,     0,     0,     0,     0,   105,
       0,   100,    22,    88,    89,    90,    91,     3,    21,     5,
       0,     7,     8,     0,    45,     9,    11,    10,    12,    18,
      13,    15,     0,    33,     0,     0,   105,    76,   140,     0,
       0,     0,    20,   131,   127,     0,   137,     0,     0,     0,
     128,   129,   130,     4,   142,    81,    77,    79,    47,    46,
       0,     0,   106,     0,   104,   111,    92,     0,   109,     0,
     101,     0,    99,     6,    23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,    80,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   105,
       0,     0,     0,     0,    17,     0,    19,    14,    16,    33,
      34,     0,    32,    38,     0,     0,     0,     0,     0,   138,
       0,   136,     0,     0,     0,     0,    33,   107,    93,     0,
      33,     0,    95,     0,   102,    94,    98,     0,    58,    59,
      55,    56,    54,    57,    62,    63,    60,    61,    65,    66,
      67,    68,    69,    53,    64,    48,    49,    50,    51,    52,
       0,     0,    71,     0,    72,   105,     4,   113,    82,     0,
       0,     0,     0,     0,     0,     0,     0,   137,   134,     0,
     132,     0,   126,    33,     0,    33,     0,   103,     0,   110,
     108,    97,    24,    73,    75,     0,     0,     0,     0,    35,
       4,    31,     0,     0,     0,     0,    36,    37,     0,   115,
       0,     0,   119,     0,   139,   135,     0,     0,     0,     0,
       0,     0,    70,    74,   114,     4,     0,    33,    40,    33,
       0,     0,     0,    83,     0,     0,     0,     0,   133,     0,
       0,     4,     0,     4,     4,     0,    96,     0,     0,    33,
      33,     0,     0,   116,   117,     0,   120,     4,     0,     0,
       4,     0,     0,    28,     0,     0,     0,     0,    33,     0,
       0,     0,     0,   124,     0,    96,   112,     4,     4,     0,
       0,     0,   118,     0,   121,     0,     4,     0,     0,     0,
       0,     4,     4,     0,     0,     0,     0,     0,    41,    39,
       0,     0,     4,   122,   123,     0,    29,    42,    43,     0,
       0,    30,    44,     4,     0,   125
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -125,  -125,   -70,   -77,   -19,    -2,  -125,   238,  -124,   101,
     269,  -125,  -125,   -13,  -125,  -125,   135,  -115,   145,  -125,
     146,  -125,  -125,  -125,  -125,  -125,  -125,  -125,   107,   108,
    -125,  -125
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    37,    38,    39,    40,    41,   131,   132,
      42,   193,   227,    43,    44,    91,    92,    83,    84,    87,
      88,   188,    45,    46,    47,    48,    49,    67,   140,   141,
      50,    51
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      62,    57,    58,   144,   180,   189,    85,    52,    59,   272,
      74,    75,    76,    77,    78,    79,    82,     3,    90,    70,
      93,   251,   206,   150,   124,   152,   208,   222,   148,   153,
     126,   127,   128,   151,   149,   252,   223,   150,    54,   191,
    -111,   224,   225,    82,  -111,   192,   134,   151,   136,    63,
      60,    64,   145,   184,   213,    61,   145,   273,   135,    73,
     149,   218,     8,     9,    10,    68,    12,   192,   147,    53,
     216,    86,   240,   200,   241,    94,   154,   201,   192,   236,
     192,   239,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   226,    32,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,    82,   181,    65,   183,
     237,   238,   187,    66,   146,   185,   217,   229,   203,   232,
      69,   130,   243,   267,   247,   268,   259,   262,   149,   284,
      32,   285,   192,   192,   299,   192,    82,   192,   209,   129,
     192,   300,   125,    90,   212,   286,   287,   192,   105,   106,
     246,   254,    53,   258,   257,   112,   313,   201,     4,     5,
       6,     7,   192,   119,   301,    80,   133,   120,    13,    14,
     138,   121,    82,   105,   106,   265,   137,   219,   274,   123,
     112,   139,   230,   114,   115,   116,   117,   118,   119,    24,
     142,   279,   120,   281,   282,   289,   121,     8,     9,    10,
      52,   143,   242,   248,   123,    25,    26,   291,   157,   155,
     294,   156,   182,   304,   195,    27,    28,   190,   197,   198,
      56,   199,    30,   202,    31,   205,   314,   309,   310,    85,
     234,    33,    34,    35,    36,    81,   315,   220,   245,   249,
     250,   320,   321,   275,   255,   260,   261,   271,   263,   264,
     269,   270,   329,   278,     4,     5,     6,     7,   288,    71,
     276,    55,   277,   334,    13,    14,   280,   292,   302,   105,
     106,   297,   330,   298,   306,   311,     4,     5,     6,     7,
     308,   323,   312,    55,   119,    24,    13,    14,   120,   316,
      72,   211,   121,   221,   207,   317,   322,   333,   326,   210,
     123,    25,    26,   325,   233,     0,   331,    24,     0,   235,
       0,    27,    28,     0,     0,     0,    56,     0,    30,     0,
      31,     0,     0,    25,    26,     0,     0,    33,    34,    35,
      36,    89,     0,    27,    28,     0,     0,     0,    56,     0,
      30,     0,    31,     0,     0,     0,     0,     0,     0,    33,
      34,    35,    36,    81,     4,     5,     6,     7,     8,     9,
      10,    11,    12,     0,    13,    14,    15,     0,     0,     0,
      16,     0,    17,    18,     0,    19,    20,    21,     0,    22,
       0,     0,    23,     0,     0,    24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,    27,    28,     0,     0,     0,    29,     0,    30,   204,
      31,     0,    32,     0,     0,     0,     0,    33,    34,    35,
      36,     4,     5,     6,     7,     8,     9,    10,    11,    12,
       0,    13,    14,    15,     0,     0,     0,    16,     0,    17,
      18,     0,    19,    20,    21,     0,    22,     0,     0,    23,
       0,     0,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,    27,    28,
       0,     0,     0,    29,     0,    30,   244,    31,     0,    32,
       0,     0,     0,     0,    33,    34,    35,    36,   253,     5,
       6,     7,     8,     9,    10,    11,    12,     0,    13,    14,
      15,     0,     0,     0,    16,     0,    17,    18,     0,    19,
      20,    21,     0,    22,     0,     0,    23,     0,     0,    24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,    27,    28,     0,     0,     0,
      29,     0,    30,    86,    31,     0,    32,     0,     0,     0,
       0,    33,    34,    35,    36,     4,     5,     6,     7,     8,
       9,    10,    11,    12,     0,    13,    14,    15,     0,     0,
       0,    16,     0,    17,    18,     0,    19,    20,    21,     0,
      22,     0,     0,    23,     0,     0,    24,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,    27,    28,     0,     0,     0,    29,     0,    30,
     266,    31,     0,    32,     0,     0,     0,     0,    33,    34,
      35,    36,     4,     5,     6,     7,     8,     9,    10,    11,
      12,     0,    13,    14,    15,     0,     0,     0,    16,     0,
      17,    18,     0,    19,    20,    21,     0,    22,     0,     0,
      23,     0,     0,    24,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,    27,
      28,     0,     0,     0,    29,     0,    30,   283,    31,     0,
      32,     0,     0,     0,     0,    33,    34,    35,    36,     4,
       5,     6,     7,     8,     9,    10,    11,    12,     0,    13,
      14,    15,     0,     0,     0,    16,     0,    17,    18,     0,
      19,    20,    21,     0,    22,     0,     0,    23,     0,     0,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,    27,    28,     0,     0,
       0,    29,     0,    30,   293,    31,     0,    32,     0,     0,
       0,     0,    33,    34,    35,    36,     4,     5,     6,     7,
       8,     9,    10,    11,    12,     0,    13,    14,    15,     0,
       0,     0,    16,     0,    17,    18,     0,    19,    20,    21,
       0,    22,     0,     0,    23,     0,     0,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,    27,    28,     0,     0,     0,    29,     0,
      30,   295,    31,     0,    32,     0,     0,     0,     0,    33,
      34,    35,    36,     4,     5,     6,     7,     8,     9,    10,
      11,    12,     0,    13,    14,    15,     0,     0,     0,    16,
       0,    17,    18,     0,    19,    20,    21,     0,    22,     0,
       0,    23,     0,     0,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
      27,    28,     0,     0,     0,    29,     0,    30,   296,    31,
       0,    32,     0,     0,     0,     0,    33,    34,    35,    36,
       4,     5,     6,     7,     8,     9,    10,    11,    12,     0,
      13,    14,    15,     0,     0,     0,    16,     0,    17,    18,
       0,    19,    20,    21,     0,    22,     0,     0,    23,     0,
       0,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,    27,    28,     0,
       0,     0,    29,     0,    30,   305,    31,     0,    32,     0,
       0,     0,     0,    33,    34,    35,    36,     4,     5,     6,
       7,     8,     9,    10,    11,    12,     0,    13,    14,    15,
       0,     0,     0,    16,     0,    17,    18,     0,    19,    20,
      21,     0,    22,     0,     0,    23,     0,     0,    24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,    27,    28,     0,     0,     0,    29,
       0,    30,   307,    31,     0,    32,     0,     0,     0,     0,
      33,    34,    35,    36,     4,     5,     6,     7,     8,     9,
      10,    11,    12,     0,    13,    14,    15,     0,     0,     0,
      16,     0,    17,    18,     0,    19,    20,    21,     0,    22,
       0,     0,    23,     0,     0,    24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,    27,    28,     0,     0,     0,    29,     0,    30,   318,
      31,     0,    32,     0,     0,     0,     0,    33,    34,    35,
      36,     4,     5,     6,     7,     8,     9,    10,    11,    12,
       0,    13,    14,    15,     0,     0,     0,    16,     0,    17,
      18,     0,    19,    20,    21,     0,    22,     0,     0,    23,
       0,     0,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,    27,    28,
       0,     0,     0,    29,     0,    30,   319,    31,     0,    32,
       0,     0,     0,     0,    33,    34,    35,    36,     4,     5,
       6,     7,     8,     9,    10,    11,    12,     0,    13,    14,
      15,     0,     0,     0,    16,     0,    17,    18,     0,    19,
      20,    21,     0,    22,     0,     0,    23,     0,     0,    24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,    27,    28,     0,     0,     0,
      29,     0,    30,   324,    31,     0,    32,     0,     0,     0,
       0,    33,    34,    35,    36,     4,     5,     6,     7,     8,
       9,    10,    11,    12,     0,    13,    14,    15,     0,     0,
       0,    16,     0,    17,    18,     0,    19,    20,    21,     0,
      22,     0,     0,    23,     0,     0,    24,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,    27,    28,     0,     0,     0,    29,     0,    30,
     327,    31,     0,    32,     0,     0,     0,     0,    33,    34,
      35,    36,     4,     5,     6,     7,     8,     9,    10,    11,
      12,     0,    13,    14,    15,     0,     0,     0,    16,     0,
      17,    18,     0,    19,    20,    21,     0,    22,     0,     0,
      23,     0,     0,    24,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,    27,
      28,     0,     0,     0,    29,     0,    30,   328,    31,     0,
      32,     0,     0,     0,     0,    33,    34,    35,    36,     4,
       5,     6,     7,     8,     9,    10,    11,    12,     0,    13,
      14,    15,     0,     0,     0,    16,     0,    17,    18,     0,
      19,    20,    21,     0,    22,     0,     0,    23,     0,     0,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,    27,    28,     0,     0,
       0,    29,     0,    30,   332,    31,     0,    32,     0,     0,
       0,     0,    33,    34,    35,    36,     4,     5,     6,     7,
       8,     9,    10,    11,    12,     0,    13,    14,    15,     0,
       0,     0,    16,     0,    17,    18,     0,    19,    20,    21,
       0,    22,     0,     0,    23,     0,     0,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,    27,    28,     0,     0,     0,    29,     0,
      30,   335,    31,     0,    32,     0,     0,     0,     0,    33,
      34,    35,    36,     4,     5,     6,     7,     8,     9,    10,
      11,    12,     0,    13,    14,    15,     0,     0,     0,    16,
       0,    17,    18,     0,    19,    20,    21,     0,    22,     0,
       0,    23,     0,     0,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
      27,    28,     0,     0,     0,    29,     0,    30,     0,    31,
       0,    32,     0,     0,     0,     0,    33,    34,    35,    36,
       4,     5,     6,     7,     8,     9,    10,    11,    12,     0,
      13,    14,    15,     0,     0,     0,    16,     0,    17,    18,
       0,    19,    20,    21,     0,    22,     0,     0,    23,     0,
       0,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,    27,    28,     0,
       0,     0,    29,     0,   228,     0,    31,     0,    32,     0,
       0,     0,     0,    33,    34,    35,    36,     4,     5,     6,
       7,     8,     9,    10,    11,    12,     0,    13,    14,    15,
       0,     0,     0,    16,     0,    17,    18,     0,    19,    20,
      21,     0,    22,     0,     0,    23,     0,     0,    24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,    27,    28,     0,     0,     0,    29,
       0,   231,     0,    31,     0,    32,     0,     0,     0,     0,
      33,    34,    35,    36,     4,     5,     6,     7,     8,     9,
      10,    11,    12,     0,    13,    14,    15,     0,     0,     0,
      16,     0,    17,    18,     0,    19,    20,    21,     0,    22,
       0,     0,    23,     0,     0,    24,     4,     5,     6,     7,
       0,     0,     0,    55,     0,     0,    13,    14,     0,     0,
       0,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,    27,    28,     0,     0,     0,    29,    24,   303,     0,
      31,     0,    32,     0,     0,     0,     0,    33,    34,    35,
      36,     0,     0,    25,    26,     4,     5,     6,     7,     0,
       0,     0,    55,    27,    28,    13,    14,     0,    56,     0,
      30,     0,    31,   101,   102,   103,   104,   105,   106,    33,
      34,    35,    36,     0,   112,     0,    24,   114,   115,   116,
     117,   118,   119,     0,     0,     0,   120,     0,     0,     0,
     121,     0,    25,    26,     0,     0,     0,     0,   123,     0,
       0,     0,    27,    28,     0,     0,     0,    56,     0,   186,
       0,    31,    95,    96,     0,     0,     0,     0,    33,    34,
      35,    36,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,     0,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,   120,
       0,    32,     0,   121,   122,    95,    96,     0,     0,     0,
       0,   123,     0,     0,     0,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,     0,   113,   114,   115,   116,   117,   118,   119,   194,
       0,     0,   120,     0,     0,     0,   121,   122,    95,    96,
       0,     0,     0,     0,   123,     0,     0,     0,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,     0,   113,   114,   115,   116,   117,
     118,   119,   196,     0,     0,   120,     0,     0,     0,   121,
     122,    95,    96,     0,     0,     0,     0,   123,     0,     0,
       0,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,     0,   113,   114,
     115,   116,   117,   118,   119,     0,     0,     0,   120,   214,
       0,     0,   121,   122,    95,    96,     0,     0,     0,     0,
     123,     0,     0,     0,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
       0,   113,   114,   115,   116,   117,   118,   119,     0,     0,
       0,   120,     0,     0,     0,   121,   122,   215,    95,    96,
       0,     0,     0,   123,     0,     0,     0,     0,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,     0,   113,   114,   115,   116,   117,
     118,   119,     0,     0,     0,   120,     0,   256,     0,   121,
     122,    95,    96,     0,     0,     0,     0,   123,     0,     0,
       0,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,     0,   113,   114,
     115,   116,   117,   118,   119,   290,     0,     0,   120,     0,
       0,     0,   121,   122,    95,    96,     0,     0,     0,     0,
     123,     0,     0,     0,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
       0,   113,   114,   115,   116,   117,   118,   119,     0,     0,
       0,   120,     0,     0,     0,   121,   122,    95,    96,     0,
       0,     0,     0,   123,     0,     0,     0,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,     0,     0,     0,
       0,     0,   112,     0,     0,   114,   115,   116,   117,   118,
     119,     0,     0,     0,   120,     0,     0,    95,   121,   122,
       0,     0,     0,     0,     0,     0,   123,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,     0,     0,     0,
       0,     0,   112,     0,     0,   114,   115,   116,   117,   118,
     119,     0,     0,     0,   120,     0,     0,     0,   121,     0,
       0,     0,     0,     0,     0,     0,   123,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,     0,     0,     0,
       0,     0,   112,     0,     0,   114,   115,   116,   117,   118,
     119,     0,     0,     0,   120,   105,   106,     0,   121,     0,
       0,     0,   112,     0,     0,     0,   123,   116,   117,   118,
     119,     0,     0,     0,   120,     0,     0,     0,   121,     0,
       0,     0,     0,     0,     0,     0,   123
};

static const yytype_int16 yycheck[] =
{
      19,    14,    15,    73,   119,   129,     3,     3,    65,    20,
      23,    24,    25,    26,    27,    28,    29,     0,    31,    21,
      39,     3,   146,    65,    43,    68,   150,     3,    66,    72,
      49,    50,    51,    75,    72,    17,    12,    65,     3,    66,
      68,    17,    18,    56,    72,    72,    59,    75,    61,     3,
      65,     5,     3,     3,    66,    65,     3,    68,    60,    67,
      72,    66,     7,     8,     9,    10,    11,    72,    81,    65,
     185,    68,    66,    68,    66,     3,    89,    72,    72,   203,
      72,   205,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,    68,    71,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,    62,   122,
      29,    30,   125,    67,    65,    65,   186,   194,    65,   196,
      65,     3,    66,   247,    65,   249,    66,    66,    72,    66,
      71,    66,    72,    72,    66,    72,   149,    72,   151,    65,
      72,    66,    58,   156,   157,   269,   270,    72,    50,    51,
     220,   228,    65,    68,   231,    57,    66,    72,     3,     4,
       5,     6,    72,    65,   288,    10,    67,    69,    13,    14,
      16,    73,   185,    50,    51,   245,    72,   190,   255,    81,
      57,     3,   195,    60,    61,    62,    63,    64,    65,    34,
      27,   261,    69,   263,   264,   272,    73,     7,     8,     9,
       3,    10,   215,   222,    81,    50,    51,   277,    59,    70,
     280,    72,     3,   290,    71,    60,    61,    59,    67,     3,
      65,    16,    67,     5,    69,    65,   303,   297,   298,     3,
       3,    76,    77,    78,    79,    80,   306,    67,    67,    65,
       3,   311,   312,   256,    20,    65,    67,     3,    67,    67,
      65,    65,   322,     3,     3,     4,     5,     6,    65,    21,
      68,    10,    67,   333,    13,    14,    67,    66,    68,    50,
      51,    67,    30,    67,    67,    67,     3,     4,     5,     6,
      66,    68,    67,    10,    65,    34,    13,    14,    69,    66,
      21,   156,    73,   192,   149,   308,    67,    67,   317,   153,
      81,    50,    51,   316,   197,    -1,   325,    34,    -1,   201,
      -1,    60,    61,    -1,    -1,    -1,    65,    -1,    67,    -1,
      69,    -1,    -1,    50,    51,    -1,    -1,    76,    77,    78,
      79,    80,    -1,    60,    61,    -1,    -1,    -1,    65,    -1,
      67,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      77,    78,    79,    80,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    -1,    13,    14,    15,    -1,    -1,    -1,
      19,    -1,    21,    22,    -1,    24,    25,    26,    -1,    28,
      -1,    -1,    31,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    61,    -1,    -1,    -1,    65,    -1,    67,    68,
      69,    -1,    71,    -1,    -1,    -1,    -1,    76,    77,    78,
      79,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    13,    14,    15,    -1,    -1,    -1,    19,    -1,    21,
      22,    -1,    24,    25,    26,    -1,    28,    -1,    -1,    31,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      -1,    -1,    -1,    65,    -1,    67,    68,    69,    -1,    71,
      -1,    -1,    -1,    -1,    76,    77,    78,    79,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    13,    14,
      15,    -1,    -1,    -1,    19,    -1,    21,    22,    -1,    24,
      25,    26,    -1,    28,    -1,    -1,    31,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    61,    -1,    -1,    -1,
      65,    -1,    67,    68,    69,    -1,    71,    -1,    -1,    -1,
      -1,    76,    77,    78,    79,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    13,    14,    15,    -1,    -1,
      -1,    19,    -1,    21,    22,    -1,    24,    25,    26,    -1,
      28,    -1,    -1,    31,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    61,    -1,    -1,    -1,    65,    -1,    67,
      68,    69,    -1,    71,    -1,    -1,    -1,    -1,    76,    77,
      78,    79,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,    -1,
      21,    22,    -1,    24,    25,    26,    -1,    28,    -1,    -1,
      31,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      61,    -1,    -1,    -1,    65,    -1,    67,    68,    69,    -1,
      71,    -1,    -1,    -1,    -1,    76,    77,    78,    79,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
      14,    15,    -1,    -1,    -1,    19,    -1,    21,    22,    -1,
      24,    25,    26,    -1,    28,    -1,    -1,    31,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    -1,    -1,
      -1,    65,    -1,    67,    68,    69,    -1,    71,    -1,    -1,
      -1,    -1,    76,    77,    78,    79,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    -1,
      -1,    -1,    19,    -1,    21,    22,    -1,    24,    25,    26,
      -1,    28,    -1,    -1,    31,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    61,    -1,    -1,    -1,    65,    -1,
      67,    68,    69,    -1,    71,    -1,    -1,    -1,    -1,    76,
      77,    78,    79,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,
      -1,    21,    22,    -1,    24,    25,    26,    -1,    28,    -1,
      -1,    31,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    61,    -1,    -1,    -1,    65,    -1,    67,    68,    69,
      -1,    71,    -1,    -1,    -1,    -1,    76,    77,    78,    79,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      13,    14,    15,    -1,    -1,    -1,    19,    -1,    21,    22,
      -1,    24,    25,    26,    -1,    28,    -1,    -1,    31,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    -1,
      -1,    -1,    65,    -1,    67,    68,    69,    -1,    71,    -1,
      -1,    -1,    -1,    76,    77,    78,    79,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    13,    14,    15,
      -1,    -1,    -1,    19,    -1,    21,    22,    -1,    24,    25,
      26,    -1,    28,    -1,    -1,    31,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    61,    -1,    -1,    -1,    65,
      -1,    67,    68,    69,    -1,    71,    -1,    -1,    -1,    -1,
      76,    77,    78,    79,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    -1,    13,    14,    15,    -1,    -1,    -1,
      19,    -1,    21,    22,    -1,    24,    25,    26,    -1,    28,
      -1,    -1,    31,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    61,    -1,    -1,    -1,    65,    -1,    67,    68,
      69,    -1,    71,    -1,    -1,    -1,    -1,    76,    77,    78,
      79,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    13,    14,    15,    -1,    -1,    -1,    19,    -1,    21,
      22,    -1,    24,    25,    26,    -1,    28,    -1,    -1,    31,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      -1,    -1,    -1,    65,    -1,    67,    68,    69,    -1,    71,
      -1,    -1,    -1,    -1,    76,    77,    78,    79,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    13,    14,
      15,    -1,    -1,    -1,    19,    -1,    21,    22,    -1,    24,
      25,    26,    -1,    28,    -1,    -1,    31,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    61,    -1,    -1,    -1,
      65,    -1,    67,    68,    69,    -1,    71,    -1,    -1,    -1,
      -1,    76,    77,    78,    79,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    13,    14,    15,    -1,    -1,
      -1,    19,    -1,    21,    22,    -1,    24,    25,    26,    -1,
      28,    -1,    -1,    31,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    61,    -1,    -1,    -1,    65,    -1,    67,
      68,    69,    -1,    71,    -1,    -1,    -1,    -1,    76,    77,
      78,    79,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,    -1,
      21,    22,    -1,    24,    25,    26,    -1,    28,    -1,    -1,
      31,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      61,    -1,    -1,    -1,    65,    -1,    67,    68,    69,    -1,
      71,    -1,    -1,    -1,    -1,    76,    77,    78,    79,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
      14,    15,    -1,    -1,    -1,    19,    -1,    21,    22,    -1,
      24,    25,    26,    -1,    28,    -1,    -1,    31,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    -1,    -1,
      -1,    65,    -1,    67,    68,    69,    -1,    71,    -1,    -1,
      -1,    -1,    76,    77,    78,    79,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    -1,
      -1,    -1,    19,    -1,    21,    22,    -1,    24,    25,    26,
      -1,    28,    -1,    -1,    31,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    61,    -1,    -1,    -1,    65,    -1,
      67,    68,    69,    -1,    71,    -1,    -1,    -1,    -1,    76,
      77,    78,    79,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,
      -1,    21,    22,    -1,    24,    25,    26,    -1,    28,    -1,
      -1,    31,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    61,    -1,    -1,    -1,    65,    -1,    67,    -1,    69,
      -1,    71,    -1,    -1,    -1,    -1,    76,    77,    78,    79,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      13,    14,    15,    -1,    -1,    -1,    19,    -1,    21,    22,
      -1,    24,    25,    26,    -1,    28,    -1,    -1,    31,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    -1,
      -1,    -1,    65,    -1,    67,    -1,    69,    -1,    71,    -1,
      -1,    -1,    -1,    76,    77,    78,    79,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    13,    14,    15,
      -1,    -1,    -1,    19,    -1,    21,    22,    -1,    24,    25,
      26,    -1,    28,    -1,    -1,    31,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    61,    -1,    -1,    -1,    65,
      -1,    67,    -1,    69,    -1,    71,    -1,    -1,    -1,    -1,
      76,    77,    78,    79,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    -1,    13,    14,    15,    -1,    -1,    -1,
      19,    -1,    21,    22,    -1,    24,    25,    26,    -1,    28,
      -1,    -1,    31,    -1,    -1,    34,     3,     4,     5,     6,
      -1,    -1,    -1,    10,    -1,    -1,    13,    14,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    61,    -1,    -1,    -1,    65,    34,    67,    -1,
      69,    -1,    71,    -1,    -1,    -1,    -1,    76,    77,    78,
      79,    -1,    -1,    50,    51,     3,     4,     5,     6,    -1,
      -1,    -1,    10,    60,    61,    13,    14,    -1,    65,    -1,
      67,    -1,    69,    46,    47,    48,    49,    50,    51,    76,
      77,    78,    79,    -1,    57,    -1,    34,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    69,    -1,    -1,    -1,
      73,    -1,    50,    51,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    60,    61,    -1,    -1,    -1,    65,    -1,    67,
      -1,    69,    32,    33,    -1,    -1,    -1,    -1,    76,    77,
      78,    79,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    69,
      -1,    71,    -1,    73,    74,    32,    33,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    -1,    69,    -1,    -1,    -1,    73,    74,    32,    33,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    -1,    -1,    -1,    73,
      74,    32,    33,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    69,    70,
      -1,    -1,    73,    74,    32,    33,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    59,    60,    61,    62,    63,    64,    65,    -1,    -1,
      -1,    69,    -1,    -1,    -1,    73,    74,    75,    32,    33,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    59,    60,    61,    62,    63,
      64,    65,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,
      74,    32,    33,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    -1,    69,    -1,
      -1,    -1,    73,    74,    32,    33,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    59,    60,    61,    62,    63,    64,    65,    -1,    -1,
      -1,    69,    -1,    -1,    -1,    73,    74,    32,    33,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    60,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    69,    -1,    -1,    32,    73,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    60,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    69,    -1,    -1,    -1,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    60,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    69,    50,    51,    -1,    73,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    81,    62,    63,    64,
      65,    -1,    -1,    -1,    69,    -1,    -1,    -1,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    86,    87,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    13,    14,    15,    19,    21,    22,    24,
      25,    26,    28,    31,    34,    50,    51,    60,    61,    65,
      67,    69,    71,    76,    77,    78,    79,    88,    89,    90,
      91,    92,    95,    98,    99,   107,   108,   109,   110,   111,
     115,   116,     3,    65,     3,    10,    65,    98,    98,    65,
      65,    65,    89,     3,     5,    62,    67,   112,    10,    65,
      90,    92,    95,    67,    98,    98,    98,    98,    98,    98,
      10,    80,    98,   102,   103,     3,    68,   104,   105,    80,
      98,   100,   101,    89,     3,    32,    33,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    59,    60,    61,    62,    63,    64,    65,
      69,    73,    74,    81,    89,    58,    89,    89,    89,    65,
       3,    93,    94,    67,    98,    90,    98,    72,    16,     3,
     113,   114,    27,    10,    87,     3,    65,    98,    66,    72,
      65,    75,    68,    72,    98,    70,    72,    59,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
     102,    98,     3,    98,     3,    65,    67,    98,   106,    93,
      59,    66,    72,    96,    66,    71,    66,    67,     3,    16,
      68,    72,     5,    65,    68,    65,    93,   103,    93,    98,
     105,   101,    98,    66,    70,    75,   102,    87,    66,    98,
      67,    94,     3,    12,    17,    18,    68,    97,    67,    88,
      98,    67,    88,   113,     3,   114,    93,    29,    30,    93,
      66,    66,    98,    66,    68,    67,    87,    65,    89,    65,
       3,     3,    17,     3,    88,    20,    71,    88,    68,    66,
      65,    67,    66,    67,    67,    87,    68,    93,    93,    65,
      65,     3,    20,    68,    88,    98,    68,    67,     3,    87,
      67,    87,    87,    68,    66,    66,    93,    93,    65,    88,
      66,    87,    66,    68,    87,    68,    68,    67,    67,    66,
      66,    93,    68,    67,    88,    68,    67,    68,    66,    87,
      87,    67,    67,    66,    88,    87,    66,    98,    68,    68,
      87,    87,    67,    68,    68,    98,    89,    68,    68,    87,
      30,    89,    68,    67,    87,    68
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    85,    86,    87,    87,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    89,    90,    90,    91,    91,    91,    92,    92,
      92,    93,    93,    93,    94,    94,    95,    96,    96,    97,
      97,    97,    97,    97,    97,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,   100,   100,   100,
     100,   101,   101,   102,   102,   102,   103,   103,   104,   104,
     105,   105,   105,   106,   106,   107,   107,   107,   107,   108,
     108,   109,   109,   110,   110,   110,   111,   111,   111,   111,
     111,   112,   112,   112,   112,   113,   113,   113,   114,   114,
     115,   115,   116,   116
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     2,     1,     2,
       2,     1,     1,     2,     4,     1,     1,     1,     8,    11,
      12,     3,     1,     0,     1,     3,     5,     2,     0,     7,
       2,     7,     8,     8,     9,     1,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       5,     3,     3,     4,     5,     4,     2,     2,     2,     2,
       2,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     3,     3,     3,     7,     3,     2,     1,
       0,     1,     2,     3,     1,     0,     1,     2,     3,     1,
       3,     1,     7,     1,     3,     5,     7,     7,     9,     5,
       7,     9,    11,    11,     8,    15,     4,     2,     2,     2,
       2,     1,     3,     5,     3,     3,     1,     0,     1,     3,
       2,     1,     2,     1
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

#line 1849 "jsParser.tab.c"

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

#line 305 "jsParser.y"


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
