/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         zendparse
#define yylex           zendlex
#define yyerror         zenderror
#define yydebug         zenddebug
#define yynerrs         zendnerrs


/* Copy the first part of user declarations.  */


/*
   +----------------------------------------------------------------------+
   | Zend Engine                                                          |
   +----------------------------------------------------------------------+
   | Copyright (c) Zend Technologies Ltd. (http://www.zend.com)           |
   +----------------------------------------------------------------------+
   | This source file is subject to version 2.00 of the Zend license,     |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.zend.com/license/2_00.txt.                                |
   | If you did not receive a copy of the Zend license and are unable to  |
   | obtain it through the world-wide-web, please send a note to          |
   | license@zend.com so we can mail you a copy immediately.              |
   +----------------------------------------------------------------------+
   | Authors: Andi Gutmans <andi@php.net>                                 |
   |          Zeev Suraski <zeev@php.net>                                 |
   |          Nikita Popov <nikic@php.net>                                |
   +----------------------------------------------------------------------+
*/

#include "zend_compile.h"
#include "zend.h"
#include "zend_list.h"
#include "zend_globals.h"
#include "zend_API.h"
#include "zend_constants.h"
#include "zend_language_scanner.h"
#include "zend_exceptions.h"

#define YYSIZE_T size_t
#define yytnamerr zend_yytnamerr
static YYSIZE_T zend_yytnamerr(char*, const char*);

#define YYERROR_VERBOSE
#define YYSTYPE zend_parser_stack_elem

#ifdef _MSC_VER
#define YYMALLOC malloc
#define YYFREE free
#endif




# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "zend_language_parser.h".  */
#ifndef YY_ZEND_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED
# define YY_ZEND_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int zenddebug;
#endif
/* "%code requires" blocks.  */





/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    END = 0,
    PREC_ARROW_FUNCTION = 258,
    T_INCLUDE = 259,
    T_INCLUDE_ONCE = 260,
    T_REQUIRE = 261,
    T_REQUIRE_ONCE = 262,
    T_LOGICAL_OR = 263,
    T_LOGICAL_XOR = 264,
    T_LOGICAL_AND = 265,
    T_PRINT = 266,
    T_YIELD = 267,
    T_DOUBLE_ARROW = 268,
    T_YIELD_FROM = 269,
    T_PLUS_EQUAL = 270,
    T_MINUS_EQUAL = 271,
    T_MUL_EQUAL = 272,
    T_DIV_EQUAL = 273,
    T_CONCAT_EQUAL = 274,
    T_MOD_EQUAL = 275,
    T_AND_EQUAL = 276,
    T_OR_EQUAL = 277,
    T_XOR_EQUAL = 278,
    T_SL_EQUAL = 279,
    T_SR_EQUAL = 280,
    T_POW_EQUAL = 281,
    T_COALESCE_EQUAL = 282,
    T_COALESCE = 283,
    T_BOOLEAN_OR = 284,
    T_BOOLEAN_AND = 285,
    T_IS_EQUAL = 286,
    T_IS_NOT_EQUAL = 287,
    T_IS_IDENTICAL = 288,
    T_IS_NOT_IDENTICAL = 289,
    T_SPACESHIP = 290,
    T_IS_SMALLER_OR_EQUAL = 291,
    T_IS_GREATER_OR_EQUAL = 292,
    T_SL = 293,
    T_SR = 294,
    T_INSTANCEOF = 295,
    T_INC = 296,
    T_DEC = 297,
    T_INT_CAST = 298,
    T_DOUBLE_CAST = 299,
    T_STRING_CAST = 300,
    T_ARRAY_CAST = 301,
    T_OBJECT_CAST = 302,
    T_BOOL_CAST = 303,
    T_UNSET_CAST = 304,
    T_POW = 305,
    T_NEW = 306,
    T_CLONE = 307,
    T_NOELSE = 308,
    T_ELSEIF = 309,
    T_ELSE = 310,
    T_LNUMBER = 311,
    T_DNUMBER = 312,
    T_STRING = 313,
    T_VARIABLE = 314,
    T_INLINE_HTML = 315,
    T_ENCAPSED_AND_WHITESPACE = 316,
    T_CONSTANT_ENCAPSED_STRING = 317,
    T_STRING_VARNAME = 318,
    T_NUM_STRING = 319,
    T_EVAL = 320,
    T_EXIT = 321,
    T_IF = 322,
    T_ENDIF = 323,
    T_ECHO = 324,
    T_DO = 325,
    T_WHILE = 326,
    T_ENDWHILE = 327,
    T_FOR = 328,
    T_ENDFOR = 329,
    T_FOREACH = 330,
    T_ENDFOREACH = 331,
    T_DECLARE = 332,
    T_ENDDECLARE = 333,
    T_AS = 334,
    T_SWITCH = 335,
    T_ENDSWITCH = 336,
    T_CASE = 337,
    T_DEFAULT = 338,
    T_BREAK = 339,
    T_CONTINUE = 340,
    T_GOTO = 341,
    T_FUNCTION = 342,
    T_FN = 343,
    T_CONST = 344,
    T_RETURN = 345,
    T_TRY = 346,
    T_CATCH = 347,
    T_FINALLY = 348,
    T_THROW = 349,
    T_USE = 350,
    T_INSTEADOF = 351,
    T_GLOBAL = 352,
    T_STATIC = 353,
    T_ABSTRACT = 354,
    T_FINAL = 355,
    T_PRIVATE = 356,
    T_PROTECTED = 357,
    T_PUBLIC = 358,
    T_VAR = 359,
    T_UNSET = 360,
    T_ISSET = 361,
    T_EMPTY = 362,
    T_HALT_COMPILER = 363,
    T_CLASS = 364,
    T_TRAIT = 365,
    T_INTERFACE = 366,
    T_EXTENDS = 367,
    T_IMPLEMENTS = 368,
    T_OBJECT_OPERATOR = 369,
    T_LIST = 370,
    T_ARRAY = 371,
    T_CALLABLE = 372,
    T_LINE = 373,
    T_FILE = 374,
    T_DIR = 375,
    T_CLASS_C = 376,
    T_TRAIT_C = 377,
    T_METHOD_C = 378,
    T_FUNC_C = 379,
    T_COMMENT = 380,
    T_DOC_COMMENT = 381,
    T_OPEN_TAG = 382,
    T_OPEN_TAG_WITH_ECHO = 383,
    T_CLOSE_TAG = 384,
    T_WHITESPACE = 385,
    T_START_HEREDOC = 386,
    T_END_HEREDOC = 387,
    T_DOLLAR_OPEN_CURLY_BRACES = 388,
    T_CURLY_OPEN = 389,
    T_PAAMAYIM_NEKUDOTAYIM = 390,
    T_NAMESPACE = 391,
    T_NS_C = 392,
    T_NS_SEPARATOR = 393,
    T_ELLIPSIS = 394,
    T_ERROR = 395
  };
#endif

/* Value type.  */



ZEND_API int zendparse (void);

#endif /* !YY_ZEND_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */



#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
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
#define YYLAST   7144

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  169
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  140
/* YYNRULES -- Number of rules.  */
#define YYNRULES  504
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  955

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   395

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    54,   167,     2,   168,    53,    36,     2,
     158,   159,    51,    48,   163,    49,    50,    52,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    30,   160,
      42,    15,    44,    29,    66,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   164,     2,   165,    35,     2,   166,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   161,    34,   162,    56,     2,     2,     2,
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
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    31,    32,    33,    37,    38,    39,    40,
      41,    43,    45,    46,    47,    55,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   268,   268,   272,   272,   272,   272,   272,   272,   272,
     272,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   277,   277,   277,   277,   277,   277,
     277,   277,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   282,   283,   283,   283,   283,   283,   283,   287,   288,
     296,   297,   301,   302,   306,   307,   308,   312,   313,   314,
     315,   316,   317,   321,   324,   324,   327,   327,   330,   331,
     332,   333,   334,   338,   339,   343,   345,   350,   352,   356,
     358,   362,   364,   369,   371,   376,   378,   383,   384,   388,
     390,   395,   396,   400,   401,   405,   408,   413,   414,   415,
     416,   417,   418,   425,   426,   427,   428,   430,   432,   434,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     447,   451,   450,   454,   455,   457,   458,   459,   464,   465,
     470,   471,   475,   476,   480,   481,   485,   489,   496,   497,
     501,   502,   506,   506,   509,   509,   515,   516,   521,   522,
     526,   526,   532,   532,   538,   539,   543,   544,   548,   549,
     553,   554,   555,   556,   560,   561,   565,   566,   570,   571,
     575,   576,   577,   578,   582,   583,   585,   590,   591,   596,
     597,   602,   605,   611,   612,   617,   620,   626,   627,   633,
     634,   639,   641,   646,   648,   654,   655,   659,   660,   664,
     665,   666,   670,   671,   675,   676,   680,   682,   687,   688,
     692,   693,   697,   703,   704,   708,   709,   714,   717,   722,
     725,   727,   729,   736,   737,   741,   742,   743,   747,   749,
     754,   755,   759,   764,   766,   768,   770,   775,   777,   781,
     786,   787,   791,   792,   796,   797,   802,   803,   808,   809,
     810,   811,   812,   813,   817,   818,   822,   824,   829,   830,
     834,   838,   842,   843,   846,   850,   851,   855,   856,   860,
     860,   870,   872,   877,   879,   881,   883,   885,   887,   888,
     890,   892,   894,   896,   898,   900,   902,   904,   906,   908,
     910,   912,   914,   915,   916,   917,   918,   920,   922,   924,
     926,   928,   929,   930,   931,   932,   933,   934,   935,   936,
     937,   938,   939,   940,   941,   942,   943,   944,   946,   948,
     950,   952,   954,   956,   958,   960,   962,   964,   969,   970,
     972,   974,   976,   977,   978,   979,   980,   981,   982,   983,
     984,   985,   986,   987,   988,   989,   990,   991,   992,   993,
     994,   999,  1004,  1013,  1017,  1021,  1025,  1029,  1033,  1034,
    1038,  1039,  1043,  1044,  1048,  1049,  1053,  1055,  1057,  1059,
    1064,  1067,  1071,  1072,  1076,  1077,  1082,  1083,  1084,  1089,
    1090,  1095,  1096,  1097,  1101,  1102,  1103,  1104,  1105,  1106,
    1107,  1108,  1109,  1110,  1111,  1112,  1114,  1115,  1116,  1117,
    1121,  1122,  1124,  1129,  1130,  1134,  1138,  1139,  1140,  1144,
    1145,  1146,  1150,  1152,  1154,  1156,  1158,  1160,  1164,  1166,
    1168,  1173,  1174,  1175,  1179,  1181,  1186,  1188,  1190,  1192,
    1194,  1196,  1201,  1202,  1203,  1207,  1208,  1209,  1213,  1218,
    1219,  1223,  1225,  1230,  1232,  1234,  1236,  1238,  1240,  1243,
    1249,  1251,  1253,  1255,  1260,  1262,  1265,  1268,  1270,  1272,
    1275,  1279,  1280,  1281,  1282,  1287,  1288,  1289,  1291,  1293,
    1295,  1297,  1302,  1303,  1308
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined", "PREC_ARROW_FUNCTION",
  "\"include (T_INCLUDE)\"", "\"include_once (T_INCLUDE_ONCE)\"",
  "\"require (T_REQUIRE)\"", "\"require_once (T_REQUIRE_ONCE)\"",
  "\"or (T_LOGICAL_OR)\"", "\"xor (T_LOGICAL_XOR)\"",
  "\"and (T_LOGICAL_AND)\"", "\"print (T_PRINT)\"", "\"yield (T_YIELD)\"",
  "\"=> (T_DOUBLE_ARROW)\"", "\"yield from (T_YIELD_FROM)\"", "'='",
  "\"+= (T_PLUS_EQUAL)\"", "\"-= (T_MINUS_EQUAL)\"",
  "\"*= (T_MUL_EQUAL)\"", "\"/= (T_DIV_EQUAL)\"",
  "\".= (T_CONCAT_EQUAL)\"", "\"%= (T_MOD_EQUAL)\"",
  "\"&= (T_AND_EQUAL)\"", "\"|= (T_OR_EQUAL)\"", "\"^= (T_XOR_EQUAL)\"",
  "\"<<= (T_SL_EQUAL)\"", "\">>= (T_SR_EQUAL)\"", "\"**= (T_POW_EQUAL)\"",
  "\"?""?= (T_COALESCE_EQUAL)\"", "'?'", "':'", "\"?? (T_COALESCE)\"",
  "\"|| (T_BOOLEAN_OR)\"", "\"&& (T_BOOLEAN_AND)\"", "'|'", "'^'", "'&'",
  "\"== (T_IS_EQUAL)\"", "\"!= (T_IS_NOT_EQUAL)\"",
  "\"=== (T_IS_IDENTICAL)\"", "\"!== (T_IS_NOT_IDENTICAL)\"",
  "\"<=> (T_SPACESHIP)\"", "'<'", "\"<= (T_IS_SMALLER_OR_EQUAL)\"", "'>'",
  "\">= (T_IS_GREATER_OR_EQUAL)\"", "\"<< (T_SL)\"", "\">> (T_SR)\"",
  "'+'", "'-'", "'.'", "'*'", "'/'", "'%'", "'!'",
  "\"instanceof (T_INSTANCEOF)\"", "'~'", "\"++ (T_INC)\"",
  "\"-- (T_DEC)\"", "\"(int) (T_INT_CAST)\"",
  "\"(double) (T_DOUBLE_CAST)\"", "\"(string) (T_STRING_CAST)\"",
  "\"(array) (T_ARRAY_CAST)\"", "\"(object) (T_OBJECT_CAST)\"",
  "\"(bool) (T_BOOL_CAST)\"", "\"(unset) (T_UNSET_CAST)\"", "'@'",
  "\"** (T_POW)\"", "\"new (T_NEW)\"", "\"clone (T_CLONE)\"", "T_NOELSE",
  "\"elseif (T_ELSEIF)\"", "\"else (T_ELSE)\"",
  "\"integer number (T_LNUMBER)\"",
  "\"floating-point number (T_DNUMBER)\"", "\"identifier (T_STRING)\"",
  "\"variable (T_VARIABLE)\"", "T_INLINE_HTML",
  "\"quoted-string and whitespace (T_ENCAPSED_AND_WHITESPACE)\"",
  "\"quoted-string (T_CONSTANT_ENCAPSED_STRING)\"",
  "\"variable name (T_STRING_VARNAME)\"", "\"number (T_NUM_STRING)\"",
  "\"eval (T_EVAL)\"", "\"exit (T_EXIT)\"", "\"if (T_IF)\"",
  "\"endif (T_ENDIF)\"", "\"echo (T_ECHO)\"", "\"do (T_DO)\"",
  "\"while (T_WHILE)\"", "\"endwhile (T_ENDWHILE)\"", "\"for (T_FOR)\"",
  "\"endfor (T_ENDFOR)\"", "\"foreach (T_FOREACH)\"",
  "\"endforeach (T_ENDFOREACH)\"", "\"declare (T_DECLARE)\"",
  "\"enddeclare (T_ENDDECLARE)\"", "\"as (T_AS)\"",
  "\"switch (T_SWITCH)\"", "\"endswitch (T_ENDSWITCH)\"",
  "\"case (T_CASE)\"", "\"default (T_DEFAULT)\"", "\"break (T_BREAK)\"",
  "\"continue (T_CONTINUE)\"", "\"goto (T_GOTO)\"",
  "\"function (T_FUNCTION)\"", "\"fn (T_FN)\"", "\"const (T_CONST)\"",
  "\"return (T_RETURN)\"", "\"try (T_TRY)\"", "\"catch (T_CATCH)\"",
  "\"finally (T_FINALLY)\"", "\"throw (T_THROW)\"", "\"use (T_USE)\"",
  "\"insteadof (T_INSTEADOF)\"", "\"global (T_GLOBAL)\"",
  "\"static (T_STATIC)\"", "\"abstract (T_ABSTRACT)\"",
  "\"final (T_FINAL)\"", "\"private (T_PRIVATE)\"",
  "\"protected (T_PROTECTED)\"", "\"public (T_PUBLIC)\"",
  "\"var (T_VAR)\"", "\"unset (T_UNSET)\"", "\"isset (T_ISSET)\"",
  "\"empty (T_EMPTY)\"", "\"__halt_compiler (T_HALT_COMPILER)\"",
  "\"class (T_CLASS)\"", "\"trait (T_TRAIT)\"",
  "\"interface (T_INTERFACE)\"", "\"extends (T_EXTENDS)\"",
  "\"implements (T_IMPLEMENTS)\"", "\"-> (T_OBJECT_OPERATOR)\"",
  "\"list (T_LIST)\"", "\"array (T_ARRAY)\"", "\"callable (T_CALLABLE)\"",
  "\"__LINE__ (T_LINE)\"", "\"__FILE__ (T_FILE)\"", "\"__DIR__ (T_DIR)\"",
  "\"__CLASS__ (T_CLASS_C)\"", "\"__TRAIT__ (T_TRAIT_C)\"",
  "\"__METHOD__ (T_METHOD_C)\"", "\"__FUNCTION__ (T_FUNC_C)\"",
  "\"comment (T_COMMENT)\"", "\"doc comment (T_DOC_COMMENT)\"",
  "\"open tag (T_OPEN_TAG)\"",
  "\"open tag with echo (T_OPEN_TAG_WITH_ECHO)\"",
  "\"close tag (T_CLOSE_TAG)\"", "\"whitespace (T_WHITESPACE)\"",
  "\"heredoc start (T_START_HEREDOC)\"", "\"heredoc end (T_END_HEREDOC)\"",
  "\"${ (T_DOLLAR_OPEN_CURLY_BRACES)\"", "\"{$ (T_CURLY_OPEN)\"",
  "\":: (T_PAAMAYIM_NEKUDOTAYIM)\"", "\"namespace (T_NAMESPACE)\"",
  "\"__NAMESPACE__ (T_NS_C)\"", "\"\\\\ (T_NS_SEPARATOR)\"",
  "\"... (T_ELLIPSIS)\"", "T_ERROR", "'('", "')'", "';'", "'{'", "'}'",
  "','", "'['", "']'", "'`'", "'\"'", "'$'", "$accept", "start",
  "reserved_non_modifiers", "semi_reserved", "identifier",
  "top_statement_list", "namespace_name", "name", "top_statement", "$@1",
  "$@2", "use_type", "group_use_declaration",
  "mixed_group_use_declaration", "possible_comma",
  "inline_use_declarations", "unprefixed_use_declarations",
  "use_declarations", "inline_use_declaration",
  "unprefixed_use_declaration", "use_declaration", "const_list",
  "inner_statement_list", "inner_statement", "statement", "$@3",
  "catch_list", "catch_name_list", "finally_statement", "unset_variables",
  "unset_variable", "function_declaration_statement", "is_reference",
  "is_variadic", "class_declaration_statement", "@4", "@5",
  "class_modifiers", "class_modifier", "trait_declaration_statement", "@6",
  "interface_declaration_statement", "@7", "extends_from",
  "interface_extends_list", "implements_list", "foreach_variable",
  "for_statement", "foreach_statement", "declare_statement",
  "switch_case_list", "case_list", "case_separator", "while_statement",
  "if_stmt_without_else", "if_stmt", "alt_if_stmt_without_else",
  "alt_if_stmt", "parameter_list", "non_empty_parameter_list", "parameter",
  "optional_type", "type_expr", "type", "return_type", "argument_list",
  "non_empty_argument_list", "argument", "global_var_list", "global_var",
  "static_var_list", "static_var", "class_statement_list",
  "class_statement", "name_list", "trait_adaptations",
  "trait_adaptation_list", "trait_adaptation", "trait_precedence",
  "trait_alias", "trait_method_reference",
  "absolute_trait_method_reference", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "property_list", "property", "class_const_list", "class_const_decl",
  "const_decl", "echo_expr_list", "echo_expr", "for_exprs",
  "non_empty_for_exprs", "anonymous_class", "@8", "new_expr", "expr",
  "inline_function", "fn", "function", "backup_doc_comment",
  "backup_fn_flags", "backup_lex_pos", "returns_ref", "lexical_vars",
  "lexical_var_list", "lexical_var", "function_call", "class_name",
  "class_name_reference", "exit_expr", "backticks_expr", "ctor_arguments",
  "dereferencable_scalar", "scalar", "constant", "optional_expr",
  "variable_class_name", "dereferencable", "callable_expr",
  "callable_variable", "variable", "simple_variable", "static_member",
  "new_variable", "member_name", "property_name", "array_pair_list",
  "possible_array_pair", "non_empty_array_pair_list", "array_pair",
  "encaps_list", "encaps_var", "encaps_var_offset",
  "internal_functions_in_yacc", "isset_variables", "isset_variable", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,    61,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,    63,
      58,   283,   284,   285,   124,    94,    38,   286,   287,   288,
     289,   290,    60,   291,    62,   292,   293,   294,    43,    45,
      46,    42,    47,    37,    33,   295,   126,   296,   297,   298,
     299,   300,   301,   302,   303,   304,    64,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,    40,    41,
      59,   123,   125,    44,    91,    93,    96,    34,    36
};
# endif

#define YYPACT_NINF -745

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-745)))

#define YYTABLE_NINF -477

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-477)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -745,    67,  1176,  -745,  5109,  5109,  5109,  5109,  5109,  5109,
    5109,  5109,  5109,  5109,  5109,   303,   303,  5109,  5109,  5109,
    5109,  5109,  5109,  5109,  5109,    -5,  5109,  -745,  -745,    46,
    -745,  -745,  -745,   -67,   -26,   -15,  5109,  3998,    -9,    62,
      71,   117,   122,  5109,  5109,   120,  -745,  -745,   234,  5109,
     167,  5109,     3,    13,   310,  -745,  -745,   204,   212,   217,
     270,  -745,  -745,  -745,   276,   293,  -745,  -745,  -745,  -745,
    -745,  -745,  -745,   275,   -16,  -745,   243,  5109,  -745,  -745,
    4136,   230,   298,    12,   247,   -59,  -745,  -745,  -745,  -745,
     115,  -745,  -745,  -745,    42,  -745,   153,  -745,  -745,  5805,
    -745,   421,   421,  -745,   311,   503,  -745,   339,   323,   338,
     353,   357,  3017,  -745,  -745,  -745,  -745,   333,   363,  6845,
     421,  6845,  6845,  6845,  5329,  6977,  5329,   481,   481,    37,
     481,  -745,  5109,  4136,   392,   339,   -37,   -37,   481,   481,
     481,   481,   481,   481,   481,   481,  -745,  -745,  -745,   400,
     353,  -745,   252,  -745,  -745,  5109,  5109,  -745,  5109,    41,
    -745,  6845,   466,  5109,  5109,  5109,   234,  5109,  6845,   398,
     406,   409,   555,   141,  -745,   412,  -745,  5853,  -745,  -745,
     243,   -11,     0,   424,   170,  -745,  -745,   182,  -745,  -745,
     581,   192,  -745,  -745,   303,  5109,  5109,   439,   524,   527,
     534,  4136,  4136,   -52,   282,  -745,  4412,   303,   291,  -745,
     243,   -32,   450,   247,  5901,  1314,   303,   454,  5109,  6749,
     449,  -745,   452,  -745,    57,   453,   309,    57,   164,  5109,
    -745,   543,  4274,  -745,  -745,  -745,   463,  3998,   464,   595,
     468,  5109,  5109,  5109,  4557,  5109,  5109,  5109,  5109,  5109,
    5109,  5109,  5109,  5109,  5109,  5109,  5109,  5109,  5109,  5109,
    5109,  5109,  5109,  5109,  5109,  5109,  5109,  5109,    11,  5109,
    -745,  -745,   471,   551,  2997,  5109,  2997,    -7,  5109,  5109,
    -745,  4695,  5109,  5109,  5109,  5109,  5109,  5109,  5109,  5109,
    5109,  5109,  5109,  5109,  5109,  -745,  -745,  -745,  5109,  5949,
     472,   353,    13,  -745,  -745,    -7,    13,  5109,  5109,  5997,
     479,  6045,  -745,  5109,   483,  6093,   486,   484,  6845,  6683,
     157,  6141,  -745,  -745,  -745,  5109,  -745,   234,  -745,  1452,
    -745,    20,  -745,   579,   -14,   243,    34,   497,   236,  -745,
    -745,    23,  -745,    13,  5109,  -745,   586,   500,  -745,   191,
    6845,   505,  -745,  6189,   506,   544,  -745,   546,   520,   523,
     608,   319,  -745,  -745,   308,  5469,   529,  -745,  -745,  -745,
     247,  -745,   528,  -745,   541,   536,  -745,  -745,  -745,  -745,
    -745,  -745,  -745,   160,  4136,  6845,  4833,   677,  4136,  -745,
    -745,  5517,  -745,  5109,  -745,   538,  -745,  6845,   622,  5109,
    -745,  5109,  -745,  -745,  6892,  6936,  5329,  5109,  6797,  6535,
    7012,  6390,  7045,  7077,  4183,  4321,  4321,  4321,  4321,  4321,
     811,   811,   811,   811,   697,   697,   598,   598,   598,    37,
      37,    37,  -745,   481,   206,  -745,   548,  -745,  -745,  -745,
    -745,  -745,  -745,  -745,  -745,  -745,  -745,  -745,  -745,  -745,
    -745,  -745,  -745,  -745,  -745,  -745,  -745,  -745,  -745,  -745,
    -745,  -745,  -745,  -745,  -745,  -745,  -745,  -745,  -745,  -745,
    -745,  -745,  -745,  -745,  -745,  -745,  -745,  -745,  -745,  -745,
    -745,  -745,  -745,  -745,  -745,  -745,  -745,  -745,  -745,  -745,
    -745,  -745,  -745,  -745,  -745,  -745,  -745,  -745,  -745,  -745,
    -745,  -745,  -745,  -745,  -745,  -745,  -745,  -745,  -745,  -745,
    -745,  -745,  5109,  -745,  -745,   549,   556,   353,   539,   549,
     556,   353,  -745,  5109,  -745,   353,  5565,   557,   303,  5329,
    5329,  5329,  5329,  5329,  5329,  5329,  5329,  5329,  5329,  5329,
    5329,  5329,  5329,  5329,   565,  -745,   544,  -745,  -745,  -745,
    5613,   559,  -745,  -745,  3280,  -745,  5109,  3425,  5109,  5109,
      59,  -745,    24,  6845,  -745,  -745,    15,  -745,    -1,   181,
      22,  -745,  -745,   243,   211,  -745,  -745,  6845,  -745,   303,
     566,  5109,   567,  -745,  -745,    56,   599,   569,    56,  -745,
     713,  -745,  -745,   650,  -745,  -745,  -745,   568,  -745,  5109,
    -745,  -745,  -745,   900,   573,   575,   303,   582,  6845,  5109,
    -745,  -745,  6845,  4971,   584,   544,  6237,  6285,  1590,  6535,
    5109,   238,  -745,  -745,  -745,   594,   578,  -745,   718,  -745,
    -745,   597,   206,  5661,  -745,  -745,  -745,  5709,  -745,  -745,
    -745,   -37,   599,  -745,  -745,  -745,  -745,  6333,  -745,  -745,
    -745,   596,  6845,   303,   600,  4136,    -8,    31,  3570,   601,
     602,  -745,  -745,   335,    -1,   243,   604,  -745,  -745,    26,
     243,  -745,   603,  -745,  -745,  -745,    56,  -745,  -745,  -745,
     605,   610,  5109,  -745,  -745,   445,  1038,  -745,   609,   713,
     287,  4136,  5329,  -745,  -745,   599,  3998,   727,   614,  6535,
    -745,   729,   274,  -745,   617,   206,   618,  -745,  -745,  -745,
    3135,   616,  1728,  5109,    38,  4136,   615,    59,  3715,  -745,
    -745,  -745,  -745,   545,  -745,   244,   620,   621,  -745,   604,
    -745,    -1,   619,   243,   625,  -745,  -745,   605,   624,   389,
      56,  -745,  5329,   627,  -745,  -745,   631,  -745,  -745,  -745,
    -745,   274,  -745,  -745,  -745,   703,   632,   682,   641,  -745,
     643,   633,   645,    39,   646,  -745,  -745,  -745,  1866,   613,
     647,  5109,    36,   257,  -745,    56,  -745,   644,  -745,  -745,
     625,   243,   648,  -745,    56,  -745,  -745,  -745,  -745,  -745,
    -745,  -745,  -745,  -745,   274,   360,   680,  -745,  -745,   405,
    -745,   713,   651,  3135,  -745,   795,   794,   729,   653,   729,
    -745,  -745,  3860,  -745,  3715,  2004,   655,   657,  -745,  5757,
    -745,  -745,  -745,  -745,  -745,   118,  2142,  -745,   656,  -745,
    -745,   416,   260,   743,  6411,   421,  -745,  -745,  -745,  -745,
    5109,  -745,    64,  -745,   426,  -745,  -745,  -745,  -745,   660,
    -745,  -745,  -745,  3135,    56,   662,  -745,  -745,  -745,  -745,
    5197,  -745,   807,   249,  -745,   808,   302,  -745,  6411,   474,
    -745,  6845,   665,   751,  -745,   214,  -745,   667,  -745,  2280,
    -745,  3135,  -745,   671,   737,   363,  -745,  -745,   683,  5335,
    -745,   674,   678,   741,   726,  5109,  -745,  -745,   743,  5109,
    -745,  6411,  -745,  -745,  5109,  -745,  -745,  -745,    64,  -745,
     681,  -745,  6411,  -745,  -745,  -745,  -745,  6549,    56,  6845,
    -745,  6845,  -745,   684,  6845,  2418,  -745,  2556,  -745,  2694,
    -745,  -745,  -745,  6411,   605,  -745,  -745,   206,  -745,  -745,
    -745,  -745,  -745,   686,  -745,  -745,   729,  -745,   369,  -745,
    -745,  -745,  2832,  -745,  -745
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      81,     0,     2,     1,     0,     0,     0,     0,     0,   375,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   414,   415,    82,
     451,   146,   413,     0,   404,     0,     0,     0,     0,     0,
       0,     0,     0,   433,   433,     0,   384,   383,     0,   433,
       0,     0,     0,     0,   400,   178,   179,     0,     0,     0,
       0,   174,   180,   182,     0,     0,   416,   417,   418,   423,
     419,   420,   421,     0,    96,   422,     0,     0,   153,   126,
     469,   406,     0,     0,    84,   430,    80,    87,    88,    89,
       0,   176,    90,    91,   213,   134,     0,   135,   358,     0,
     379,   388,   388,   447,     0,   428,   372,   429,     0,   435,
       0,   448,   303,   442,   449,   362,    82,   400,     0,   497,
     388,   498,   500,   501,   374,   376,   378,   343,   344,   345,
     346,   400,     0,   469,   438,     0,   323,   325,   363,   364,
     365,   366,   367,   368,   369,   371,   299,   401,   302,   402,
     409,   456,   403,   308,   157,     0,   433,   370,     0,     0,
     293,   294,     0,     0,   295,     0,     0,     0,   434,     0,
       0,     0,     0,     0,   124,     0,   126,     0,   103,   104,
       0,   119,     0,     0,     0,   121,   116,     0,   241,   242,
     245,     0,   244,   380,     0,     0,     0,     0,     0,     0,
       0,   469,   469,   484,     0,   425,     0,     0,     0,   482,
       0,    94,     0,    86,     0,     0,     0,     0,     0,   474,
       0,   472,   468,   470,   407,     0,   408,     0,     0,     0,
     453,     0,     0,   396,   172,   177,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     147,   389,     0,   385,     0,   433,     0,     0,     0,   433,
     399,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   322,   324,   385,     0,     0,
       0,   409,     0,   410,   301,     0,     0,     0,   433,     0,
       0,     0,   145,     0,     0,     0,     0,   296,   298,     0,
       0,     0,   140,   141,   156,     0,   102,     0,   142,     0,
     155,   119,   122,     0,     0,     0,   119,     0,     0,    98,
     100,     0,   143,     0,     0,   144,     0,   109,   164,   436,
     504,   109,   502,     0,     0,   184,   385,   186,     0,     0,
       0,     0,   424,   483,     0,     0,   436,   481,   427,   480,
      85,    93,     0,    81,   357,     0,   133,   125,   127,   128,
     129,   130,   131,   436,   469,   477,     0,   412,   469,   373,
     426,     0,    83,     0,   234,   109,   236,   238,     0,     0,
     214,     0,   126,   217,   328,   330,   329,     0,     0,   361,
     326,   327,   331,   333,   332,   349,   350,   347,   348,   355,
     351,   352,   353,   354,   341,   342,   335,   336,   334,   337,
     339,   340,   356,   338,   225,   385,     0,     3,     4,     6,
       7,     8,     9,    10,    46,    47,    11,    12,    13,    16,
      17,    78,     5,    14,    15,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    49,    50,    51,
      52,    53,    41,    42,    43,    70,    44,    45,    30,    31,
      32,    33,    34,    35,    36,    72,    73,    74,    75,    76,
      77,    37,    38,    39,    40,    61,    59,    60,    56,    57,
      48,    54,    55,    66,    67,    68,    62,    63,    65,    64,
      58,    69,     0,    71,    79,   431,   454,     0,     0,   432,
     455,     0,   465,     0,   467,   450,     0,     0,     0,   306,
     309,   310,   311,   313,   314,   315,   316,   317,   318,   319,
     320,   312,   321,   377,   437,   412,   184,   460,   459,   461,
       0,     0,   499,   405,     0,   292,     0,     0,   295,     0,
       0,   151,     0,   385,   123,   158,     0,   120,     0,   119,
       0,    99,   101,     0,   119,   115,   240,   246,   243,   110,
       0,   110,     0,   496,    92,     0,   188,     0,     0,   385,
       0,   411,   486,     0,   491,   494,   492,     0,   488,     0,
     487,   490,    81,     0,     0,     0,     0,     0,   473,     0,
     471,   452,   239,   110,     0,   184,     0,     0,     0,   360,
       0,     0,   229,   230,   231,     0,   219,   221,   168,   226,
     227,     0,   225,     0,   397,   444,   398,     0,   446,   445,
     443,   307,   188,   458,   457,   126,   211,     0,   126,   209,
     136,     0,   297,     0,     0,   469,     0,   436,     0,   204,
     204,   139,   291,   162,     0,     0,   109,   112,   117,     0,
       0,   165,     0,   503,   495,   185,     0,   385,   248,   253,
     187,     0,     0,   493,   485,     0,     0,    97,     0,   479,
     436,   469,   305,   237,   235,   188,     0,     0,     0,   359,
     228,   232,   225,   169,   170,   225,     0,   463,   466,   385,
     215,     0,     0,   295,   436,   469,     0,     0,     0,   126,
     198,   152,   204,     0,   204,     0,     0,     0,   154,   109,
     118,   110,     0,     0,   109,   114,   148,   189,     0,   274,
       0,   248,   304,     0,    95,   132,     0,   385,   212,   126,
     218,     0,   385,   222,   171,     0,     0,   390,     0,   137,
       0,     0,     0,   412,     0,   126,   196,   149,     0,     0,
       0,     0,     0,     0,   200,     0,   126,     0,   111,   107,
     109,   110,     0,   248,     0,   281,   282,   283,   280,   279,
     278,   273,   181,   247,   225,     0,   272,   276,   254,   274,
     489,   478,     0,   216,   233,     0,   223,   232,     0,   232,
     248,   210,     0,   192,     0,     0,     0,     0,   202,     0,
     207,   208,   126,   201,   160,     0,     0,   108,     0,   113,
     105,   274,     0,     0,     0,   388,   277,   183,   248,   386,
       0,   386,     0,   386,   274,   126,   194,   138,   150,     0,
     199,   203,   126,   206,     0,     0,   163,   106,   175,   255,
       0,   251,   385,     0,   285,     0,     0,   289,     0,   274,
     387,   224,     0,     0,   394,     0,   393,     0,   300,     0,
     197,   205,   161,     0,    82,    58,   256,   267,     0,     0,
     258,     0,     0,     0,   268,     0,   286,   249,     0,     0,
     250,     0,   385,   173,     0,   126,   395,   391,     0,   126,
       0,   126,     0,   257,   259,   260,   261,     0,     0,   385,
     284,   385,   288,     0,   386,     0,   392,     0,   195,     0,
     269,   263,   264,   266,   262,   287,   290,   225,   382,   386,
     386,   159,   265,     0,   167,   381,   232,   386,     0,   270,
     126,   386,     0,   252,   271
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -745,  -745,   -77,  -745,  -212,  -328,     6,   -24,  -745,  -745,
    -745,   791,  -745,  -745,  -345,   184,   113,   668,   121,  -151,
     508,   701,   -80,  -745,     2,  -745,  -745,  -745,  -745,  -745,
     289,     1,  -745,  -745,    17,  -745,  -745,  -745,   779,    29,
    -745,    32,  -745,  -473,  -745,  -570,   154,  -745,    60,  -745,
    -745,  -552,    53,  -745,  -745,  -745,  -745,  -745,  -599,  -745,
     171,    81,   125,   259,  -744,   -78,  -745,   268,  -745,   540,
    -745,   542,  -681,  -745,  -619,  -745,  -745,    -4,  -745,  -745,
    -745,  -745,  -745,  -745,  -745,  -745,  -740,  -745,   -12,  -745,
     -19,   560,  -745,   571,  -520,  -745,  -745,  -745,  -745,     4,
      65,  -745,    -2,  -279,  -721,  -745,  -100,  -745,  -745,   -18,
    -745,    10,   623,  -745,  -745,   588,    21,  -745,    27,    -3,
    -745,  -745,  -745,  -745,   130,    58,  -745,  -745,   626,   587,
     -84,   507,  -745,  -745,   458,   349,  -745,  -745,  -745,   312
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   513,   514,   865,     2,    84,    85,    86,   372,
     212,   665,   337,   183,   580,   666,   734,   184,   667,   185,
     186,   173,   215,   377,   378,   658,   663,   825,   728,   347,
     348,   379,   704,   755,   380,   398,   198,    90,    91,   381,
     199,   382,   200,   586,   589,   677,   656,   847,   767,   721,
     661,   723,   822,   650,    94,    95,    96,    97,   625,   626,
     627,   628,   629,   630,   752,   303,   395,   396,   187,   188,
     191,   192,   739,   793,   680,   861,   889,   890,   891,   892,
     893,   894,   951,   794,   795,   796,   797,   863,   864,   866,
     867,   174,   159,   160,   316,   317,   148,   301,    98,    99,
     100,   101,   120,   436,   870,   904,   272,   809,   875,   876,
     103,   104,   150,   157,   225,   304,   105,   106,   107,   169,
     108,   109,   110,   111,   112,   113,   114,   152,   517,   525,
     220,   221,   222,   223,   208,   209,   597,   115,   351,   352
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     102,   147,   273,    88,    87,   717,   582,   233,   119,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,    89,
     297,   138,   139,   140,   141,   142,   143,   144,   145,   332,
     153,    92,   280,   706,    93,   149,   134,   134,   651,   162,
     161,   170,   135,   135,  -190,   603,   175,   168,   168,   300,
     614,  -191,  -193,   168,   659,   177,   836,   737,   181,   116,
     799,   392,   515,   841,   519,   843,   820,     3,   522,    30,
     116,    30,   709,   642,   116,   116,   154,   587,   116,   360,
     211,   214,   213,   151,   219,   333,   116,    30,    30,    30,
     392,   155,   268,  -401,  -436,   653,   329,   392,   116,   232,
     873,   392,   831,   178,   269,   179,   756,   178,   725,   179,
     131,   189,   361,   236,   237,  -436,   333,   358,   359,   193,
     872,   146,   877,   231,  -436,   747,   131,  -436,   371,   844,
     333,   116,   156,   203,   116,    30,   299,   219,    32,   210,
     874,   230,   695,   158,   334,   136,   137,   568,   118,   163,
      76,   718,   854,   310,   523,   335,   631,   869,   180,   309,
     168,    83,   311,    83,   118,   832,    76,   315,   318,   319,
     769,   321,   773,   229,   131,   566,   664,   933,   573,    83,
      83,    83,   193,   670,   332,   660,   331,   733,   336,   570,
    -190,   654,    65,   761,   855,   171,   821,  -191,  -193,   350,
     353,   312,   947,   938,   313,   219,   219,   206,   207,   118,
     365,    76,   118,   102,    76,   134,   370,   132,   944,   945,
     164,   135,   385,   655,   238,   239,   948,    83,   134,   165,
     953,    55,    56,   391,   135,   621,   397,   134,   240,   400,
     203,   234,   367,   135,   147,   404,   405,   406,   408,   409,
     410,   411,   412,   413,   414,   415,   416,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,   518,   433,   686,   166,   527,   333,   149,   168,
     167,   116,   526,   168,   662,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   934,
     605,   326,   543,   621,   327,   551,   203,   333,   224,   172,
     681,   550,   168,   116,   206,   207,   561,   161,   116,  -476,
     327,   732,   618,  -476,   349,  -476,   151,   102,   176,   563,
     340,   390,   516,   341,   520,   524,   669,   366,   943,   622,
     623,   569,   342,   771,   772,   343,   383,   574,   577,   116,
    -166,   203,   345,   204,  -166,   346,   771,   772,   203,   118,
     547,    76,   194,   524,   549,  -220,   231,   203,   593,   367,
     195,   622,   623,   907,   203,   196,   227,   908,   116,    30,
     206,   207,    32,   305,   777,   203,   190,   367,   219,   782,
     608,   118,   219,    76,   594,   595,   572,   612,   738,   341,
     596,   189,   231,   616,   306,   617,   774,   622,   623,   897,
     624,   619,   898,   307,    46,    47,   308,   668,   131,   823,
     859,   860,   332,   740,   205,   206,   207,   118,   197,    76,
     758,   362,   206,   207,   201,   828,    65,    46,    47,   634,
     368,   206,   207,   636,   726,   727,  -475,   638,   206,   207,
    -475,   202,  -475,   241,   242,   243,   118,   271,    76,   206,
     207,   132,   900,   274,    46,   901,   834,   133,   802,   277,
     598,    83,   599,   805,   244,   276,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   278,
     268,   784,   279,   275,   785,   786,   787,   788,   789,   790,
     791,   232,   269,   668,   730,  -439,   633,   784,   210,   735,
     785,   786,   787,   788,   789,   790,   791,   637,   784,   949,
     950,   785,   786,   787,   788,   789,   790,   791,   784,   226,
     228,   785,   786,   787,   788,   789,   790,   791,   269,   134,
    -441,   792,   302,   363,   314,   135,   646,   369,   322,   649,
     647,   675,   318,   652,   679,   710,   323,   837,   712,   324,
     325,   716,   328,   363,   574,   369,   363,   369,   858,   574,
     668,   134,   735,   896,   339,   350,   784,   135,   878,   785,
     786,   787,   788,   789,   790,   791,   344,   624,   354,   355,
     134,   102,   356,   685,    88,    87,   135,   746,   624,   357,
     743,   373,   384,   692,   387,   388,   102,   397,   392,   389,
      89,   399,   401,   923,   699,   402,   435,   134,   403,   434,
     829,   762,    92,   135,  -438,    93,   903,   545,   553,   768,
     935,   556,   936,   770,   771,   772,   558,   559,   887,   265,
     266,   267,   679,   268,   567,  -438,   902,   571,   641,   219,
     720,  -441,   190,   579,  -438,   269,   584,  -438,   581,   803,
     574,   574,  -437,   585,   134,   588,   574,   887,   624,   590,
     135,   624,   591,   592,   102,   815,   742,    88,    87,   602,
     657,   601,   609,  -437,   604,   219,   826,   615,   748,  -440,
     930,   613,  -437,    89,   635,  -437,   632,  -462,   102,   349,
     102,   817,   771,   772,  -464,    92,   798,   318,    93,   219,
     766,   942,   640,  -440,   644,   672,   674,   624,   682,   676,
     678,   683,   688,   684,   689,   868,   690,   574,   134,   574,
     691,   702,   853,   694,   135,   262,   263,   264,   265,   266,
     267,   824,   268,   701,   703,   705,   713,   749,   715,   751,
     679,   722,   724,   736,   269,   879,   102,   731,   740,   745,
     624,   741,   881,   754,   750,   819,   759,   757,   775,   806,
     763,   779,   776,   714,  -275,   783,  -275,   574,   781,   800,
     801,   807,   812,   835,   808,   785,   786,   787,   788,   789,
     790,   102,   810,   811,   813,   814,   827,   818,   839,   840,
     830,   842,   838,   102,   846,   850,   766,   851,   857,   862,
     880,   883,   895,   899,   102,   925,   905,   906,   909,   927,
     882,   929,   911,   -78,   915,   912,   888,   917,   916,   918,
     932,   928,   937,   182,   871,   946,   780,   657,   729,   575,
     338,   102,   778,  -477,  -477,  -477,  -477,   260,   261,   262,
     263,   264,   265,   266,   267,   888,   268,   320,   671,   235,
     952,   764,   852,   753,   848,   833,   804,   102,   269,   102,
     700,   693,   922,   576,   555,   914,   920,   564,   578,   546,
     926,   432,   548,   673,   679,   610,     0,     0,     0,   919,
       0,     0,   521,   921,     4,     5,     6,     7,   924,     0,
       0,     8,     9,   624,    10,     0,     0,     0,     0,     0,
       0,     0,     0,   102,     0,   102,     0,   102,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
     102,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,    25,    26,
       0,     0,     0,    27,    28,    29,    30,    31,     0,    32,
       0,     0,    33,    34,    35,     0,    36,    37,    38,     0,
      39,     0,    40,     0,    41,     0,     0,    42,     0,     0,
       0,    43,    44,    45,    46,    47,    48,    49,    50,     0,
       0,    51,    52,     0,    53,    54,    55,    56,     0,     0,
       0,     0,    57,    58,    59,    60,    61,    62,    63,     0,
       0,     0,    64,    65,     0,    66,    67,    68,    69,    70,
      71,    72,     4,     5,     6,     7,     0,     0,    73,     8,
       9,     0,    10,    74,    75,    76,     0,     0,    77,     0,
      78,    79,   687,     0,    80,     0,    81,    82,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,    25,    26,     0,     0,
       0,    27,    28,    29,    30,    31,     0,    32,     0,     0,
      33,    34,    35,     0,    36,    37,    38,     0,    39,     0,
      40,     0,    41,     0,     0,    42,     0,     0,     0,    43,
      44,    45,    46,    47,    48,    49,    50,     0,     0,    51,
      52,     0,    53,    54,    55,    56,     0,     0,     0,     0,
      57,    58,    59,    60,    61,    62,    63,     0,     0,     0,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
       4,     5,     6,     7,     0,     0,    73,     8,     9,     0,
      10,    74,    75,    76,     0,     0,    77,     0,    78,    79,
     744,     0,    80,     0,    81,    82,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,     0,     0,     0,    27,
      28,    29,    30,    31,     0,    32,     0,     0,    33,    34,
      35,     0,    36,    37,    38,     0,    39,     0,    40,     0,
      41,     0,     0,    42,     0,     0,     0,    43,    44,    45,
      46,    47,    48,    49,    50,     0,     0,    51,    52,     0,
      53,    54,    55,    56,     0,     0,     0,     0,    57,    58,
      59,    60,    61,    62,    63,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,    72,     4,     5,
       6,     7,     0,     0,    73,     8,     9,     0,    10,    74,
      75,    76,     0,     0,    77,     0,    78,    79,     0,     0,
      80,     0,    81,    82,    83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,    25,    26,     0,     0,     0,    27,    28,    29,
      30,    31,     0,    32,     0,     0,    33,    34,    35,     0,
      36,    37,    38,     0,    39,     0,    40,     0,    41,     0,
       0,    42,     0,     0,     0,    43,    44,    45,    46,    47,
       0,    49,    50,     0,     0,    51,     0,     0,    53,    54,
      55,    56,     0,     0,     0,     0,    57,    58,    59,   375,
      61,    62,    63,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,    72,     4,     5,     6,     7,
       0,     0,    73,     8,     9,     0,    10,   118,    75,    76,
       0,     0,    77,     0,    78,    79,   376,     0,    80,     0,
      81,    82,    83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
      25,    26,     0,     0,     0,    27,    28,    29,    30,    31,
       0,    32,     0,     0,    33,    34,    35,     0,    36,    37,
      38,     0,    39,     0,    40,     0,    41,     0,     0,    42,
       0,     0,     0,    43,    44,    45,    46,    47,     0,    49,
      50,     0,     0,    51,     0,     0,    53,    54,    55,    56,
       0,     0,     0,     0,    57,    58,    59,   375,    61,    62,
      63,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,    72,     4,     5,     6,     7,     0,     0,
      73,     8,     9,     0,    10,   118,    75,    76,     0,     0,
      77,     0,    78,    79,   565,     0,    80,     0,    81,    82,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,    25,    26,
       0,     0,     0,    27,    28,    29,    30,    31,     0,    32,
       0,     0,    33,    34,    35,   698,    36,    37,    38,     0,
      39,     0,    40,     0,    41,     0,     0,    42,     0,     0,
       0,    43,    44,    45,    46,    47,     0,    49,    50,     0,
       0,    51,     0,     0,    53,    54,    55,    56,     0,     0,
       0,     0,    57,    58,    59,   375,    61,    62,    63,     0,
       0,     0,    64,    65,     0,    66,    67,    68,    69,    70,
      71,    72,     4,     5,     6,     7,     0,     0,    73,     8,
       9,     0,    10,   118,    75,    76,     0,     0,    77,     0,
      78,    79,     0,     0,    80,     0,    81,    82,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,    25,    26,     0,     0,
       0,    27,    28,    29,    30,    31,     0,    32,     0,     0,
      33,    34,    35,     0,    36,    37,    38,   760,    39,     0,
      40,     0,    41,     0,     0,    42,     0,     0,     0,    43,
      44,    45,    46,    47,     0,    49,    50,     0,     0,    51,
       0,     0,    53,    54,    55,    56,     0,     0,     0,     0,
      57,    58,    59,   375,    61,    62,    63,     0,     0,     0,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
       4,     5,     6,     7,     0,     0,    73,     8,     9,     0,
      10,   118,    75,    76,     0,     0,    77,     0,    78,    79,
       0,     0,    80,     0,    81,    82,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,     0,     0,     0,    27,
      28,    29,    30,    31,     0,    32,     0,     0,    33,    34,
      35,     0,    36,    37,    38,     0,    39,     0,    40,     0,
      41,   816,     0,    42,     0,     0,     0,    43,    44,    45,
      46,    47,     0,    49,    50,     0,     0,    51,     0,     0,
      53,    54,    55,    56,     0,     0,     0,     0,    57,    58,
      59,   375,    61,    62,    63,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,    72,     4,     5,
       6,     7,     0,     0,    73,     8,     9,     0,    10,   118,
      75,    76,     0,     0,    77,     0,    78,    79,     0,     0,
      80,     0,    81,    82,    83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,    25,    26,     0,     0,     0,    27,    28,    29,
      30,    31,     0,    32,     0,     0,    33,    34,    35,     0,
      36,    37,    38,     0,    39,     0,    40,   849,    41,     0,
       0,    42,     0,     0,     0,    43,    44,    45,    46,    47,
       0,    49,    50,     0,     0,    51,     0,     0,    53,    54,
      55,    56,     0,     0,     0,     0,    57,    58,    59,   375,
      61,    62,    63,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,    72,     4,     5,     6,     7,
       0,     0,    73,     8,     9,     0,    10,   118,    75,    76,
       0,     0,    77,     0,    78,    79,     0,     0,    80,     0,
      81,    82,    83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
      25,    26,     0,     0,     0,    27,    28,    29,    30,    31,
       0,    32,     0,     0,    33,    34,    35,     0,    36,    37,
      38,     0,    39,     0,    40,     0,    41,     0,     0,    42,
       0,     0,     0,    43,    44,    45,    46,    47,     0,    49,
      50,     0,     0,    51,     0,     0,    53,    54,    55,    56,
       0,     0,     0,     0,    57,    58,    59,   375,    61,    62,
      63,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,    72,     4,     5,     6,     7,     0,     0,
      73,     8,     9,     0,    10,   118,    75,    76,     0,     0,
      77,     0,    78,    79,   856,     0,    80,     0,    81,    82,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,    25,    26,
       0,     0,     0,    27,    28,    29,    30,    31,     0,    32,
       0,     0,    33,    34,    35,     0,    36,    37,    38,     0,
      39,   910,    40,     0,    41,     0,     0,    42,     0,     0,
       0,    43,    44,    45,    46,    47,     0,    49,    50,     0,
       0,    51,     0,     0,    53,    54,    55,    56,     0,     0,
       0,     0,    57,    58,    59,   375,    61,    62,    63,     0,
       0,     0,    64,    65,     0,    66,    67,    68,    69,    70,
      71,    72,     4,     5,     6,     7,     0,     0,    73,     8,
       9,     0,    10,   118,    75,    76,     0,     0,    77,     0,
      78,    79,     0,     0,    80,     0,    81,    82,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,    25,    26,     0,     0,
       0,    27,    28,    29,    30,    31,     0,    32,     0,     0,
      33,    34,    35,     0,    36,    37,    38,     0,    39,     0,
      40,     0,    41,     0,     0,    42,     0,     0,     0,    43,
      44,    45,    46,    47,     0,    49,    50,     0,     0,    51,
       0,     0,    53,    54,    55,    56,     0,     0,     0,     0,
      57,    58,    59,   375,    61,    62,    63,     0,     0,     0,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
       4,     5,     6,     7,     0,     0,    73,     8,     9,     0,
      10,   118,    75,    76,     0,     0,    77,     0,    78,    79,
     939,     0,    80,     0,    81,    82,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,     0,     0,     0,    27,
      28,    29,    30,    31,     0,    32,     0,     0,    33,    34,
      35,     0,    36,    37,    38,     0,    39,     0,    40,     0,
      41,     0,     0,    42,     0,     0,     0,    43,    44,    45,
      46,    47,     0,    49,    50,     0,     0,    51,     0,     0,
      53,    54,    55,    56,     0,     0,     0,     0,    57,    58,
      59,   375,    61,    62,    63,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,    72,     4,     5,
       6,     7,     0,     0,    73,     8,     9,     0,    10,   118,
      75,    76,     0,     0,    77,     0,    78,    79,   940,     0,
      80,     0,    81,    82,    83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,    25,    26,     0,     0,     0,    27,    28,    29,
      30,    31,     0,    32,     0,     0,    33,    34,    35,     0,
      36,    37,    38,     0,    39,     0,    40,     0,    41,     0,
       0,    42,     0,     0,     0,    43,    44,    45,    46,    47,
       0,    49,    50,     0,     0,    51,     0,     0,    53,    54,
      55,    56,     0,     0,     0,     0,    57,    58,    59,   375,
      61,    62,    63,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,    72,     4,     5,     6,     7,
       0,     0,    73,     8,     9,     0,    10,   118,    75,    76,
       0,     0,    77,     0,    78,    79,   941,     0,    80,     0,
      81,    82,    83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
      25,    26,     0,     0,     0,    27,    28,    29,    30,    31,
       0,    32,     0,     0,    33,    34,    35,     0,    36,    37,
      38,     0,    39,     0,    40,     0,    41,     0,     0,    42,
       0,     0,     0,    43,    44,    45,    46,    47,     0,    49,
      50,     0,     0,    51,     0,     0,    53,    54,    55,    56,
       0,     0,     0,     0,    57,    58,    59,   375,    61,    62,
      63,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
      73,     0,     0,     0,     0,   118,    75,    76,     0,     0,
      77,     0,    78,    79,   954,     0,    80,     0,    81,    82,
      83,   437,   438,   439,   440,   441,   442,   443,   444,   445,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,     0,     0,     0,     0,
       0,     0,   446,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   447,   448,     0,   449,   450,
       0,     0,   451,    30,   295,   296,     0,     0,     0,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   480,   481,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,     0,   495,   496,   497,   498,   499,     0,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,     4,
       5,     6,     7,     0,     0,     0,     8,     9,  -436,    10,
     510,   511,     0,     0,     0,     0,     0,     0,   512,     0,
       0,     0,     0,     0,     0,    83,     0,     0,     0,  -436,
       0,     0,     0,     0,     0,     0,     0,     0,  -436,     0,
       0,  -436,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,     0,     0,     0,    27,    28,
      29,    30,    31,     0,    32,     0,     0,    33,    34,    35,
       0,    36,    37,    38,     0,    39,     0,    40,     0,    41,
       0,     0,    42,     0,     0,     0,    43,    44,    45,    46,
      47,     0,    49,    50,     0,     0,    51,     0,     0,    53,
      54,    55,    56,     0,     0,     0,     0,    57,    58,    59,
     375,    61,    62,    63,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,    73,     4,     5,     6,     7,   118,    75,
      76,     8,     9,    77,    10,    78,    79,     0,     0,    80,
       0,    81,    82,    83,     0,     0,     0,     0,     0,     0,
     645,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,    25,    26,
       0,     0,     0,    27,    28,    29,    30,    31,     0,    32,
       0,     0,    33,    34,    35,     0,    36,    37,    38,     0,
      39,     0,    40,     0,    41,     0,     0,    42,     0,     0,
       0,    43,    44,    45,    46,    47,     0,    49,    50,     0,
       0,    51,     0,     0,    53,    54,     0,     0,     0,     0,
       0,     0,    57,    58,    59,     0,     0,     0,     0,     0,
       0,     0,    64,    65,     0,    66,    67,    68,    69,    70,
      71,    72,     0,     0,     0,     0,     0,     0,    73,     4,
       5,     6,     7,   118,    75,    76,     8,     9,    77,    10,
      78,    79,     0,     0,    80,     0,    81,    82,    83,     0,
       0,     0,     0,     0,     0,   648,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,     0,     0,     0,    27,    28,
      29,    30,    31,     0,    32,     0,     0,    33,    34,    35,
       0,    36,    37,    38,     0,    39,     0,    40,     0,    41,
       0,     0,    42,     0,     0,     0,    43,    44,    45,    46,
      47,     0,    49,    50,     0,     0,    51,     0,     0,    53,
      54,     0,     0,     0,     0,     0,     0,    57,    58,    59,
       0,     0,     0,     0,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,    73,     4,     5,     6,     7,   118,    75,
      76,     8,     9,    77,    10,    78,    79,     0,     0,    80,
       0,    81,    82,    83,     0,     0,     0,     0,     0,     0,
     719,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,    25,    26,
       0,     0,     0,    27,    28,    29,    30,    31,     0,    32,
       0,     0,    33,    34,    35,     0,    36,    37,    38,     0,
      39,     0,    40,     0,    41,     0,     0,    42,     0,     0,
       0,    43,    44,    45,    46,    47,     0,    49,    50,     0,
       0,    51,     0,     0,    53,    54,     0,     0,     0,     0,
       0,     0,    57,    58,    59,     0,     0,     0,     0,     0,
       0,     0,    64,    65,     0,    66,    67,    68,    69,    70,
      71,    72,     0,     0,     0,     0,     0,     0,    73,     4,
       5,     6,     7,   118,    75,    76,     8,     9,    77,    10,
      78,    79,     0,     0,    80,     0,    81,    82,    83,     0,
       0,     0,     0,     0,     0,   765,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,     0,     0,     0,    27,    28,
      29,    30,    31,     0,    32,     0,     0,    33,    34,    35,
       0,    36,    37,    38,     0,    39,     0,    40,     0,    41,
       0,     0,    42,     0,     0,     0,    43,    44,    45,    46,
      47,     0,    49,    50,     0,     0,    51,     0,     0,    53,
      54,     0,     0,     0,     0,     0,     0,    57,    58,    59,
       0,     0,     0,     0,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,    73,     4,     5,     6,     7,   118,    75,
      76,     8,     9,    77,    10,    78,    79,     0,     0,    80,
       0,    81,    82,    83,     0,     0,     0,     0,     0,     0,
     845,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,    25,    26,
       0,     0,     0,    27,    28,    29,    30,    31,     0,    32,
       0,     0,    33,    34,    35,     0,    36,    37,    38,     0,
      39,     0,    40,     0,    41,     0,     0,    42,     0,     0,
       0,    43,    44,    45,    46,    47,     0,    49,    50,     0,
       0,    51,     0,     0,    53,    54,     0,     0,     0,     0,
       0,     0,    57,    58,    59,     0,     0,     0,     0,     0,
       0,     0,    64,    65,     0,    66,    67,    68,    69,    70,
      71,    72,     4,     5,     6,     7,     0,     0,    73,     8,
       9,     0,    10,   118,    75,    76,     0,     0,    77,     0,
      78,    79,     0,     0,    80,     0,    81,    82,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,    25,    26,     0,     0,
       0,    27,    28,    29,    30,    31,     0,    32,     0,     0,
      33,    34,    35,     0,    36,    37,    38,     0,    39,     0,
      40,     0,    41,     0,     0,    42,     0,     0,     0,    43,
      44,    45,    46,    47,     0,    49,    50,     0,     0,    51,
       0,     0,    53,    54,     0,     0,     0,     0,     0,     0,
      57,    58,    59,     0,     0,     0,     0,     0,     0,     0,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
       4,     5,     6,     7,     0,     0,    73,     8,     9,     0,
      10,   118,    75,    76,     0,     0,    77,     0,    78,    79,
       0,     0,    80,     0,    81,    82,    83,     0,     0,     0,
       0,     0,   216,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,     0,     0,     0,    27,
      28,   116,    30,     0,     0,    32,     0,     0,    33,    34,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,     0,   268,     0,
      46,    47,     0,     0,     0,     0,     0,     0,     0,     0,
     269,   117,     0,     0,     0,     0,     0,     0,     0,    58,
      59,     0,     0,     0,     0,     0,     0,     0,   217,    65,
       0,    66,    67,    68,    69,    70,    71,    72,     4,     5,
       6,     7,     0,     0,    73,     8,     9,     0,    10,   118,
      75,    76,   218,     0,    77,     0,     0,     0,     0,     0,
      80,     0,    81,    82,    83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,    25,    26,     0,     0,     0,    27,    28,   116,
      30,     0,     0,    32,     0,     0,    33,    34,  -477,  -477,
    -477,  -477,  -477,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,     0,   268,     0,    46,    47,
       0,     0,     0,     0,     0,     0,     0,     0,   269,   117,
       0,     0,     0,     0,     0,     0,     0,    58,    59,     0,
       0,     0,     0,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,    72,     4,     5,     6,     7,
       0,     0,    73,     8,     9,     0,    10,   118,    75,    76,
     393,     0,    77,   394,     0,     0,     0,     0,    80,     0,
      81,    82,    83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
      25,    26,     0,     0,     0,    27,    28,   116,    30,     0,
       0,    32,   364,     0,    33,    34,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   117,     0,     0,
       0,     0,     0,     0,     0,    58,    59,     0,     0,     0,
       0,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
      73,     4,     5,     6,     7,   118,    75,    76,     8,     9,
      77,    10,     0,     0,     0,     0,    80,     0,    81,    82,
      83,     0,     0,     0,     0,     0,     0,   407,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,     0,     0,     0,
      27,    28,   116,    30,     0,     0,    32,     0,     0,    33,
      34,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   117,     0,     0,     0,     0,     0,     0,     0,
      58,    59,     0,     0,     0,     0,     0,     0,     0,    64,
      65,     0,    66,    67,    68,    69,    70,    71,    72,     4,
       5,     6,     7,     0,     0,    73,     8,     9,     0,    10,
     118,    75,    76,     0,     0,    77,     0,     0,     0,     0,
       0,    80,     0,    81,    82,    83,     0,     0,     0,     0,
       0,   528,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,     0,     0,     0,    27,    28,
     116,    30,     0,     0,    32,     0,     0,    33,    34,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    46,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     117,     0,     0,     0,     0,     0,     0,     0,    58,    59,
       0,     0,     0,     0,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,    72,     4,     5,     6,
       7,     0,     0,    73,     8,     9,     0,    10,   118,    75,
      76,     0,     0,    77,     0,     0,     0,     0,     0,    80,
       0,    81,    82,    83,     0,     0,     0,     0,     0,   606,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,     0,     0,     0,    27,    28,   116,    30,
       0,     0,    32,     0,     0,    33,    34,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    46,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   117,     0,
       0,     0,     0,     0,     0,     0,    58,    59,     0,     0,
       0,     0,     0,     0,     0,   607,    65,     0,    66,    67,
      68,    69,    70,    71,    72,     4,     5,     6,     7,     0,
       0,    73,     8,     9,     0,    10,   118,    75,    76,     0,
       0,    77,     0,     0,     0,     0,     0,    80,     0,    81,
      82,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
      26,     0,     0,     0,    27,    28,   116,    30,     0,     0,
      32,     0,     0,    33,    34,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   117,     0,     0,     0,
       0,     0,     0,     0,    58,    59,     0,     0,     0,     0,
       0,     0,     0,    64,    65,     0,    66,    67,    68,    69,
      70,    71,    72,     4,     5,     6,     7,     0,     0,    73,
       8,     9,     0,    10,   118,    75,    76,   393,     0,    77,
       0,     0,     0,     0,     0,    80,     0,    81,    82,    83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,    26,     0,
       0,     0,    27,    28,   116,    30,     0,     0,    32,     0,
       0,    33,    34,     0,     0,     0,     0,     0,     0,     0,
       0,   437,   438,   439,   440,   441,   442,   443,   444,   445,
       0,     0,     0,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   117,     0,     0,     0,     0,     0,
       0,     0,    58,    59,     0,     0,     0,     0,     0,     0,
       0,    64,    65,     0,    66,    67,    68,    69,    70,    71,
      72,     0,   446,     0,     0,     0,     0,    73,     0,     0,
       0,     0,   118,    75,    76,   447,   448,    77,   449,   450,
       0,     0,   884,    80,     0,    81,    82,    83,     0,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   480,   481,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,     0,   495,   496,   497,   498,   499,     0,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   437,
     438,   439,   440,   441,   442,   443,   444,   445,     0,     0,
     885,   511,    76,     0,     0,     0,     0,     0,   244,   886,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,     0,   268,     0,     0,     0,     0,     0,
     446,     0,     0,     0,     0,     0,   269,     0,     0,     0,
       0,     0,     0,   447,   448,     0,   449,   450,     0,     0,
     884,     0,     0,     0,     0,     0,     0,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
       0,   495,   496,   497,   498,   499,     0,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   241,   242,   243,
       0,     0,     0,     0,     0,     0,     0,     0,   885,   511,
      76,     0,     0,     0,     0,     0,     0,   913,   244,     0,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,     0,   268,   241,   242,   243,     0,     0,
       0,     0,     0,     0,     0,     0,   269,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   244,     0,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,     0,   268,   241,   242,   243,     0,     0,     0,     0,
       0,     0,     0,     0,   269,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   244,     0,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,     0,
     268,   241,   242,   243,     0,     0,     0,     0,     0,     0,
       0,   600,   269,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   244,     0,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,     0,   268,   241,
     242,   243,     0,     0,     0,     0,     0,     0,     0,   611,
     269,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     244,     0,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,     0,   268,   241,   242,   243,
       0,     0,     0,     0,     0,     0,     0,   639,   269,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   244,     0,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,     0,   268,   241,   242,   243,     0,     0,
       0,     0,     0,     0,     0,   643,   269,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   244,   820,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,     0,   268,   241,   242,   243,     0,     0,     0,     0,
       0,     0,     0,   707,   269,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   244,     0,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,     0,
     268,   241,   242,   243,     0,     0,     0,     0,     0,     0,
       0,   708,   269,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   244,     0,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,     0,   268,   241,
     242,   243,     0,     0,     0,     0,     0,   821,     0,     0,
     269,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     244,     0,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,     0,   268,   241,   242,   243,
       0,     0,     0,     0,     0,   270,     0,     0,   269,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   244,     0,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,     0,   268,   241,   242,   243,     0,     0,
       0,     0,     0,   330,     0,     0,   269,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   244,     0,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,     0,   268,   241,   242,   243,     0,     0,     0,     0,
     374,     0,     0,     0,   269,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   244,     0,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,     0,
     268,   241,   242,   243,     0,     0,     0,     0,   544,     0,
       0,     0,   269,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   244,     0,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,     0,   268,   241,
     242,   243,     0,     0,     0,     0,   552,     0,     0,     0,
     269,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     244,     0,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,     0,   268,   241,   242,   243,
       0,     0,     0,     0,   554,     0,     0,     0,   269,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   244,     0,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,     0,   268,   241,   242,   243,     0,     0,
       0,     0,   557,     0,     0,     0,   269,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   244,     0,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,     0,   268,   241,   242,   243,     0,     0,     0,     0,
     562,     0,     0,     0,   269,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   244,     0,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,     0,
     268,   241,   242,   243,     0,     0,     0,     0,   583,     0,
       0,     0,   269,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   244,     0,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,     0,   268,     0,
       0,     0,     0,     0,     0,     0,   696,     0,     0,     0,
     269,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   437,   438,   439,   440,   441,
     442,   443,   444,   445,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   697,   268,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   269,     0,     0,
       0,     0,     0,     0,     0,     0,   446,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   447,
     448,     0,   449,   450,     0,     0,   451,     0,     0,     0,
       0,     0,   711,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,     0,   495,   496,   497,
     498,   499,     0,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   437,   438,   439,   440,   441,   442,   443,
     444,   445,     0,     0,   510,   511,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,     0,
     268,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   269,     0,   446,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   447,   448,     0,
     449,   450,     0,     0,   931,     0,     0,     0,     0,     0,
       0,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   480,
     481,   482,   483,   484,   785,   786,   787,   788,   789,   790,
     491,   492,   493,   494,     0,   495,   496,   497,   498,   499,
       0,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   241,   242,   243,     0,     0,     0,     0,     0,     0,
       0,     0,   510,   511,     0,     0,     0,     0,     0,     0,
       0,     0,   244,     0,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,     0,   268,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     269,     0,     0,     0,     0,     0,     0,   241,   242,   243,
       0,     0,   386,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   244,   560,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,     0,   268,   241,   242,   243,     0,     0,
       0,     0,     0,     0,     0,     0,   269,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   244,   620,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,     0,   268,   241,   242,   243,     0,     0,     0,     0,
       0,     0,     0,     0,   269,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   244,     0,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,     0,
     268,   242,   243,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   269,     0,     0,     0,     0,     0,     0,     0,
       0,   244,     0,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   243,   268,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   269,
       0,     0,     0,     0,     0,   244,     0,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     298,   268,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   269,     0,     0,   244,     0,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,     0,   268,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   269,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,     0,   268,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   269,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,     0,
     268,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   269,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,     0,   268,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   269
};

static const yytype_int16 yycheck[] =
{
       2,    25,   102,     2,     2,    13,   351,    85,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,     2,
     120,    17,    18,    19,    20,    21,    22,    23,    24,   180,
      26,     2,   110,   632,     2,    25,    15,    16,   558,    37,
      36,    44,    15,    16,    13,   373,    49,    43,    44,   133,
     395,    13,    13,    49,    30,    51,   796,   676,    52,    75,
     741,    75,   274,   807,   276,   809,    30,     0,    75,    76,
      75,    76,   642,   546,    75,    75,    30,   356,    75,   131,
      74,    77,    76,    25,    80,    96,    75,    76,    76,    76,
      75,   158,    55,   152,   131,    36,   176,    75,    75,   158,
      36,    75,   783,   104,    67,   106,   705,   104,   660,   106,
     115,    53,   164,    71,    72,   152,    96,   201,   202,    54,
     841,   126,   843,   155,   161,   695,   115,   164,   160,   810,
      96,    75,   158,    76,    75,    76,   132,   133,    79,   155,
      76,    83,   615,   158,   155,    15,    16,   161,   153,   158,
     155,   159,    34,   156,   161,   155,   435,   838,   155,   155,
     156,   168,   158,   168,   153,   784,   155,   163,   164,   165,
     722,   167,   724,   161,   115,   155,   161,   917,   155,   168,
     168,   168,   117,   161,   335,   161,   180,   161,   182,   155,
     159,   132,   133,   713,    76,    75,   160,   159,   159,   195,
     196,   160,   946,   924,   163,   201,   202,   150,   151,   153,
     206,   155,   153,   215,   155,   194,   210,   158,   939,   940,
     158,   194,   218,   164,    71,    72,   947,   168,   207,   158,
     951,   116,   117,   229,   207,    29,   232,   216,    85,   237,
      76,   126,    78,   216,   268,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   275,   269,   602,   158,   279,    96,   268,   275,
     158,    75,   278,   279,   563,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   918,
     384,   160,   298,    29,   163,   308,    76,    96,    78,    75,
     589,   307,   308,    75,   150,   151,   159,   313,    75,   159,
     163,   666,   402,   163,   194,   165,   268,   329,   161,   325,
     160,   167,   274,   163,   276,   277,   155,   207,   937,   133,
     134,   335,   160,    99,   100,   163,   216,   341,   344,    75,
     159,    76,   160,    78,   163,   163,    99,   100,    76,   153,
     302,   155,   158,   305,   306,   159,   155,    76,    49,    78,
     158,   133,   134,   159,    76,   158,    78,   163,    75,    76,
     150,   151,    79,   131,   729,    76,    76,    78,   384,   734,
     386,   153,   388,   155,    75,    76,   160,   393,   677,   163,
      81,   343,   155,   399,   152,   401,   162,   133,   134,   160,
     434,   407,   163,   161,   104,   105,   164,   568,   115,   162,
     160,   161,   573,   163,   149,   150,   151,   153,   158,   155,
     709,   149,   150,   151,   158,   780,   133,   104,   105,   517,
     149,   150,   151,   521,   109,   110,   159,   525,   150,   151,
     163,   158,   165,     8,     9,    10,   153,    36,   155,   150,
     151,   158,   160,   152,   104,   163,   106,   164,   747,   131,
     162,   168,   164,   752,    29,   152,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,   161,
      55,   112,   164,   164,   115,   116,   117,   118,   119,   120,
     121,   158,    67,   664,   665,   158,   512,   112,   155,   670,
     115,   116,   117,   118,   119,   120,   121,   523,   112,   160,
     161,   115,   116,   117,   118,   119,   120,   121,   112,    81,
      82,   115,   116,   117,   118,   119,   120,   121,    67,   528,
     158,   162,   152,   204,    88,   528,   554,   208,   160,   557,
     556,   585,   558,   559,   588,   645,   160,   162,   648,   160,
      15,   655,   160,   224,   568,   226,   227,   228,   162,   573,
     731,   560,   733,   862,   160,   581,   112,   560,   162,   115,
     116,   117,   118,   119,   120,   121,    15,   621,   159,    75,
     579,   603,    75,   599,   603,   603,   579,   691,   632,    75,
     165,   161,   158,   609,   165,   163,   618,   613,    75,   166,
     603,   158,   158,   902,   620,    30,    75,   606,   160,   158,
     781,   715,   603,   606,   131,   603,   162,   165,   159,   719,
     919,   158,   921,    98,    99,   100,   160,   163,   860,    51,
      52,    53,   676,    55,    75,   152,   868,   160,   528,   655,
     658,   158,    76,   163,   161,    67,   160,   164,   163,   749,
     664,   665,   131,   129,   653,   129,   670,   889,   702,   159,
     653,   705,   159,    75,   686,   765,   682,   686,   686,   161,
     560,   162,    15,   152,   158,   691,   776,    75,   696,   158,
     912,   163,   161,   686,   165,   164,   158,   158,   710,   579,
     712,    98,    99,   100,   158,   686,   740,   713,   686,   715,
     718,   933,   165,   158,   165,   159,   159,   751,    15,   130,
     161,    81,   159,   165,   159,   835,   606,   731,   717,   733,
     158,   163,   822,   159,   717,    48,    49,    50,    51,    52,
      53,   775,    55,   159,    36,   158,   160,    30,   158,    30,
     784,   160,   160,   160,    67,   845,   768,   163,   163,   160,
     794,   161,   852,   156,   160,   771,   160,   159,   158,    76,
     165,   162,   161,   653,   104,   161,   106,   781,   163,   162,
     159,   159,   159,   795,   112,   115,   116,   117,   118,   119,
     120,   803,   161,   160,   159,   159,   162,   160,    13,    15,
     162,   158,   161,   815,   812,   160,   814,   160,   162,    76,
     160,   159,    15,    15,   826,   905,   161,    76,   161,   909,
     854,   911,   161,    96,   160,   152,   860,    96,   160,   113,
     917,   160,   158,    52,   840,   159,   733,   717,   664,   341,
     182,   853,   731,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   889,    55,   166,   579,    90,
     950,   717,   819,   702,   814,   794,   751,   879,    67,   881,
     621,   613,   901,   343,   313,   889,   898,   327,   346,   301,
     908,   268,   305,   581,   918,   388,    -1,    -1,    -1,   895,
      -1,    -1,   276,   899,     4,     5,     6,     7,   904,    -1,
      -1,    11,    12,   937,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   925,    -1,   927,    -1,   929,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
     952,    -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    -1,    79,
      -1,    -1,    82,    83,    84,    -1,    86,    87,    88,    -1,
      90,    -1,    92,    -1,    94,    -1,    -1,    97,    -1,    -1,
      -1,   101,   102,   103,   104,   105,   106,   107,   108,    -1,
      -1,   111,   112,    -1,   114,   115,   116,   117,    -1,    -1,
      -1,    -1,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,   132,   133,    -1,   135,   136,   137,   138,   139,
     140,   141,     4,     5,     6,     7,    -1,    -1,   148,    11,
      12,    -1,    14,   153,   154,   155,    -1,    -1,   158,    -1,
     160,   161,   162,    -1,   164,    -1,   166,   167,   168,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      -1,    -1,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    68,    69,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    -1,    79,    -1,    -1,
      82,    83,    84,    -1,    86,    87,    88,    -1,    90,    -1,
      92,    -1,    94,    -1,    -1,    97,    -1,    -1,    -1,   101,
     102,   103,   104,   105,   106,   107,   108,    -1,    -1,   111,
     112,    -1,   114,   115,   116,   117,    -1,    -1,    -1,    -1,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
     132,   133,    -1,   135,   136,   137,   138,   139,   140,   141,
       4,     5,     6,     7,    -1,    -1,   148,    11,    12,    -1,
      14,   153,   154,   155,    -1,    -1,   158,    -1,   160,   161,
     162,    -1,   164,    -1,   166,   167,   168,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    68,    69,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    -1,    79,    -1,    -1,    82,    83,
      84,    -1,    86,    87,    88,    -1,    90,    -1,    92,    -1,
      94,    -1,    -1,    97,    -1,    -1,    -1,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,    -1,   111,   112,    -1,
     114,   115,   116,   117,    -1,    -1,    -1,    -1,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,   132,   133,
      -1,   135,   136,   137,   138,   139,   140,   141,     4,     5,
       6,     7,    -1,    -1,   148,    11,    12,    -1,    14,   153,
     154,   155,    -1,    -1,   158,    -1,   160,   161,    -1,    -1,
     164,    -1,   166,   167,   168,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    68,    69,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    -1,    79,    -1,    -1,    82,    83,    84,    -1,
      86,    87,    88,    -1,    90,    -1,    92,    -1,    94,    -1,
      -1,    97,    -1,    -1,    -1,   101,   102,   103,   104,   105,
      -1,   107,   108,    -1,    -1,   111,    -1,    -1,   114,   115,
     116,   117,    -1,    -1,    -1,    -1,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,   132,   133,    -1,   135,
     136,   137,   138,   139,   140,   141,     4,     5,     6,     7,
      -1,    -1,   148,    11,    12,    -1,    14,   153,   154,   155,
      -1,    -1,   158,    -1,   160,   161,   162,    -1,   164,    -1,
     166,   167,   168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      68,    69,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      -1,    79,    -1,    -1,    82,    83,    84,    -1,    86,    87,
      88,    -1,    90,    -1,    92,    -1,    94,    -1,    -1,    97,
      -1,    -1,    -1,   101,   102,   103,   104,   105,    -1,   107,
     108,    -1,    -1,   111,    -1,    -1,   114,   115,   116,   117,
      -1,    -1,    -1,    -1,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,    -1,   132,   133,    -1,   135,   136,   137,
     138,   139,   140,   141,     4,     5,     6,     7,    -1,    -1,
     148,    11,    12,    -1,    14,   153,   154,   155,    -1,    -1,
     158,    -1,   160,   161,   162,    -1,   164,    -1,   166,   167,
     168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    -1,    79,
      -1,    -1,    82,    83,    84,    85,    86,    87,    88,    -1,
      90,    -1,    92,    -1,    94,    -1,    -1,    97,    -1,    -1,
      -1,   101,   102,   103,   104,   105,    -1,   107,   108,    -1,
      -1,   111,    -1,    -1,   114,   115,   116,   117,    -1,    -1,
      -1,    -1,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,   132,   133,    -1,   135,   136,   137,   138,   139,
     140,   141,     4,     5,     6,     7,    -1,    -1,   148,    11,
      12,    -1,    14,   153,   154,   155,    -1,    -1,   158,    -1,
     160,   161,    -1,    -1,   164,    -1,   166,   167,   168,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      -1,    -1,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    68,    69,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    -1,    79,    -1,    -1,
      82,    83,    84,    -1,    86,    87,    88,    89,    90,    -1,
      92,    -1,    94,    -1,    -1,    97,    -1,    -1,    -1,   101,
     102,   103,   104,   105,    -1,   107,   108,    -1,    -1,   111,
      -1,    -1,   114,   115,   116,   117,    -1,    -1,    -1,    -1,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
     132,   133,    -1,   135,   136,   137,   138,   139,   140,   141,
       4,     5,     6,     7,    -1,    -1,   148,    11,    12,    -1,
      14,   153,   154,   155,    -1,    -1,   158,    -1,   160,   161,
      -1,    -1,   164,    -1,   166,   167,   168,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    68,    69,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    -1,    79,    -1,    -1,    82,    83,
      84,    -1,    86,    87,    88,    -1,    90,    -1,    92,    -1,
      94,    95,    -1,    97,    -1,    -1,    -1,   101,   102,   103,
     104,   105,    -1,   107,   108,    -1,    -1,   111,    -1,    -1,
     114,   115,   116,   117,    -1,    -1,    -1,    -1,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,   132,   133,
      -1,   135,   136,   137,   138,   139,   140,   141,     4,     5,
       6,     7,    -1,    -1,   148,    11,    12,    -1,    14,   153,
     154,   155,    -1,    -1,   158,    -1,   160,   161,    -1,    -1,
     164,    -1,   166,   167,   168,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    68,    69,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    -1,    79,    -1,    -1,    82,    83,    84,    -1,
      86,    87,    88,    -1,    90,    -1,    92,    93,    94,    -1,
      -1,    97,    -1,    -1,    -1,   101,   102,   103,   104,   105,
      -1,   107,   108,    -1,    -1,   111,    -1,    -1,   114,   115,
     116,   117,    -1,    -1,    -1,    -1,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,   132,   133,    -1,   135,
     136,   137,   138,   139,   140,   141,     4,     5,     6,     7,
      -1,    -1,   148,    11,    12,    -1,    14,   153,   154,   155,
      -1,    -1,   158,    -1,   160,   161,    -1,    -1,   164,    -1,
     166,   167,   168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      68,    69,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      -1,    79,    -1,    -1,    82,    83,    84,    -1,    86,    87,
      88,    -1,    90,    -1,    92,    -1,    94,    -1,    -1,    97,
      -1,    -1,    -1,   101,   102,   103,   104,   105,    -1,   107,
     108,    -1,    -1,   111,    -1,    -1,   114,   115,   116,   117,
      -1,    -1,    -1,    -1,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,    -1,   132,   133,    -1,   135,   136,   137,
     138,   139,   140,   141,     4,     5,     6,     7,    -1,    -1,
     148,    11,    12,    -1,    14,   153,   154,   155,    -1,    -1,
     158,    -1,   160,   161,   162,    -1,   164,    -1,   166,   167,
     168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    -1,    79,
      -1,    -1,    82,    83,    84,    -1,    86,    87,    88,    -1,
      90,    91,    92,    -1,    94,    -1,    -1,    97,    -1,    -1,
      -1,   101,   102,   103,   104,   105,    -1,   107,   108,    -1,
      -1,   111,    -1,    -1,   114,   115,   116,   117,    -1,    -1,
      -1,    -1,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,   132,   133,    -1,   135,   136,   137,   138,   139,
     140,   141,     4,     5,     6,     7,    -1,    -1,   148,    11,
      12,    -1,    14,   153,   154,   155,    -1,    -1,   158,    -1,
     160,   161,    -1,    -1,   164,    -1,   166,   167,   168,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      -1,    -1,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    68,    69,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    -1,    79,    -1,    -1,
      82,    83,    84,    -1,    86,    87,    88,    -1,    90,    -1,
      92,    -1,    94,    -1,    -1,    97,    -1,    -1,    -1,   101,
     102,   103,   104,   105,    -1,   107,   108,    -1,    -1,   111,
      -1,    -1,   114,   115,   116,   117,    -1,    -1,    -1,    -1,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
     132,   133,    -1,   135,   136,   137,   138,   139,   140,   141,
       4,     5,     6,     7,    -1,    -1,   148,    11,    12,    -1,
      14,   153,   154,   155,    -1,    -1,   158,    -1,   160,   161,
     162,    -1,   164,    -1,   166,   167,   168,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    68,    69,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    -1,    79,    -1,    -1,    82,    83,
      84,    -1,    86,    87,    88,    -1,    90,    -1,    92,    -1,
      94,    -1,    -1,    97,    -1,    -1,    -1,   101,   102,   103,
     104,   105,    -1,   107,   108,    -1,    -1,   111,    -1,    -1,
     114,   115,   116,   117,    -1,    -1,    -1,    -1,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,   132,   133,
      -1,   135,   136,   137,   138,   139,   140,   141,     4,     5,
       6,     7,    -1,    -1,   148,    11,    12,    -1,    14,   153,
     154,   155,    -1,    -1,   158,    -1,   160,   161,   162,    -1,
     164,    -1,   166,   167,   168,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    68,    69,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    -1,    79,    -1,    -1,    82,    83,    84,    -1,
      86,    87,    88,    -1,    90,    -1,    92,    -1,    94,    -1,
      -1,    97,    -1,    -1,    -1,   101,   102,   103,   104,   105,
      -1,   107,   108,    -1,    -1,   111,    -1,    -1,   114,   115,
     116,   117,    -1,    -1,    -1,    -1,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,   132,   133,    -1,   135,
     136,   137,   138,   139,   140,   141,     4,     5,     6,     7,
      -1,    -1,   148,    11,    12,    -1,    14,   153,   154,   155,
      -1,    -1,   158,    -1,   160,   161,   162,    -1,   164,    -1,
     166,   167,   168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      68,    69,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      -1,    79,    -1,    -1,    82,    83,    84,    -1,    86,    87,
      88,    -1,    90,    -1,    92,    -1,    94,    -1,    -1,    97,
      -1,    -1,    -1,   101,   102,   103,   104,   105,    -1,   107,
     108,    -1,    -1,   111,    -1,    -1,   114,   115,   116,   117,
      -1,    -1,    -1,    -1,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,    -1,   132,   133,    -1,   135,   136,   137,
     138,   139,   140,   141,    -1,    -1,    -1,    -1,    -1,    -1,
     148,    -1,    -1,    -1,    -1,   153,   154,   155,    -1,    -1,
     158,    -1,   160,   161,   162,    -1,   164,    -1,   166,   167,
     168,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    69,    -1,    71,    72,
      -1,    -1,    75,    76,    57,    58,    -1,    -1,    -1,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,    -1,   126,   127,   128,   129,   130,    -1,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,     4,
       5,     6,     7,    -1,    -1,    -1,    11,    12,   131,    14,
     153,   154,    -1,    -1,    -1,    -1,    -1,    -1,   161,    -1,
      -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,    -1,   152,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,    -1,
      -1,   164,    -1,    48,    49,    -1,    -1,    -1,    -1,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    69,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    -1,    79,    -1,    -1,    82,    83,    84,
      -1,    86,    87,    88,    -1,    90,    -1,    92,    -1,    94,
      -1,    -1,    97,    -1,    -1,    -1,   101,   102,   103,   104,
     105,    -1,   107,   108,    -1,    -1,   111,    -1,    -1,   114,
     115,   116,   117,    -1,    -1,    -1,    -1,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,   132,   133,    -1,
     135,   136,   137,   138,   139,   140,   141,    -1,    -1,    -1,
      -1,    -1,    -1,   148,     4,     5,     6,     7,   153,   154,
     155,    11,    12,   158,    14,   160,   161,    -1,    -1,   164,
      -1,   166,   167,   168,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    -1,    79,
      -1,    -1,    82,    83,    84,    -1,    86,    87,    88,    -1,
      90,    -1,    92,    -1,    94,    -1,    -1,    97,    -1,    -1,
      -1,   101,   102,   103,   104,   105,    -1,   107,   108,    -1,
      -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,
      -1,    -1,   122,   123,   124,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   132,   133,    -1,   135,   136,   137,   138,   139,
     140,   141,    -1,    -1,    -1,    -1,    -1,    -1,   148,     4,
       5,     6,     7,   153,   154,   155,    11,    12,   158,    14,
     160,   161,    -1,    -1,   164,    -1,   166,   167,   168,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    69,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    -1,    79,    -1,    -1,    82,    83,    84,
      -1,    86,    87,    88,    -1,    90,    -1,    92,    -1,    94,
      -1,    -1,    97,    -1,    -1,    -1,   101,   102,   103,   104,
     105,    -1,   107,   108,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,   133,    -1,
     135,   136,   137,   138,   139,   140,   141,    -1,    -1,    -1,
      -1,    -1,    -1,   148,     4,     5,     6,     7,   153,   154,
     155,    11,    12,   158,    14,   160,   161,    -1,    -1,   164,
      -1,   166,   167,   168,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    -1,    79,
      -1,    -1,    82,    83,    84,    -1,    86,    87,    88,    -1,
      90,    -1,    92,    -1,    94,    -1,    -1,    97,    -1,    -1,
      -1,   101,   102,   103,   104,   105,    -1,   107,   108,    -1,
      -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,
      -1,    -1,   122,   123,   124,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   132,   133,    -1,   135,   136,   137,   138,   139,
     140,   141,    -1,    -1,    -1,    -1,    -1,    -1,   148,     4,
       5,     6,     7,   153,   154,   155,    11,    12,   158,    14,
     160,   161,    -1,    -1,   164,    -1,   166,   167,   168,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    69,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    -1,    79,    -1,    -1,    82,    83,    84,
      -1,    86,    87,    88,    -1,    90,    -1,    92,    -1,    94,
      -1,    -1,    97,    -1,    -1,    -1,   101,   102,   103,   104,
     105,    -1,   107,   108,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,   133,    -1,
     135,   136,   137,   138,   139,   140,   141,    -1,    -1,    -1,
      -1,    -1,    -1,   148,     4,     5,     6,     7,   153,   154,
     155,    11,    12,   158,    14,   160,   161,    -1,    -1,   164,
      -1,   166,   167,   168,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    -1,    79,
      -1,    -1,    82,    83,    84,    -1,    86,    87,    88,    -1,
      90,    -1,    92,    -1,    94,    -1,    -1,    97,    -1,    -1,
      -1,   101,   102,   103,   104,   105,    -1,   107,   108,    -1,
      -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,
      -1,    -1,   122,   123,   124,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   132,   133,    -1,   135,   136,   137,   138,   139,
     140,   141,     4,     5,     6,     7,    -1,    -1,   148,    11,
      12,    -1,    14,   153,   154,   155,    -1,    -1,   158,    -1,
     160,   161,    -1,    -1,   164,    -1,   166,   167,   168,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      -1,    -1,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    68,    69,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    -1,    79,    -1,    -1,
      82,    83,    84,    -1,    86,    87,    88,    -1,    90,    -1,
      92,    -1,    94,    -1,    -1,    97,    -1,    -1,    -1,   101,
     102,   103,   104,   105,    -1,   107,   108,    -1,    -1,   111,
      -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,
     122,   123,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     132,   133,    -1,   135,   136,   137,   138,   139,   140,   141,
       4,     5,     6,     7,    -1,    -1,   148,    11,    12,    -1,
      14,   153,   154,   155,    -1,    -1,   158,    -1,   160,   161,
      -1,    -1,   164,    -1,   166,   167,   168,    -1,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    68,    69,    -1,    -1,    -1,    73,
      74,    75,    76,    -1,    -1,    79,    -1,    -1,    82,    83,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,    -1,
     104,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,   133,
      -1,   135,   136,   137,   138,   139,   140,   141,     4,     5,
       6,     7,    -1,    -1,   148,    11,    12,    -1,    14,   153,
     154,   155,   156,    -1,   158,    -1,    -1,    -1,    -1,    -1,
     164,    -1,   166,   167,   168,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    68,    69,    -1,    -1,    -1,    73,    74,    75,
      76,    -1,    -1,    79,    -1,    -1,    82,    83,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,    -1,   104,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   132,   133,    -1,   135,
     136,   137,   138,   139,   140,   141,     4,     5,     6,     7,
      -1,    -1,   148,    11,    12,    -1,    14,   153,   154,   155,
     156,    -1,   158,   159,    -1,    -1,    -1,    -1,   164,    -1,
     166,   167,   168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      68,    69,    -1,    -1,    -1,    73,    74,    75,    76,    -1,
      -1,    79,    80,    -1,    82,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   123,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   132,   133,    -1,   135,   136,   137,
     138,   139,   140,   141,    -1,    -1,    -1,    -1,    -1,    -1,
     148,     4,     5,     6,     7,   153,   154,   155,    11,    12,
     158,    14,    -1,    -1,    -1,    -1,   164,    -1,   166,   167,
     168,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      -1,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    69,    -1,    -1,    -1,
      73,    74,    75,    76,    -1,    -1,    79,    -1,    -1,    82,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,
     133,    -1,   135,   136,   137,   138,   139,   140,   141,     4,
       5,     6,     7,    -1,    -1,   148,    11,    12,    -1,    14,
     153,   154,   155,    -1,    -1,   158,    -1,    -1,    -1,    -1,
      -1,   164,    -1,   166,   167,   168,    -1,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    69,    -1,    -1,    -1,    73,    74,
      75,    76,    -1,    -1,    79,    -1,    -1,    82,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,   133,    -1,
     135,   136,   137,   138,   139,   140,   141,     4,     5,     6,
       7,    -1,    -1,   148,    11,    12,    -1,    14,   153,   154,
     155,    -1,    -1,   158,    -1,    -1,    -1,    -1,    -1,   164,
      -1,   166,   167,   168,    -1,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    69,    -1,    -1,    -1,    73,    74,    75,    76,
      -1,    -1,    79,    -1,    -1,    82,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,   124,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   132,   133,    -1,   135,   136,
     137,   138,   139,   140,   141,     4,     5,     6,     7,    -1,
      -1,   148,    11,    12,    -1,    14,   153,   154,   155,    -1,
      -1,   158,    -1,    -1,    -1,    -1,    -1,   164,    -1,   166,
     167,   168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    -1,    -1,    -1,    -1,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      69,    -1,    -1,    -1,    73,    74,    75,    76,    -1,    -1,
      79,    -1,    -1,    82,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   104,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   132,   133,    -1,   135,   136,   137,   138,
     139,   140,   141,     4,     5,     6,     7,    -1,    -1,   148,
      11,    12,    -1,    14,   153,   154,   155,   156,    -1,   158,
      -1,    -1,    -1,    -1,    -1,   164,    -1,   166,   167,   168,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,
      -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    69,    -1,
      -1,    -1,    73,    74,    75,    76,    -1,    -1,    79,    -1,
      -1,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    -1,    -1,   104,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   132,   133,    -1,   135,   136,   137,   138,   139,   140,
     141,    -1,    55,    -1,    -1,    -1,    -1,   148,    -1,    -1,
      -1,    -1,   153,   154,   155,    68,    69,   158,    71,    72,
      -1,    -1,    75,   164,    -1,   166,   167,   168,    -1,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,    -1,   126,   127,   128,   129,   130,    -1,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    -1,    -1,
     153,   154,   155,    -1,    -1,    -1,    -1,    -1,    29,   162,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    69,    -1,    71,    72,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
      -1,   126,   127,   128,   129,   130,    -1,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,   154,
     155,    -1,    -1,    -1,    -1,    -1,    -1,   162,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   162,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   162,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   162,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   162,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,   160,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,     8,     9,    10,    -1,    -1,    -1,    -1,
     159,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,     8,     9,    10,    -1,    -1,    -1,    -1,   159,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,     8,
       9,    10,    -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,     8,     9,    10,
      -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,     8,     9,    10,    -1,    -1,
      -1,    -1,   159,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,     8,     9,    10,    -1,    -1,    -1,    -1,
     159,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,     8,     9,    10,    -1,    -1,    -1,    -1,   159,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,   159,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      69,    -1,    71,    72,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    -1,   159,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,    -1,   126,   127,   128,
     129,   130,    -1,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    -1,    -1,   153,   154,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    -1,
      71,    72,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,    -1,   126,   127,   128,   129,   130,
      -1,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   153,   154,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    -1,     8,     9,    10,
      -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    96,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    10,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      13,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   170,   174,     0,     4,     5,     6,     7,    11,    12,
      14,    48,    49,    54,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    68,    69,    73,    74,    75,
      76,    77,    79,    82,    83,    84,    86,    87,    88,    90,
      92,    94,    97,   101,   102,   103,   104,   105,   106,   107,
     108,   111,   112,   114,   115,   116,   117,   122,   123,   124,
     125,   126,   127,   128,   132,   133,   135,   136,   137,   138,
     139,   140,   141,   148,   153,   154,   155,   158,   160,   161,
     164,   166,   167,   168,   175,   176,   177,   193,   200,   203,
     206,   207,   208,   210,   223,   224,   225,   226,   267,   268,
     269,   270,   271,   279,   280,   285,   286,   287,   289,   290,
     291,   292,   293,   294,   295,   306,    75,   115,   153,   268,
     271,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   115,   158,   164,   285,   287,   293,   293,   268,   268,
     268,   268,   268,   268,   268,   268,   126,   176,   265,   280,
     281,   294,   296,   268,    30,   158,   158,   282,   158,   261,
     262,   268,   193,   158,   158,   158,   158,   158,   268,   288,
     288,    75,    75,   190,   260,   288,   161,   268,   104,   106,
     155,   175,   180,   182,   186,   188,   189,   237,   238,   294,
      76,   239,   240,   269,   158,   158,   158,   158,   205,   209,
     211,   158,   158,    76,    78,   149,   150,   151,   303,   304,
     155,   175,   179,   175,   268,   191,    36,   132,   156,   268,
     299,   300,   301,   302,    78,   283,   303,    78,   303,   161,
     294,   155,   158,   234,   126,   207,    71,    72,    71,    72,
      85,     8,     9,    10,    29,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    55,    67,
     160,    36,   275,   275,   152,   164,   152,   131,   161,   164,
     234,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    57,    58,   275,    13,   268,
     299,   266,   152,   234,   284,   131,   152,   161,   164,   268,
     288,   268,   160,   163,    88,   268,   263,   264,   268,   268,
     190,   268,   160,   160,   160,    15,   160,   163,   160,   191,
     160,   175,   188,    96,   155,   155,   175,   181,   186,   160,
     160,   163,   160,   163,    15,   160,   163,   198,   199,   293,
     268,   307,   308,   268,   159,    75,    75,    75,   299,   299,
     131,   164,   149,   304,    80,   268,   293,    78,   149,   304,
     175,   160,   178,   161,   159,   125,   162,   192,   193,   200,
     203,   208,   210,   293,   158,   268,    13,   165,   163,   166,
     167,   268,    75,   156,   159,   235,   236,   268,   204,   158,
     193,   158,    30,   160,   268,   268,   268,    30,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   281,   268,   158,    75,   272,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    55,    68,    69,    71,
      72,    75,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   126,   127,   128,   129,   130,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     153,   154,   161,   171,   172,   173,   294,   297,   288,   173,
     294,   297,    75,   161,   294,   298,   268,   288,    36,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   159,   165,   284,   294,   298,   294,
     268,   288,   159,   159,   159,   262,   158,   159,   160,   163,
      96,   159,   159,   268,   260,   162,   155,    75,   161,   175,
     155,   160,   160,   155,   175,   189,   238,   268,   240,   163,
     183,   163,   183,   159,   160,   129,   212,   272,   129,   213,
     159,   159,    75,    49,    75,    76,    81,   305,   162,   164,
     162,   162,   161,   174,   158,   299,    36,   132,   268,    15,
     300,   162,   268,   163,   183,    75,   268,   268,   191,   268,
      30,    29,   133,   134,   176,   227,   228,   229,   230,   231,
     232,   272,   158,   268,   234,   165,   234,   268,   234,   162,
     165,   293,   212,   162,   165,    30,   193,   268,    30,   193,
     222,   263,   268,    36,   132,   164,   215,   293,   194,    30,
     161,   219,   272,   195,   161,   180,   184,   187,   188,   155,
     161,   199,   159,   308,   159,   176,   130,   214,   161,   176,
     243,   272,    15,    81,   165,   268,   174,   162,   159,   159,
     293,   158,   268,   236,   159,   212,   159,   159,    85,   268,
     232,   159,   163,    36,   201,   158,   227,   162,   162,   214,
     191,   159,   191,   160,   293,   158,   299,    13,   159,    30,
     193,   218,   160,   220,   160,   220,   109,   110,   197,   184,
     188,   163,   183,   161,   185,   188,   160,   243,   272,   241,
     163,   161,   268,   165,   162,   160,   299,   214,   193,    30,
     160,    30,   233,   229,   156,   202,   227,   159,   272,   160,
      89,   263,   299,   165,   215,    30,   193,   217,   191,   220,
      98,    99,   100,   220,   162,   158,   161,   183,   187,   162,
     185,   163,   183,   161,   112,   115,   116,   117,   118,   119,
     120,   121,   162,   242,   252,   253,   254,   255,   176,   241,
     162,   159,   272,   191,   231,   272,    76,   159,   112,   276,
     161,   160,   159,   159,   159,   191,    95,    98,   160,   268,
      30,   160,   221,   162,   176,   196,   191,   162,   183,   188,
     162,   241,   243,   230,   106,   271,   255,   162,   161,    13,
      15,   233,   158,   233,   241,    30,   193,   216,   217,    93,
     160,   160,   221,   191,    34,    76,   162,   162,   162,   160,
     161,   244,    76,   256,   257,   173,   258,   259,   275,   241,
     273,   268,   273,    36,    76,   277,   278,   273,   162,   191,
     160,   191,   176,   159,    75,   153,   162,   173,   176,   245,
     246,   247,   248,   249,   250,    15,   272,   160,   163,    15,
     160,   163,   173,   162,   274,   161,    76,   159,   163,   161,
      91,   161,   152,   162,   246,   160,   160,    96,   113,   268,
     257,   268,   259,   272,   268,   191,   278,   191,   160,   191,
     173,    75,   171,   255,   243,   272,   272,   158,   273,   162,
     162,   162,   173,   227,   273,   273,   159,   233,   273,   160,
     161,   251,   191,   273,   162
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   169,   170,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   172,   172,   172,   172,   172,   172,   172,   173,   173,
     174,   174,   175,   175,   176,   176,   176,   177,   177,   177,
     177,   177,   177,   177,   178,   177,   179,   177,   177,   177,
     177,   177,   177,   180,   180,   181,   181,   182,   182,   183,
     183,   184,   184,   185,   185,   186,   186,   187,   187,   188,
     188,   189,   189,   190,   190,   191,   191,   192,   192,   192,
     192,   192,   192,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   193,
     193,   194,   193,   193,   193,   193,   193,   193,   195,   195,
     196,   196,   197,   197,   198,   198,   199,   200,   201,   201,
     202,   202,   204,   203,   205,   203,   206,   206,   207,   207,
     209,   208,   211,   210,   212,   212,   213,   213,   214,   214,
     215,   215,   215,   215,   216,   216,   217,   217,   218,   218,
     219,   219,   219,   219,   220,   220,   220,   221,   221,   222,
     222,   223,   223,   224,   224,   225,   225,   226,   226,   227,
     227,   228,   228,   229,   229,   230,   230,   231,   231,   232,
     232,   232,   233,   233,   234,   234,   235,   235,   236,   236,
     237,   237,   238,   239,   239,   240,   240,   241,   241,   242,
     242,   242,   242,   243,   243,   244,   244,   244,   245,   245,
     246,   246,   247,   248,   248,   248,   248,   249,   249,   250,
     251,   251,   252,   252,   253,   253,   254,   254,   255,   255,
     255,   255,   255,   255,   256,   256,   257,   257,   258,   258,
     259,   260,   261,   261,   262,   263,   263,   264,   264,   266,
     265,   267,   267,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   269,   269,   270,   271,   272,   273,   274,   275,   275,
     276,   276,   277,   277,   278,   278,   279,   279,   279,   279,
     280,   280,   281,   281,   282,   282,   283,   283,   283,   284,
     284,   285,   285,   285,   286,   286,   286,   286,   286,   286,
     286,   286,   286,   286,   286,   286,   286,   286,   286,   286,
     287,   287,   287,   288,   288,   289,   290,   290,   290,   291,
     291,   291,   292,   292,   292,   292,   292,   292,   293,   293,
     293,   294,   294,   294,   295,   295,   296,   296,   296,   296,
     296,   296,   297,   297,   297,   298,   298,   298,   299,   300,
     300,   301,   301,   302,   302,   302,   302,   302,   302,   302,
     303,   303,   303,   303,   304,   304,   304,   304,   304,   304,
     304,   305,   305,   305,   305,   306,   306,   306,   306,   306,
     306,   306,   307,   307,   308
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     0,     1,     3,     1,     3,     2,     1,     1,     1,
       1,     1,     4,     3,     0,     6,     0,     5,     3,     4,
       3,     4,     3,     1,     1,     6,     7,     6,     7,     0,
       1,     3,     1,     3,     1,     3,     1,     1,     2,     1,
       3,     1,     2,     3,     1,     2,     0,     1,     1,     1,
       1,     1,     4,     3,     1,     1,     5,     7,     9,     5,
       3,     3,     3,     3,     3,     3,     1,     2,     6,     7,
       9,     0,     6,     1,     6,     3,     3,     2,     0,     9,
       1,     3,     0,     4,     1,     3,     1,    13,     0,     1,
       0,     1,     0,    10,     0,     9,     1,     2,     1,     1,
       0,     7,     0,     8,     0,     2,     0,     2,     0,     2,
       1,     2,     4,     3,     1,     4,     1,     4,     1,     4,
       3,     4,     4,     5,     0,     5,     4,     1,     1,     1,
       4,     5,     6,     1,     3,     6,     7,     3,     6,     1,
       0,     1,     3,     4,     6,     0,     1,     1,     2,     1,
       1,     1,     0,     2,     2,     4,     1,     3,     1,     2,
       3,     1,     1,     3,     1,     1,     3,     2,     0,     4,
       4,     3,    12,     1,     3,     1,     2,     3,     1,     2,
       2,     2,     3,     3,     3,     4,     3,     1,     1,     3,
       1,     3,     1,     1,     0,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     3,     1,     2,     4,     3,     1,
       4,     4,     3,     1,     1,     0,     1,     3,     1,     0,
       9,     3,     2,     1,     6,     5,     3,     4,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     5,
       4,     3,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     3,     2,     1,     2,     4,     2,     1,
       2,    13,    12,     1,     1,     0,     0,     0,     0,     1,
       0,     4,     3,     1,     1,     2,     2,     4,     4,     2,
       1,     1,     1,     1,     0,     3,     0,     1,     1,     0,
       1,     4,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     3,     3,     1,     1,
       1,     3,     3,     0,     1,     1,     1,     3,     1,     1,
       3,     1,     1,     4,     4,     4,     4,     1,     1,     1,
       3,     1,     4,     2,     3,     3,     1,     4,     4,     3,
       3,     3,     1,     3,     1,     1,     3,     1,     1,     0,
       1,     3,     1,     3,     1,     4,     2,     2,     6,     4,
       2,     2,     1,     2,     1,     4,     3,     3,     3,     6,
       3,     1,     1,     2,     1,     5,     4,     2,     2,     4,
       2,     2,     1,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 73: /* "integer number (T_LNUMBER)"  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 74: /* "floating-point number (T_DNUMBER)"  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 75: /* "identifier (T_STRING)"  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 76: /* "variable (T_VARIABLE)"  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 77: /* T_INLINE_HTML  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 78: /* "quoted-string and whitespace (T_ENCAPSED_AND_WHITESPACE)"  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 79: /* "quoted-string (T_CONSTANT_ENCAPSED_STRING)"  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 80: /* "variable name (T_STRING_VARNAME)"  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 81: /* "number (T_NUM_STRING)"  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 173: /* identifier  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 174: /* top_statement_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 175: /* namespace_name  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 176: /* name  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 177: /* top_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 181: /* group_use_declaration  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 182: /* mixed_group_use_declaration  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 184: /* inline_use_declarations  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 185: /* unprefixed_use_declarations  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 186: /* use_declarations  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 187: /* inline_use_declaration  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 188: /* unprefixed_use_declaration  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 189: /* use_declaration  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 190: /* const_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 191: /* inner_statement_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 192: /* inner_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 193: /* statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 195: /* catch_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 196: /* catch_name_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 197: /* finally_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 198: /* unset_variables  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 199: /* unset_variable  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 200: /* function_declaration_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 203: /* class_declaration_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 208: /* trait_declaration_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 210: /* interface_declaration_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 212: /* extends_from  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 213: /* interface_extends_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 214: /* implements_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 215: /* foreach_variable  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 216: /* for_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 217: /* foreach_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 218: /* declare_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 219: /* switch_case_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 220: /* case_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 222: /* while_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 223: /* if_stmt_without_else  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 224: /* if_stmt  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 225: /* alt_if_stmt_without_else  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 226: /* alt_if_stmt  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 227: /* parameter_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 228: /* non_empty_parameter_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 229: /* parameter  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 230: /* optional_type  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 231: /* type_expr  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 232: /* type  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 233: /* return_type  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 234: /* argument_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 235: /* non_empty_argument_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 236: /* argument  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 237: /* global_var_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 238: /* global_var  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 239: /* static_var_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 240: /* static_var  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 241: /* class_statement_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 242: /* class_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 243: /* name_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 244: /* trait_adaptations  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 245: /* trait_adaptation_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 246: /* trait_adaptation  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 247: /* trait_precedence  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 248: /* trait_alias  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 249: /* trait_method_reference  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 250: /* absolute_trait_method_reference  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 251: /* method_body  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 256: /* property_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 257: /* property  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 258: /* class_const_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 259: /* class_const_decl  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 260: /* const_decl  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 261: /* echo_expr_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 262: /* echo_expr  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 263: /* for_exprs  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 264: /* non_empty_for_exprs  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 265: /* anonymous_class  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 267: /* new_expr  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 268: /* expr  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 269: /* inline_function  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 272: /* backup_doc_comment  */

      { if (((*yyvaluep).str)) zend_string_release_ex(((*yyvaluep).str), 0); }

        break;

    case 276: /* lexical_vars  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 277: /* lexical_var_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 278: /* lexical_var  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 279: /* function_call  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 280: /* class_name  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 281: /* class_name_reference  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 282: /* exit_expr  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 283: /* backticks_expr  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 284: /* ctor_arguments  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 285: /* dereferencable_scalar  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 286: /* scalar  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 287: /* constant  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 288: /* optional_expr  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 289: /* variable_class_name  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 290: /* dereferencable  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 291: /* callable_expr  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 292: /* callable_variable  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 293: /* variable  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 294: /* simple_variable  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 295: /* static_member  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 296: /* new_variable  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 297: /* member_name  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 298: /* property_name  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 299: /* array_pair_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 300: /* possible_array_pair  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 301: /* non_empty_array_pair_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 302: /* array_pair  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 303: /* encaps_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 304: /* encaps_var  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 305: /* encaps_var_offset  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 306: /* internal_functions_in_yacc  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 307: /* isset_variables  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 308: /* isset_variable  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:

    { CG(ast) = (yyvsp[0].ast); }

    break;

  case 78:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 79:

    {
			zval zv;
			zend_lex_tstring(&zv);
			(yyval.ast) = zend_ast_create_zval(&zv);
		}

    break;

  case 80:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 81:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_STMT_LIST); }

    break;

  case 82:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 83:

    { (yyval.ast) = zend_ast_append_str((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 84:

    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_NAME_NOT_FQ; }

    break;

  case 85:

    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_NAME_RELATIVE; }

    break;

  case 86:

    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_NAME_FQ; }

    break;

  case 87:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 88:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 89:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 90:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 91:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 92:

    { (yyval.ast) = zend_ast_create(ZEND_AST_HALT_COMPILER,
			      zend_ast_create_zval_from_long(zend_get_scanned_file_offset()));
			  zend_stop_lexing(); }

    break;

  case 93:

    { (yyval.ast) = zend_ast_create(ZEND_AST_NAMESPACE, (yyvsp[-1].ast), NULL);
			  RESET_DOC_COMMENT(); }

    break;

  case 94:

    { RESET_DOC_COMMENT(); }

    break;

  case 95:

    { (yyval.ast) = zend_ast_create(ZEND_AST_NAMESPACE, (yyvsp[-4].ast), (yyvsp[-1].ast)); }

    break;

  case 96:

    { RESET_DOC_COMMENT(); }

    break;

  case 97:

    { (yyval.ast) = zend_ast_create(ZEND_AST_NAMESPACE, NULL, (yyvsp[-1].ast)); }

    break;

  case 98:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 99:

    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = (yyvsp[-2].num); }

    break;

  case 100:

    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_SYMBOL_CLASS; }

    break;

  case 101:

    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = (yyvsp[-2].num); }

    break;

  case 102:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 103:

    { (yyval.num) = ZEND_SYMBOL_FUNCTION; }

    break;

  case 104:

    { (yyval.num) = ZEND_SYMBOL_CONST; }

    break;

  case 105:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[-5].ast), (yyvsp[-2].ast)); }

    break;

  case 106:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[-5].ast), (yyvsp[-2].ast)); }

    break;

  case 107:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[-5].ast), (yyvsp[-2].ast));}

    break;

  case 108:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[-5].ast), (yyvsp[-2].ast)); }

    break;

  case 111:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 112:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_USE, (yyvsp[0].ast)); }

    break;

  case 113:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 114:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_USE, (yyvsp[0].ast)); }

    break;

  case 115:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 116:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_USE, (yyvsp[0].ast)); }

    break;

  case 117:

    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_SYMBOL_CLASS; }

    break;

  case 118:

    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = (yyvsp[-1].num); }

    break;

  case 119:

    { (yyval.ast) = zend_ast_create(ZEND_AST_USE_ELEM, (yyvsp[0].ast), NULL); }

    break;

  case 120:

    { (yyval.ast) = zend_ast_create(ZEND_AST_USE_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 121:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 122:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 123:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 124:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_CONST_DECL, (yyvsp[0].ast)); }

    break;

  case 125:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 126:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_STMT_LIST); }

    break;

  case 127:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 128:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 129:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 130:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 131:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 132:

    { (yyval.ast) = NULL; zend_throw_exception(zend_ce_compile_error,
			      "__HALT_COMPILER() can only be used from the outermost scope", 0); YYERROR; }

    break;

  case 133:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 134:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 135:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 136:

    { (yyval.ast) = zend_ast_create(ZEND_AST_WHILE, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 137:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DO_WHILE, (yyvsp[-5].ast), (yyvsp[-2].ast)); }

    break;

  case 138:

    { (yyval.ast) = zend_ast_create(ZEND_AST_FOR, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 139:

    { (yyval.ast) = zend_ast_create(ZEND_AST_SWITCH, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 140:

    { (yyval.ast) = zend_ast_create(ZEND_AST_BREAK, (yyvsp[-1].ast)); }

    break;

  case 141:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CONTINUE, (yyvsp[-1].ast)); }

    break;

  case 142:

    { (yyval.ast) = zend_ast_create(ZEND_AST_RETURN, (yyvsp[-1].ast)); }

    break;

  case 143:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 144:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 145:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 146:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ECHO, (yyvsp[0].ast)); }

    break;

  case 147:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 148:

    { (yyval.ast) = (yyvsp[-3].ast); }

    break;

  case 149:

    { (yyval.ast) = zend_ast_create(ZEND_AST_FOREACH, (yyvsp[-4].ast), (yyvsp[-2].ast), NULL, (yyvsp[0].ast)); }

    break;

  case 150:

    { (yyval.ast) = zend_ast_create(ZEND_AST_FOREACH, (yyvsp[-6].ast), (yyvsp[-2].ast), (yyvsp[-4].ast), (yyvsp[0].ast)); }

    break;

  case 151:

    { if (!zend_handle_encoding_declaration((yyvsp[-1].ast))) { YYERROR; } }

    break;

  case 152:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DECLARE, (yyvsp[-3].ast), (yyvsp[0].ast)); }

    break;

  case 153:

    { (yyval.ast) = NULL; }

    break;

  case 154:

    { (yyval.ast) = zend_ast_create(ZEND_AST_TRY, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 155:

    { (yyval.ast) = zend_ast_create(ZEND_AST_THROW, (yyvsp[-1].ast)); }

    break;

  case 156:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GOTO, (yyvsp[-1].ast)); }

    break;

  case 157:

    { (yyval.ast) = zend_ast_create(ZEND_AST_LABEL, (yyvsp[-1].ast)); }

    break;

  case 158:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_CATCH_LIST); }

    break;

  case 159:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-8].ast), zend_ast_create(ZEND_AST_CATCH, (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast))); }

    break;

  case 160:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_NAME_LIST, (yyvsp[0].ast)); }

    break;

  case 161:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 162:

    { (yyval.ast) = NULL; }

    break;

  case 163:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 164:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }

    break;

  case 165:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 166:

    { (yyval.ast) = zend_ast_create(ZEND_AST_UNSET, (yyvsp[0].ast)); }

    break;

  case 167:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_FUNC_DECL, (yyvsp[-11].num) | (yyvsp[0].num), (yyvsp[-12].num), (yyvsp[-9].str),
		      zend_ast_get_str((yyvsp[-10].ast)), (yyvsp[-7].ast), NULL, (yyvsp[-2].ast), (yyvsp[-5].ast)); CG(extra_fn_flags) = (yyvsp[-4].num); }

    break;

  case 168:

    { (yyval.num) = 0; }

    break;

  case 169:

    { (yyval.num) = ZEND_PARAM_REF; }

    break;

  case 170:

    { (yyval.num) = 0; }

    break;

  case 171:

    { (yyval.num) = ZEND_PARAM_VARIADIC; }

    break;

  case 172:

    { (yyval.num) = CG(zend_lineno); }

    break;

  case 173:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, (yyvsp[-9].num), (yyvsp[-7].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-6].ast)), (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast), NULL); }

    break;

  case 174:

    { (yyval.num) = CG(zend_lineno); }

    break;

  case 175:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, 0, (yyvsp[-7].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-6].ast)), (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast), NULL); }

    break;

  case 176:

    { (yyval.num) = (yyvsp[0].num); }

    break;

  case 177:

    { (yyval.num) = zend_add_class_modifier((yyvsp[-1].num), (yyvsp[0].num)); if (!(yyval.num)) { YYERROR; } }

    break;

  case 178:

    { (yyval.num) = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; }

    break;

  case 179:

    { (yyval.num) = ZEND_ACC_FINAL; }

    break;

  case 180:

    { (yyval.num) = CG(zend_lineno); }

    break;

  case 181:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, ZEND_ACC_TRAIT, (yyvsp[-5].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-4].ast)), NULL, NULL, (yyvsp[-1].ast), NULL); }

    break;

  case 182:

    { (yyval.num) = CG(zend_lineno); }

    break;

  case 183:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, ZEND_ACC_INTERFACE, (yyvsp[-6].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-5].ast)), NULL, (yyvsp[-4].ast), (yyvsp[-1].ast), NULL); }

    break;

  case 184:

    { (yyval.ast) = NULL; }

    break;

  case 185:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 186:

    { (yyval.ast) = NULL; }

    break;

  case 187:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 188:

    { (yyval.ast) = NULL; }

    break;

  case 189:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 190:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 191:

    { (yyval.ast) = zend_ast_create(ZEND_AST_REF, (yyvsp[0].ast)); }

    break;

  case 192:

    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_ARRAY_SYNTAX_LIST; }

    break;

  case 193:

    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_ARRAY_SYNTAX_SHORT; }

    break;

  case 194:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 195:

    { (yyval.ast) = (yyvsp[-2].ast); }

    break;

  case 196:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 197:

    { (yyval.ast) = (yyvsp[-2].ast); }

    break;

  case 198:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 199:

    { (yyval.ast) = (yyvsp[-2].ast); }

    break;

  case 200:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 201:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 202:

    { (yyval.ast) = (yyvsp[-2].ast); }

    break;

  case 203:

    { (yyval.ast) = (yyvsp[-2].ast); }

    break;

  case 204:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_SWITCH_LIST); }

    break;

  case 205:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-4].ast), zend_ast_create(ZEND_AST_SWITCH_CASE, (yyvsp[-2].ast), (yyvsp[0].ast))); }

    break;

  case 206:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-3].ast), zend_ast_create(ZEND_AST_SWITCH_CASE, NULL, (yyvsp[0].ast))); }

    break;

  case 209:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 210:

    { (yyval.ast) = (yyvsp[-2].ast); }

    break;

  case 211:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_IF,
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast))); }

    break;

  case 212:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-5].ast),
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast))); }

    break;

  case 213:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 214:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), zend_ast_create(ZEND_AST_IF_ELEM, NULL, (yyvsp[0].ast))); }

    break;

  case 215:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_IF,
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-3].ast), (yyvsp[0].ast))); }

    break;

  case 216:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-6].ast),
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-3].ast), (yyvsp[0].ast))); }

    break;

  case 217:

    { (yyval.ast) = (yyvsp[-2].ast); }

    break;

  case 218:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-5].ast),
			      zend_ast_create(ZEND_AST_IF_ELEM, NULL, (yyvsp[-2].ast))); }

    break;

  case 219:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 220:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_PARAM_LIST); }

    break;

  case 221:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_PARAM_LIST, (yyvsp[0].ast)); }

    break;

  case 222:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 223:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_PARAM, (yyvsp[-2].num) | (yyvsp[-1].num), (yyvsp[-3].ast), (yyvsp[0].ast), NULL); }

    break;

  case 224:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_PARAM, (yyvsp[-4].num) | (yyvsp[-3].num), (yyvsp[-5].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 225:

    { (yyval.ast) = NULL; }

    break;

  case 226:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 227:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 228:

    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr |= ZEND_TYPE_NULLABLE; }

    break;

  case 229:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TYPE, IS_ARRAY); }

    break;

  case 230:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TYPE, IS_CALLABLE); }

    break;

  case 231:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 232:

    { (yyval.ast) = NULL; }

    break;

  case 233:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 234:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_ARG_LIST); }

    break;

  case 235:

    { (yyval.ast) = (yyvsp[-2].ast); }

    break;

  case 236:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ARG_LIST, (yyvsp[0].ast)); }

    break;

  case 237:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 238:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 239:

    { (yyval.ast) = zend_ast_create(ZEND_AST_UNPACK, (yyvsp[0].ast)); }

    break;

  case 240:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 241:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }

    break;

  case 242:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GLOBAL, zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast))); }

    break;

  case 243:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 244:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }

    break;

  case 245:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC, (yyvsp[0].ast), NULL); }

    break;

  case 246:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 247:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 248:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_STMT_LIST); }

    break;

  case 249:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP_GROUP, (yyvsp[-2].ast), (yyvsp[-1].ast));
			  (yyval.ast)->attr = (yyvsp[-3].num); }

    break;

  case 250:

    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = (yyvsp[-3].num); }

    break;

  case 251:

    { (yyval.ast) = zend_ast_create(ZEND_AST_USE_TRAIT, (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 252:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_METHOD, (yyvsp[-9].num) | (yyvsp[-11].num) | (yyvsp[0].num), (yyvsp[-10].num), (yyvsp[-7].str),
				  zend_ast_get_str((yyvsp[-8].ast)), (yyvsp[-5].ast), NULL, (yyvsp[-1].ast), (yyvsp[-3].ast)); CG(extra_fn_flags) = (yyvsp[-2].num); }

    break;

  case 253:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_NAME_LIST, (yyvsp[0].ast)); }

    break;

  case 254:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 255:

    { (yyval.ast) = NULL; }

    break;

  case 256:

    { (yyval.ast) = NULL; }

    break;

  case 257:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 258:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_TRAIT_ADAPTATIONS, (yyvsp[0].ast)); }

    break;

  case 259:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 260:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 261:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 262:

    { (yyval.ast) = zend_ast_create(ZEND_AST_TRAIT_PRECEDENCE, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 263:

    { (yyval.ast) = zend_ast_create(ZEND_AST_TRAIT_ALIAS, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 264:

    { zval zv; zend_lex_tstring(&zv); (yyval.ast) = zend_ast_create(ZEND_AST_TRAIT_ALIAS, (yyvsp[-2].ast), zend_ast_create_zval(&zv)); }

    break;

  case 265:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TRAIT_ALIAS, (yyvsp[-1].num), (yyvsp[-3].ast), (yyvsp[0].ast)); }

    break;

  case 266:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TRAIT_ALIAS, (yyvsp[0].num), (yyvsp[-2].ast), NULL); }

    break;

  case 267:

    { (yyval.ast) = zend_ast_create(ZEND_AST_METHOD_REFERENCE, NULL, (yyvsp[0].ast)); }

    break;

  case 268:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 269:

    { (yyval.ast) = zend_ast_create(ZEND_AST_METHOD_REFERENCE, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 270:

    { (yyval.ast) = NULL; }

    break;

  case 271:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 272:

    { (yyval.num) = (yyvsp[0].num); }

    break;

  case 273:

    { (yyval.num) = ZEND_ACC_PUBLIC; }

    break;

  case 274:

    { (yyval.num) = ZEND_ACC_PUBLIC; }

    break;

  case 275:

    { (yyval.num) = (yyvsp[0].num); if (!((yyval.num) & ZEND_ACC_PPP_MASK)) { (yyval.num) |= ZEND_ACC_PUBLIC; } }

    break;

  case 276:

    { (yyval.num) = (yyvsp[0].num); }

    break;

  case 277:

    { (yyval.num) = zend_add_member_modifier((yyvsp[-1].num), (yyvsp[0].num)); if (!(yyval.num)) { YYERROR; } }

    break;

  case 278:

    { (yyval.num) = ZEND_ACC_PUBLIC; }

    break;

  case 279:

    { (yyval.num) = ZEND_ACC_PROTECTED; }

    break;

  case 280:

    { (yyval.num) = ZEND_ACC_PRIVATE; }

    break;

  case 281:

    { (yyval.num) = ZEND_ACC_STATIC; }

    break;

  case 282:

    { (yyval.num) = ZEND_ACC_ABSTRACT; }

    break;

  case 283:

    { (yyval.num) = ZEND_ACC_FINAL; }

    break;

  case 284:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 285:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_PROP_DECL, (yyvsp[0].ast)); }

    break;

  case 286:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP_ELEM, (yyvsp[-1].ast), NULL, ((yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL)); }

    break;

  case 287:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP_ELEM, (yyvsp[-3].ast), (yyvsp[-1].ast), ((yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL)); }

    break;

  case 288:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 289:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_CLASS_CONST_DECL, (yyvsp[0].ast)); }

    break;

  case 290:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CONST_ELEM, (yyvsp[-3].ast), (yyvsp[-1].ast), ((yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL)); }

    break;

  case 291:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CONST_ELEM, (yyvsp[-3].ast), (yyvsp[-1].ast), ((yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL)); }

    break;

  case 292:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 293:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }

    break;

  case 294:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ECHO, (yyvsp[0].ast)); }

    break;

  case 295:

    { (yyval.ast) = NULL; }

    break;

  case 296:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 297:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 298:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_EXPR_LIST, (yyvsp[0].ast)); }

    break;

  case 299:

    { (yyval.num) = CG(zend_lineno); }

    break;

  case 300:

    {
			zend_ast *decl = zend_ast_create_decl(
				ZEND_AST_CLASS, ZEND_ACC_ANON_CLASS, (yyvsp[-7].num), (yyvsp[-3].str), NULL,
				(yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast), NULL);
			(yyval.ast) = zend_ast_create(ZEND_AST_NEW, decl, (yyvsp[-6].ast));
		}

    break;

  case 301:

    { (yyval.ast) = zend_ast_create(ZEND_AST_NEW, (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 302:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 303:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 304:

    { (yyvsp[-3].ast)->attr = ZEND_ARRAY_SYNTAX_LIST; (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN, (yyvsp[-3].ast), (yyvsp[0].ast)); }

    break;

  case 305:

    { (yyvsp[-3].ast)->attr = ZEND_ARRAY_SYNTAX_SHORT; (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN, (yyvsp[-3].ast), (yyvsp[0].ast)); }

    break;

  case 306:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 307:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN_REF, (yyvsp[-3].ast), (yyvsp[0].ast)); }

    break;

  case 308:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CLONE, (yyvsp[0].ast)); }

    break;

  case 309:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_ADD, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 310:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_SUB, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 311:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_MUL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 312:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_POW, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 313:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_DIV, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 314:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_CONCAT, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 315:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_MOD, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 316:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_BW_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 317:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_BW_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 318:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_BW_XOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 319:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_SL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 320:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_SR, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 321:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN_COALESCE, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 322:

    { (yyval.ast) = zend_ast_create(ZEND_AST_POST_INC, (yyvsp[-1].ast)); }

    break;

  case 323:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PRE_INC, (yyvsp[0].ast)); }

    break;

  case 324:

    { (yyval.ast) = zend_ast_create(ZEND_AST_POST_DEC, (yyvsp[-1].ast)); }

    break;

  case 325:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PRE_DEC, (yyvsp[0].ast)); }

    break;

  case 326:

    { (yyval.ast) = zend_ast_create(ZEND_AST_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 327:

    { (yyval.ast) = zend_ast_create(ZEND_AST_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 328:

    { (yyval.ast) = zend_ast_create(ZEND_AST_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 329:

    { (yyval.ast) = zend_ast_create(ZEND_AST_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 330:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BOOL_XOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 331:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 332:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 333:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_XOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 334:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_CONCAT, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 335:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_ADD, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 336:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_SUB, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 337:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_MUL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 338:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_POW, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 339:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_DIV, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 340:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_MOD, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 341:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_SL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 342:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_SR, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 343:

    { (yyval.ast) = zend_ast_create(ZEND_AST_UNARY_PLUS, (yyvsp[0].ast)); }

    break;

  case 344:

    { (yyval.ast) = zend_ast_create(ZEND_AST_UNARY_MINUS, (yyvsp[0].ast)); }

    break;

  case 345:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_UNARY_OP, ZEND_BOOL_NOT, (yyvsp[0].ast)); }

    break;

  case 346:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_UNARY_OP, ZEND_BW_NOT, (yyvsp[0].ast)); }

    break;

  case 347:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_IDENTICAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 348:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_NOT_IDENTICAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 349:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 350:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_NOT_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 351:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_SMALLER, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 352:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_SMALLER_OR_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 353:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GREATER, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 354:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GREATER_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 355:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_SPACESHIP, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 356:

    { (yyval.ast) = zend_ast_create(ZEND_AST_INSTANCEOF, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 357:

    {
			(yyval.ast) = (yyvsp[-1].ast);
			if ((yyval.ast)->kind == ZEND_AST_CONDITIONAL) (yyval.ast)->attr = ZEND_PARENTHESIZED_CONDITIONAL;
			if ((yyval.ast)->kind == ZEND_AST_BINARY_OP && (yyval.ast)->attr == ZEND_CONCAT) (yyval.ast)->attr = ZEND_PARENTHESIZED_CONCAT;
		}

    break;

  case 358:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 359:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CONDITIONAL, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 360:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CONDITIONAL, (yyvsp[-3].ast), NULL, (yyvsp[0].ast)); }

    break;

  case 361:

    { (yyval.ast) = zend_ast_create(ZEND_AST_COALESCE, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 362:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 363:

    { (yyval.ast) = zend_ast_create_cast(IS_LONG, (yyvsp[0].ast)); }

    break;

  case 364:

    { (yyval.ast) = zend_ast_create_cast(IS_DOUBLE, (yyvsp[0].ast)); }

    break;

  case 365:

    { (yyval.ast) = zend_ast_create_cast(IS_STRING, (yyvsp[0].ast)); }

    break;

  case 366:

    { (yyval.ast) = zend_ast_create_cast(IS_ARRAY, (yyvsp[0].ast)); }

    break;

  case 367:

    { (yyval.ast) = zend_ast_create_cast(IS_OBJECT, (yyvsp[0].ast)); }

    break;

  case 368:

    { (yyval.ast) = zend_ast_create_cast(_IS_BOOL, (yyvsp[0].ast)); }

    break;

  case 369:

    { (yyval.ast) = zend_ast_create_cast(IS_NULL, (yyvsp[0].ast)); }

    break;

  case 370:

    { (yyval.ast) = zend_ast_create(ZEND_AST_EXIT, (yyvsp[0].ast)); }

    break;

  case 371:

    { (yyval.ast) = zend_ast_create(ZEND_AST_SILENCE, (yyvsp[0].ast)); }

    break;

  case 372:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 373:

    { (yyval.ast) = zend_ast_create(ZEND_AST_SHELL_EXEC, (yyvsp[-1].ast)); }

    break;

  case 374:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PRINT, (yyvsp[0].ast)); }

    break;

  case 375:

    { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD, NULL, NULL); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; }

    break;

  case 376:

    { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD, (yyvsp[0].ast), NULL); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; }

    break;

  case 377:

    { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD, (yyvsp[0].ast), (yyvsp[-2].ast)); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; }

    break;

  case 378:

    { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD_FROM, (yyvsp[0].ast)); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; }

    break;

  case 379:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 380:

    { (yyval.ast) = (yyvsp[0].ast); ((zend_ast_decl *) (yyval.ast))->flags |= ZEND_ACC_STATIC; }

    break;

  case 381:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLOSURE, (yyvsp[-11].num) | (yyvsp[0].num), (yyvsp[-12].num), (yyvsp[-10].str),
				  zend_string_init("{closure}", sizeof("{closure}") - 1, 0),
				  (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-2].ast), (yyvsp[-5].ast)); CG(extra_fn_flags) = (yyvsp[-4].num); }

    break;

  case 382:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_ARROW_FUNC, (yyvsp[-10].num) | (yyvsp[0].num), (yyvsp[-11].num), (yyvsp[-5].str),
				  zend_string_init("{closure}", sizeof("{closure}") - 1, 0), (yyvsp[-8].ast), NULL,
				  zend_ast_create(ZEND_AST_RETURN, (yyvsp[-1].ast)), (yyvsp[-6].ast));
				  ((zend_ast_decl *) (yyval.ast))->lex_pos = (yyvsp[-2].ptr);
				  CG(extra_fn_flags) = (yyvsp[-3].num); }

    break;

  case 383:

    { (yyval.num) = CG(zend_lineno); }

    break;

  case 384:

    { (yyval.num) = CG(zend_lineno); }

    break;

  case 385:

    { (yyval.str) = CG(doc_comment); CG(doc_comment) = NULL; }

    break;

  case 386:

    { (yyval.num) = CG(extra_fn_flags); CG(extra_fn_flags) = 0; }

    break;

  case 387:

    { (yyval.ptr) = LANG_SCNG(yy_text); }

    break;

  case 388:

    { (yyval.num) = 0; }

    break;

  case 389:

    { (yyval.num) = ZEND_ACC_RETURN_REFERENCE; }

    break;

  case 390:

    { (yyval.ast) = NULL; }

    break;

  case 391:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 392:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 393:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_CLOSURE_USES, (yyvsp[0].ast)); }

    break;

  case 394:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 395:

    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_BIND_REF; }

    break;

  case 396:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CALL, (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 397:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_CALL, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 398:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_CALL, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 399:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CALL, (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 400:

    { zval zv; ZVAL_INTERNED_STR(&zv, ZSTR_KNOWN(ZEND_STR_STATIC));
			  (yyval.ast) = zend_ast_create_zval_ex(&zv, ZEND_NAME_NOT_FQ); }

    break;

  case 401:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 402:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 403:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 404:

    { (yyval.ast) = NULL; }

    break;

  case 405:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 406:

    { (yyval.ast) = zend_ast_create_zval_from_str(ZSTR_EMPTY_ALLOC()); }

    break;

  case 407:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 408:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 409:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_ARG_LIST); }

    break;

  case 410:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 411:

    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_ARRAY_SYNTAX_LONG; }

    break;

  case 412:

    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_ARRAY_SYNTAX_SHORT; }

    break;

  case 413:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 414:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 415:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 416:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_LINE); }

    break;

  case 417:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_FILE); }

    break;

  case 418:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_DIR); }

    break;

  case 419:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_TRAIT_C); }

    break;

  case 420:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_METHOD_C); }

    break;

  case 421:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_FUNC_C); }

    break;

  case 422:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_NS_C); }

    break;

  case 423:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_CLASS_C); }

    break;

  case 424:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 425:

    { (yyval.ast) = zend_ast_create_zval_from_str(ZSTR_EMPTY_ALLOC()); }

    break;

  case 426:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 427:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 428:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 429:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 430:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CONST, (yyvsp[0].ast)); }

    break;

  case 431:

    { (yyval.ast) = zend_ast_create_class_const_or_name((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 432:

    { (yyval.ast) = zend_ast_create_class_const_or_name((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 433:

    { (yyval.ast) = NULL; }

    break;

  case 434:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 435:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 436:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 437:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 438:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 439:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 440:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 441:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 442:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }

    break;

  case 443:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[-3].ast), (yyvsp[-1].ast)); }

    break;

  case 444:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[-3].ast), (yyvsp[-1].ast)); }

    break;

  case 445:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[-3].ast), (yyvsp[-1].ast)); }

    break;

  case 446:

    { (yyval.ast) = zend_ast_create(ZEND_AST_METHOD_CALL, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 447:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 448:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 449:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 450:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 451:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 452:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 453:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }

    break;

  case 454:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 455:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 456:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }

    break;

  case 457:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[-3].ast), (yyvsp[-1].ast)); }

    break;

  case 458:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[-3].ast), (yyvsp[-1].ast)); }

    break;

  case 459:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 460:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 461:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 462:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 463:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 464:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }

    break;

  case 465:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 466:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 467:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }

    break;

  case 468:

    { /* allow single trailing comma */ (yyval.ast) = zend_ast_list_rtrim((yyvsp[0].ast)); }

    break;

  case 469:

    { (yyval.ast) = NULL; }

    break;

  case 470:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 471:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 472:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ARRAY, (yyvsp[0].ast)); }

    break;

  case 473:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[0].ast), (yyvsp[-2].ast)); }

    break;

  case 474:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[0].ast), NULL); }

    break;

  case 475:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_ARRAY_ELEM, 1, (yyvsp[0].ast), (yyvsp[-3].ast)); }

    break;

  case 476:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_ARRAY_ELEM, 1, (yyvsp[0].ast), NULL); }

    break;

  case 477:

    { (yyval.ast) = zend_ast_create(ZEND_AST_UNPACK, (yyvsp[0].ast)); }

    break;

  case 478:

    { (yyvsp[-1].ast)->attr = ZEND_ARRAY_SYNTAX_LIST;
			  (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[-1].ast), (yyvsp[-5].ast)); }

    break;

  case 479:

    { (yyvsp[-1].ast)->attr = ZEND_ARRAY_SYNTAX_LIST;
			  (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[-1].ast), NULL); }

    break;

  case 480:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 481:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 482:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ENCAPS_LIST, (yyvsp[0].ast)); }

    break;

  case 483:

    { (yyval.ast) = zend_ast_create_list(2, ZEND_AST_ENCAPS_LIST, (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 484:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }

    break;

  case 485:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[-3].ast)), (yyvsp[-1].ast)); }

    break;

  case 486:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[-2].ast)), (yyvsp[0].ast)); }

    break;

  case 487:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[-1].ast)); }

    break;

  case 488:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[-1].ast)); }

    break;

  case 489:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[-4].ast)), (yyvsp[-2].ast)); }

    break;

  case 490:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 491:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 492:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 493:

    { (yyval.ast) = zend_negate_num_string((yyvsp[0].ast)); }

    break;

  case 494:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }

    break;

  case 495:

    { (yyval.ast) = (yyvsp[-2].ast); }

    break;

  case 496:

    { (yyval.ast) = zend_ast_create(ZEND_AST_EMPTY, (yyvsp[-1].ast)); }

    break;

  case 497:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_INCLUDE, (yyvsp[0].ast)); }

    break;

  case 498:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_INCLUDE_ONCE, (yyvsp[0].ast)); }

    break;

  case 499:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_EVAL, (yyvsp[-1].ast)); }

    break;

  case 500:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_REQUIRE, (yyvsp[0].ast)); }

    break;

  case 501:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_REQUIRE_ONCE, (yyvsp[0].ast)); }

    break;

  case 502:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 503:

    { (yyval.ast) = zend_ast_create(ZEND_AST_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 504:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ISSET, (yyvsp[0].ast)); }

    break;



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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}



/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T zend_yytnamerr(char *yyres, const char *yystr)
{
	/* CG(parse_error) states:
	 * 0 => yyres = NULL, yystr is the unexpected token
	 * 1 => yyres = NULL, yystr is one of the expected tokens
	 * 2 => yyres != NULL, yystr is the unexpected token
	 * 3 => yyres != NULL, yystr is one of the expected tokens
	 */
	if (yyres && CG(parse_error) < 2) {
		CG(parse_error) = 2;
	}

	if (CG(parse_error) % 2 == 0) {
		/* The unexpected token */
		char buffer[120];
		const unsigned char *end, *str, *tok1 = NULL, *tok2 = NULL;
		unsigned int len = 0, toklen = 0, yystr_len;

		CG(parse_error)++;

		if (LANG_SCNG(yy_text)[0] == 0 &&
			LANG_SCNG(yy_leng) == 1 &&
			memcmp(yystr, "\"end of file\"", sizeof("\"end of file\"") - 1) == 0) {
			if (yyres) {
				yystpcpy(yyres, "end of file");
			}
			return sizeof("end of file")-1;
		}

		str = LANG_SCNG(yy_text);
		end = memchr(str, '\n', LANG_SCNG(yy_leng));
		yystr_len = (unsigned int)yystrlen(yystr);

		if ((tok1 = memchr(yystr, '(', yystr_len)) != NULL
			&& (tok2 = zend_memrchr(yystr, ')', yystr_len)) != NULL) {
			toklen = (tok2 - tok1) + 1;
		} else {
			tok1 = tok2 = NULL;
			toklen = 0;
		}

		if (end == NULL) {
			len = LANG_SCNG(yy_leng) > 30 ? 30 : LANG_SCNG(yy_leng);
		} else {
			len = (end - str) > 30 ? 30 : (end - str);
		}
		if (yyres) {
			if (toklen) {
				snprintf(buffer, sizeof(buffer), "'%.*s' %.*s", len, str, toklen, tok1);
			} else {
				snprintf(buffer, sizeof(buffer), "'%.*s'", len, str);
			}
			yystpcpy(yyres, buffer);
		}
		return len + (toklen ? toklen + 1 : 0) + 2;
	}

	/* One of the expected tokens */
	if (!yyres) {
		return yystrlen(yystr) - (*yystr == '"' ? 2 : 0);
	}

	if (*yystr == '"') {
		YYSIZE_T yyn = 0;
		const char *yyp = yystr;

		for (; *++yyp != '"'; ++yyn) {
			yyres[yyn] = *yyp;
		}
		yyres[yyn] = '\0';
		return yyn;
	}
	yystpcpy(yyres, yystr);
	return strlen(yystr);
}
