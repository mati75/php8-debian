/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* "%code top" blocks.  */


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

#ifdef _MSC_VER
#define YYMALLOC malloc
#define YYFREE free
#endif


/* Substitute the type names.  */
#define YYSTYPE         ZENDSTYPE
/* Substitute the variable and function names.  */
#define yyparse         zendparse
#define yylex           zendlex
#define yyerror         zenderror
#define yydebug         zenddebug
#define yynerrs         zendnerrs


/* Copy the first part of user declarations.  */



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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "zend_language_parser.h".  */
#ifndef YY_ZEND_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED
# define YY_ZEND_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef ZENDDEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define ZENDDEBUG 1
#  else
#   define ZENDDEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define ZENDDEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined ZENDDEBUG */
#if ZENDDEBUG
extern int zenddebug;
#endif
/* "%code requires" blocks.  */


#include "zend_compile.h"



/* Token type.  */
#ifndef ZENDTOKENTYPE
# define ZENDTOKENTYPE
  enum zendtokentype
  {
    END = 0,
    T_THROW = 258,
    PREC_ARROW_FUNCTION = 259,
    T_INCLUDE = 260,
    T_INCLUDE_ONCE = 261,
    T_REQUIRE = 262,
    T_REQUIRE_ONCE = 263,
    T_LOGICAL_OR = 264,
    T_LOGICAL_XOR = 265,
    T_LOGICAL_AND = 266,
    T_PRINT = 267,
    T_YIELD = 268,
    T_DOUBLE_ARROW = 269,
    T_YIELD_FROM = 270,
    T_PLUS_EQUAL = 271,
    T_MINUS_EQUAL = 272,
    T_MUL_EQUAL = 273,
    T_DIV_EQUAL = 274,
    T_CONCAT_EQUAL = 275,
    T_MOD_EQUAL = 276,
    T_AND_EQUAL = 277,
    T_OR_EQUAL = 278,
    T_XOR_EQUAL = 279,
    T_SL_EQUAL = 280,
    T_SR_EQUAL = 281,
    T_POW_EQUAL = 282,
    T_COALESCE_EQUAL = 283,
    T_COALESCE = 284,
    T_BOOLEAN_OR = 285,
    T_BOOLEAN_AND = 286,
    T_IS_EQUAL = 287,
    T_IS_NOT_EQUAL = 288,
    T_IS_IDENTICAL = 289,
    T_IS_NOT_IDENTICAL = 290,
    T_SPACESHIP = 291,
    T_IS_SMALLER_OR_EQUAL = 292,
    T_IS_GREATER_OR_EQUAL = 293,
    T_SL = 294,
    T_SR = 295,
    T_INSTANCEOF = 296,
    T_INT_CAST = 297,
    T_DOUBLE_CAST = 298,
    T_STRING_CAST = 299,
    T_ARRAY_CAST = 300,
    T_OBJECT_CAST = 301,
    T_BOOL_CAST = 302,
    T_UNSET_CAST = 303,
    T_POW = 304,
    T_CLONE = 305,
    T_NOELSE = 306,
    T_ELSEIF = 307,
    T_ELSE = 308,
    T_LNUMBER = 309,
    T_DNUMBER = 310,
    T_STRING = 311,
    T_NAME_FULLY_QUALIFIED = 312,
    T_NAME_RELATIVE = 313,
    T_NAME_QUALIFIED = 314,
    T_VARIABLE = 315,
    T_INLINE_HTML = 316,
    T_ENCAPSED_AND_WHITESPACE = 317,
    T_CONSTANT_ENCAPSED_STRING = 318,
    T_STRING_VARNAME = 319,
    T_NUM_STRING = 320,
    T_EVAL = 321,
    T_NEW = 322,
    T_EXIT = 323,
    T_IF = 324,
    T_ENDIF = 325,
    T_ECHO = 326,
    T_DO = 327,
    T_WHILE = 328,
    T_ENDWHILE = 329,
    T_FOR = 330,
    T_ENDFOR = 331,
    T_FOREACH = 332,
    T_ENDFOREACH = 333,
    T_DECLARE = 334,
    T_ENDDECLARE = 335,
    T_AS = 336,
    T_SWITCH = 337,
    T_ENDSWITCH = 338,
    T_CASE = 339,
    T_DEFAULT = 340,
    T_MATCH = 341,
    T_BREAK = 342,
    T_CONTINUE = 343,
    T_GOTO = 344,
    T_FUNCTION = 345,
    T_FN = 346,
    T_CONST = 347,
    T_RETURN = 348,
    T_TRY = 349,
    T_CATCH = 350,
    T_FINALLY = 351,
    T_USE = 352,
    T_INSTEADOF = 353,
    T_GLOBAL = 354,
    T_STATIC = 355,
    T_ABSTRACT = 356,
    T_FINAL = 357,
    T_PRIVATE = 358,
    T_PROTECTED = 359,
    T_PUBLIC = 360,
    T_VAR = 361,
    T_UNSET = 362,
    T_ISSET = 363,
    T_EMPTY = 364,
    T_HALT_COMPILER = 365,
    T_CLASS = 366,
    T_TRAIT = 367,
    T_INTERFACE = 368,
    T_EXTENDS = 369,
    T_IMPLEMENTS = 370,
    T_NAMESPACE = 371,
    T_LIST = 372,
    T_ARRAY = 373,
    T_CALLABLE = 374,
    T_LINE = 375,
    T_FILE = 376,
    T_DIR = 377,
    T_CLASS_C = 378,
    T_TRAIT_C = 379,
    T_METHOD_C = 380,
    T_FUNC_C = 381,
    T_NS_C = 382,
    T_ATTRIBUTE = 383,
    T_INC = 384,
    T_DEC = 385,
    T_OBJECT_OPERATOR = 386,
    T_NULLSAFE_OBJECT_OPERATOR = 387,
    T_COMMENT = 388,
    T_DOC_COMMENT = 389,
    T_OPEN_TAG = 390,
    T_OPEN_TAG_WITH_ECHO = 391,
    T_CLOSE_TAG = 392,
    T_WHITESPACE = 393,
    T_START_HEREDOC = 394,
    T_END_HEREDOC = 395,
    T_DOLLAR_OPEN_CURLY_BRACES = 396,
    T_CURLY_OPEN = 397,
    T_PAAMAYIM_NEKUDOTAYIM = 398,
    T_NS_SEPARATOR = 399,
    T_ELLIPSIS = 400,
    T_BAD_CHARACTER = 401,
    T_ERROR = 402
  };
#endif

/* Value type.  */
#if ! defined ZENDSTYPE && ! defined ZENDSTYPE_IS_DECLARED
typedef zend_parser_stack_elem ZENDSTYPE;
# define ZENDSTYPE_IS_TRIVIAL 1
# define ZENDSTYPE_IS_DECLARED 1
#endif



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
         || (defined ZENDSTYPE_IS_TRIVIAL && ZENDSTYPE_IS_TRIVIAL)))

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
#define YYLAST   7997

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  176
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  161
/* YYNRULES -- Number of rules.  */
#define YYNRULES  555
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1050

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   402

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,   174,     2,   175,    54,    37,     2,
     165,   166,    52,    50,   170,    51,    47,    53,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    31,   167,
      43,    16,    45,    30,    65,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   171,     2,   172,    36,     2,   173,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   168,    35,   169,    57,     2,     2,     2,
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
      15,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    32,    33,    34,    38,    39,    40,
      41,    42,    44,    46,    48,    49,    56,    58,    59,    60,
      61,    62,    63,    64,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164
};

#if ZENDDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   284,   284,   288,   288,   288,   288,   288,   288,   288,
     288,   289,   289,   289,   289,   289,   289,   289,   289,   289,
     289,   289,   289,   290,   290,   290,   290,   290,   290,   290,
     290,   290,   290,   291,   291,   291,   291,   291,   291,   291,
     291,   291,   291,   292,   292,   292,   292,   292,   292,   292,
     292,   292,   292,   292,   293,   293,   293,   293,   293,   293,
     293,   293,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   298,   299,   299,   299,   299,   299,   299,   303,
     304,   312,   313,   318,   319,   324,   325,   330,   331,   335,
     336,   337,   338,   342,   344,   349,   353,   354,   358,   359,
     360,   361,   365,   366,   367,   368,   372,   375,   375,   378,
     378,   381,   382,   383,   384,   385,   389,   390,   394,   399,
     404,   405,   409,   411,   416,   418,   423,   425,   430,   431,
     435,   437,   442,   444,   449,   450,   454,   456,   462,   463,
     464,   465,   472,   473,   474,   475,   477,   479,   481,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   494,
     498,   497,   501,   502,   504,   505,   509,   511,   516,   517,
     521,   522,   526,   527,   531,   532,   536,   540,   547,   548,
     552,   553,   557,   557,   560,   560,   566,   567,   572,   573,
     577,   577,   583,   583,   589,   590,   594,   595,   599,   600,
     604,   605,   606,   607,   611,   612,   616,   617,   621,   622,
     626,   627,   628,   629,   633,   634,   636,   641,   642,   647,
     652,   653,   657,   658,   662,   664,   669,   670,   675,   676,
     681,   684,   690,   691,   696,   699,   705,   706,   712,   713,
     718,   720,   725,   726,   730,   731,   732,   733,   737,   741,
     749,   750,   754,   755,   756,   760,   761,   765,   766,   773,
     774,   775,   779,   780,   781,   785,   787,   792,   793,   797,
     798,   802,   804,   809,   810,   812,   816,   817,   821,   827,
     828,   832,   833,   837,   839,   845,   848,   851,   858,   859,
     860,   865,   866,   870,   871,   872,   876,   878,   883,   884,
     888,   893,   895,   899,   901,   906,   908,   912,   917,   918,
     922,   923,   927,   928,   933,   934,   939,   940,   941,   942,
     943,   944,   948,   949,   953,   955,   960,   961,   965,   969,
     973,   974,   977,   981,   982,   986,   987,   991,   991,  1001,
    1003,  1005,  1010,  1012,  1014,  1016,  1018,  1020,  1021,  1023,
    1025,  1027,  1029,  1031,  1033,  1035,  1037,  1039,  1041,  1043,
    1045,  1047,  1048,  1049,  1050,  1051,  1053,  1055,  1057,  1059,
    1061,  1062,  1063,  1064,  1065,  1066,  1067,  1068,  1069,  1070,
    1071,  1072,  1073,  1074,  1075,  1076,  1077,  1079,  1081,  1083,
    1085,  1087,  1089,  1091,  1093,  1095,  1097,  1101,  1102,  1104,
    1106,  1108,  1109,  1110,  1111,  1112,  1113,  1114,  1115,  1116,
    1117,  1118,  1119,  1120,  1121,  1122,  1123,  1124,  1125,  1126,
    1127,  1128,  1129,  1131,  1136,  1141,  1151,  1155,  1159,  1163,
    1167,  1171,  1172,  1176,  1177,  1181,  1182,  1186,  1187,  1191,
    1193,  1195,  1197,  1202,  1205,  1209,  1210,  1211,  1215,  1216,
    1220,  1222,  1223,  1228,  1229,  1234,  1235,  1236,  1237,  1241,
    1242,  1243,  1244,  1246,  1247,  1248,  1249,  1253,  1254,  1255,
    1256,  1257,  1258,  1259,  1260,  1261,  1265,  1267,  1272,  1273,
    1277,  1281,  1282,  1283,  1284,  1288,  1289,  1293,  1294,  1295,
    1299,  1301,  1303,  1305,  1307,  1309,  1313,  1315,  1317,  1319,
    1324,  1325,  1326,  1330,  1332,  1337,  1339,  1341,  1343,  1345,
    1347,  1349,  1354,  1355,  1356,  1360,  1361,  1362,  1366,  1371,
    1372,  1376,  1378,  1383,  1385,  1387,  1389,  1391,  1393,  1396,
    1402,  1404,  1406,  1408,  1413,  1415,  1418,  1421,  1424,  1426,
    1428,  1431,  1435,  1436,  1437,  1438,  1443,  1444,  1445,  1447,
    1449,  1451,  1453,  1458,  1459,  1464
};
#endif

#if ZENDDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined", "\"'throw'\"",
  "PREC_ARROW_FUNCTION", "\"'include'\"", "\"'include_once'\"",
  "\"'require'\"", "\"'require_once'\"", "\"'or'\"", "\"'xor'\"",
  "\"'and'\"", "\"'print'\"", "\"'yield'\"", "\"'=>'\"",
  "\"'yield from'\"", "'='", "\"'+='\"", "\"'-='\"", "\"'*='\"",
  "\"'/='\"", "\"'.='\"", "\"'%='\"", "\"'&='\"", "\"'|='\"", "\"'^='\"",
  "\"'<<='\"", "\"'>>='\"", "\"'**='\"", "\"'?""?='\"", "'?'", "':'",
  "\"'?""?'\"", "\"'||'\"", "\"'&&'\"", "'|'", "'^'", "'&'", "\"'=='\"",
  "\"'!='\"", "\"'==='\"", "\"'!=='\"", "\"'<=>'\"", "'<'", "\"'<='\"",
  "'>'", "\"'>='\"", "'.'", "\"'<<'\"", "\"'>>'\"", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'!'", "\"'instanceof'\"", "'~'", "\"'(int)'\"",
  "\"'(double)'\"", "\"'(string)'\"", "\"'(array)'\"", "\"'(object)'\"",
  "\"'(bool)'\"", "\"'(unset)'\"", "'@'", "\"'**'\"", "\"'clone'\"",
  "T_NOELSE", "\"'elseif'\"", "\"'else'\"", "\"integer\"",
  "\"floating-point number\"", "\"identifier\"",
  "\"fully qualified name\"", "\"namespace-relative name\"",
  "\"namespaced name\"", "\"variable\"", "T_INLINE_HTML",
  "\"string content\"", "\"quoted string\"", "\"variable name\"",
  "\"number\"", "\"'eval'\"", "\"'new'\"", "\"'exit'\"", "\"'if'\"",
  "\"'endif'\"", "\"'echo'\"", "\"'do'\"", "\"'while'\"", "\"'endwhile'\"",
  "\"'for'\"", "\"'endfor'\"", "\"'foreach'\"", "\"'endforeach'\"",
  "\"'declare'\"", "\"'enddeclare'\"", "\"'as'\"", "\"'switch'\"",
  "\"'endswitch'\"", "\"'case'\"", "\"'default'\"", "\"'match'\"",
  "\"'break'\"", "\"'continue'\"", "\"'goto'\"", "\"'function'\"",
  "\"'fn'\"", "\"'const'\"", "\"'return'\"", "\"'try'\"", "\"'catch'\"",
  "\"'finally'\"", "\"'use'\"", "\"'insteadof'\"", "\"'global'\"",
  "\"'static'\"", "\"'abstract'\"", "\"'final'\"", "\"'private'\"",
  "\"'protected'\"", "\"'public'\"", "\"'var'\"", "\"'unset'\"",
  "\"'isset'\"", "\"'empty'\"", "\"'__halt_compiler'\"", "\"'class'\"",
  "\"'trait'\"", "\"'interface'\"", "\"'extends'\"", "\"'implements'\"",
  "\"'namespace'\"", "\"'list'\"", "\"'array'\"", "\"'callable'\"",
  "\"'__LINE__'\"", "\"'__FILE__'\"", "\"'__DIR__'\"", "\"'__CLASS__'\"",
  "\"'__TRAIT__'\"", "\"'__METHOD__'\"", "\"'__FUNCTION__'\"",
  "\"'__NAMESPACE__'\"", "\"'@@'\"", "\"'++'\"", "\"'--'\"", "\"'->'\"",
  "\"'?->'\"", "\"comment\"", "\"doc comment\"", "\"open tag\"",
  "\"'<?='\"", "\"'?>'\"", "\"whitespace\"", "\"heredoc start\"",
  "\"heredoc end\"", "\"'${'\"", "\"'{$'\"", "\"'::'\"", "\"'\\\\'\"",
  "\"'...'\"", "\"invalid character\"", "T_ERROR", "'('", "')'", "';'",
  "'{'", "'}'", "','", "'['", "']'", "'`'", "'\"'", "'$'", "$accept",
  "start", "reserved_non_modifiers", "semi_reserved", "identifier",
  "top_statement_list", "namespace_declaration_name", "namespace_name",
  "legacy_namespace_name", "name", "attribute_decl", "attribute",
  "attributes", "attributed_statement", "top_statement", "$@1", "$@2",
  "use_type", "group_use_declaration", "mixed_group_use_declaration",
  "possible_comma", "inline_use_declarations",
  "unprefixed_use_declarations", "use_declarations",
  "inline_use_declaration", "unprefixed_use_declaration",
  "use_declaration", "const_list", "inner_statement_list",
  "inner_statement", "statement", "$@3", "catch_list", "catch_name_list",
  "optional_variable", "finally_statement", "unset_variables",
  "unset_variable", "function_declaration_statement", "is_reference",
  "is_variadic", "class_declaration_statement", "@4", "@5",
  "class_modifiers", "class_modifier", "trait_declaration_statement", "@6",
  "interface_declaration_statement", "@7", "extends_from",
  "interface_extends_list", "implements_list", "foreach_variable",
  "for_statement", "foreach_statement", "declare_statement",
  "switch_case_list", "case_list", "case_separator", "match",
  "match_arm_list", "non_empty_match_arm_list", "match_arm",
  "match_arm_cond_list", "while_statement", "if_stmt_without_else",
  "if_stmt", "alt_if_stmt_without_else", "alt_if_stmt", "parameter_list",
  "non_empty_parameter_list", "attributed_parameter",
  "optional_visibility_modifier", "parameter",
  "optional_type_without_static", "type_expr", "type", "union_type",
  "type_expr_without_static", "type_without_static",
  "union_type_without_static", "return_type", "argument_list",
  "non_empty_argument_list", "argument", "global_var_list", "global_var",
  "static_var_list", "static_var", "class_statement_list",
  "attributed_class_statement", "class_statement", "class_name_list",
  "trait_adaptations", "trait_adaptation_list", "trait_adaptation",
  "trait_precedence", "trait_alias", "trait_method_reference",
  "absolute_trait_method_reference", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "property_list", "property", "class_const_list", "class_const_decl",
  "const_decl", "echo_expr_list", "echo_expr", "for_exprs",
  "non_empty_for_exprs", "anonymous_class", "@8", "new_expr", "expr",
  "inline_function", "fn", "function", "backup_doc_comment",
  "backup_fn_flags", "backup_lex_pos", "returns_ref", "lexical_vars",
  "lexical_var_list", "lexical_var", "function_call", "class_name",
  "class_name_reference", "exit_expr", "backticks_expr", "ctor_arguments",
  "dereferencable_scalar", "scalar", "constant", "class_constant",
  "optional_expr", "variable_class_name", "fully_dereferencable",
  "array_object_dereferencable", "callable_expr", "callable_variable",
  "variable", "simple_variable", "static_member", "new_variable",
  "member_name", "property_name", "array_pair_list", "possible_array_pair",
  "non_empty_array_pair_list", "array_pair", "encaps_list", "encaps_var",
  "encaps_var_offset", "internal_functions_in_yacc", "isset_variables",
  "isset_variable", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,    61,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
      63,    58,   284,   285,   286,   124,    94,    38,   287,   288,
     289,   290,   291,    60,   292,    62,   293,    46,   294,   295,
      43,    45,    42,    47,    37,    33,   296,   126,   297,   298,
     299,   300,   301,   302,   303,    64,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,    40,    41,    59,   123,   125,
      44,    91,    93,    96,    34,    36
};
# endif

#define YYPACT_NINF -847

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-847)))

#define YYTABLE_NINF -527

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-527)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -847,    71,  1726,  -847,  5811,  5811,  5811,  5811,  5811,  5811,
    5811,  5811,  5811,  5811,  5811,  5811,  5811,  5811,  5811,  5811,
    5811,  5811,  5811,  5811,  5811,  -847,  -847,    54,  -847,  -847,
    -847,  -847,  -847,  -847,   -67,   201,   -25,   -15,  5811,  4651,
      93,   118,   163,   172,   176,   182,  5811,  5811,   146,  -847,
    -847,   195,  5811,    81,   331,   -28,   148,  -847,  -847,   187,
     196,   198,   200,  -847,  -847,  -847,  7212,   206,   224,  -847,
    -847,  -847,  -847,  -847,  -847,  -847,  -847,   349,  7068,  7068,
     134,  5811,  -847,  -847,  4796,   -13,   -10,   -34,   -33,  -847,
     461,  -847,  -847,  -847,  -847,  -847,   249,  -847,  -847,  -847,
    -847,   314,  -847,   210,  -847,  -847,  6552,  -847,   262,   262,
    -847,   240,   437,  -847,   472,   231,   246,   272,   527,   244,
     290,    86,  -847,  -847,  -847,  -847,   286,   237,  7795,   262,
    7795,  7795,  7795,  7795,  6122,  7836,  6122,   100,   100,    87,
     100,   100,   100,   100,   100,   100,   100,   100,   100,  -847,
    -847,  5811,  -847,  -847,  5811,  -847,   166,  -847,   277,   244,
    -847,   285,  5811,  -847,  5811,  -102,  -847,  7795,   361,  5811,
    5811,  5811,   195,  5811,  5811,  7795,   292,   303,   310,   423,
     103,  -847,   313,  -847,  -847,  -847,  -847,  -847,  -847,  -847,
     -60,   243,   321,   114,  -847,   140,  -847,  -847,   441,   155,
    -847,  -847,  7068,  5811,  5811,   323,   421,   429,   434,  -847,
    -847,  -847,  -847,  -847,  -847,  -847,  -847,  -847,  -847,  -847,
    -847,  -847,  -847,  -847,  -847,  -847,  -847,  -847,  -847,  -847,
    -847,  -847,  -847,  -847,  -847,  -847,  -847,  -847,  -847,  -847,
    -847,  -847,  -847,  -847,  -847,  -847,  -847,  -847,  -847,  -847,
    -847,  -847,  -847,  -847,  -847,  -847,  -847,  -847,  -847,  -847,
    -847,  -847,  -847,  -847,  -847,  -847,  -847,  -847,  -847,  -847,
    -847,  -847,  -847,  -847,  -847,  -847,  -847,  -847,  -847,  -847,
    -847,  -847,  -847,  -847,  -847,  -847,  -847,  -847,  -847,   329,
     367,  4796,  4796,  -847,   244,  5811,  4796,   372,  -847,  -847,
     330,   330,   -75,    80,  -847,  4941,  7068,   143,  -847,  6600,
    1871,  7068,   374,  5811,  7699,   375,  -847,   392,  -847,    11,
     391,   147,    11,    -7,  5811,  -847,  1118,  -847,   286,  -847,
    -847,  -847,  -847,  -847,   402,  4651,   409,   544,   415,  5811,
    5811,  5811,  5086,  5811,  5811,  5811,  5811,  5811,  5811,  5811,
    5811,  5811,  5811,  5811,  5811,  5811,  5811,  5811,  5811,  5811,
    5811,  5811,  5811,  5811,  5811,  5811,   213,  5811,  -847,  -847,
    -847,   515,  3784,  3784,   -42,   -42,  5811,  5811,  -847,  5231,
    5811,  5811,  5811,  5811,  5811,  5811,  5811,  5811,  5811,  5811,
    5811,  5811,  5811,  -847,  -847,  -847,  5811,  6648,   244,  6696,
    -847,   -28,  -847,  -847,   -42,   -42,   -28,  5811,  5811,   427,
    6744,  -847,  5811,   430,  6792,   432,   431,  7795,  7632,  -111,
    6840,  6888,  -847,  -847,  -847,  5811,  -847,   195,  -847,  2016,
     531,   439,   -36,   443,   259,  -847,  -847,   243,  -847,   -28,
    5811,  -847,   536,   444,  -847,    48,  7795,   445,  -847,  6936,
     450,   491,  -847,   494,  -847,   459,  -847,   466,   467,  -847,
    6984,   457,   566,   571,     9,  -847,  -847,    76,  1277,   476,
    -847,  -847,  -847,   463,   484,  -847,   461,  -847,  -847,  -847,
     333,  4796,  7795,  5376,   637,  4796,  -847,  -847,  6264,  5811,
    5811,  5811,  5811,  5811,  5811,  5521,  5811,    20,   -67,   201,
      -3,   182,   624,   625,   -29,   196,   198,   206,   224,   639,
     643,   648,   649,   650,   651,   652,   654,  5811,  -847,   657,
     519,  -847,  7795,  -847,   617,  5811,  -847,  5811,  -847,  -847,
    3770,  7347,  6122,  5811,  7747,  7478,  7869,  7901,  7211,  7931,
    1096,  4844,  4844,  4844,  4844,  4844,  1424,  1424,  1424,  1424,
     942,   985,   985,   729,   729,    87,    87,    87,  -847,   100,
     526,  -847,   528,  5811,   532,   534,   244,   532,   534,   244,
    -847,  5811,  -847,   244,   244,  6312,   520,  7068,  6122,  6122,
    6122,  6122,  6122,  6122,  6122,  6122,  6122,  6122,  6122,  6122,
    6122,  6122,  6122,  -847,   491,  -847,  -847,  -847,  -847,  -847,
    6360,   529,  -847,  3926,  -847,  5811,  4071,  5811,  5811,   938,
    -847,    -8,   542,  7795,  -847,  -847,  -847,   154,   545,  -847,
    -847,   614,  -847,  -847,  7795,  -847,  7068,   554,  5811,   555,
    -847,  -847,   349,   590,   559,   349,  -847,  -847,  1436,   712,
    -847,   564,  -847,  -847,  -847,   653,  -847,  -847,  -847,   558,
    -847,  5811,  -847,  -847,   567,  -847,   568,  7068,   572,  7795,
    5811,  -847,  -847,  7795,  5811,  1291,   570,   491,  7032,  7080,
    2161,  7478,  5811,   265,   574,   265,  6408,  -847,  -847,  6456,
    -847,  -847,  -847,  -847,   330,   590,  -847,  -847,  -847,  -847,
    7128,  -847,  -847,  -847,   575,  7795,  7068,   578,  4796,     5,
      28,  4216,   585,   588,  -847,  5666,  -847,   350,   664,   133,
     601,  -847,  -847,   133,  -847,   606,  -847,  -847,  -847,   349,
    -847,  -847,   605,  -847,   616,  1581,  -847,  5811,  -847,  -847,
    5968,   620,   712,   334,  4796,  6122,  7795,  -847,  -847,   590,
    4651,   757,   622,  7478,  -847,  -847,  -847,   291,   626,   623,
    -847,   129,  -847,   265,   628,  -847,  -847,  -847,  3611,   631,
    2306,  5811,    33,  4796,   629,   938,  4361,  -847,  -847,  -847,
    -847,   442,  -847,   -48,   630,   633,   638,  -847,   641,  7795,
     634,   645,  -847,   734,  -847,   154,   640,   644,  -847,  -847,
     605,   656,   627,   349,  -847,  -847,  6122,   647,  -847,   655,
    -847,  -847,  -847,  -847,  -847,   786,   276,  -847,   168,  -847,
    -847,  -847,   782,  -847,   787,   790,   662,   716,   663,  -847,
     665,   670,   671,    34,   672,  -847,  -847,  -847,  2451,   471,
     675,  5811,     1,   -45,  -847,  -847,   825,  -847,  5666,  -847,
    5811,   837,   349,  -847,  -847,  -847,  -847,   133,   683,  -847,
     349,  -847,  -847,  -847,  -847,  -847,  -847,  -847,  -847,   586,
    -847,  -847,   129,    49,   977,  -847,  -847,   646,  -847,   712,
     692,  3611,   239,   847,  -847,  -847,  -847,   701,   168,   168,
     786,   710,   786,  -847,  -847,  4506,  -847,  4361,  2596,   699,
     718,  -847,  6504,  -847,  -847,  -847,  -847,  5811,  -847,  7795,
    5811,     6,  -847,  2741,  -847,  -847,   726,   301,  -847,   802,
    7354,   262,  -847,  -847,  -847,   284,  -847,  -847,   853,   854,
    -847,  -847,  -847,   813,  -847,  -847,  -847,    39,  -847,   736,
    -847,  -847,  -847,  -847,   724,  -847,  -847,  -847,  3611,  7795,
    7795,   349,  -847,   727,  -847,  -847,  -847,  5984,  -847,   878,
     274,  -847,   881,   282,  -847,  7354,   865,  -847,   284,   284,
    -847,  -847,   731,   829,  -847,   737,  -847,   740,  -847,  2886,
    -847,  3611,  -847,   743,   752,  -847,  -847,  6126,  -847,   746,
     747,   818,   804,   761,  5811,  -847,  -847,   802,  5811,  -847,
    7354,  -847,  -847,  -847,  -847,  5811,   901,  -847,  -847,    39,
     756,  -847,   758,  -847,  -847,  -847,  -847,  -847,  7496,   349,
    7354,  7795,  -847,  7795,  -847,   759,  7795,  5811,  3031,  -847,
    -847,  3176,  -847,  3321,  -847,  -847,  7354,   605,  -847,  -847,
    -847,   265,  -847,  7795,  -847,  -847,  -847,  -847,   762,  -847,
    -847,   786,  -847,   305,  -847,  -847,  -847,  3466,  -847,  -847
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      82,     0,     2,     1,     0,     0,     0,     0,     0,     0,
     414,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   459,   460,    89,    91,    92,
      90,   500,   155,   457,     0,     0,   448,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   478,   478,     0,   427,
     426,     0,   478,     0,     0,     0,   443,   188,   189,     0,
       0,     0,     0,   184,   190,   192,   109,     0,     0,   468,
     469,   470,   475,   471,   472,   473,   474,     0,     0,     0,
       0,     0,   162,   137,   519,   450,     0,     0,   467,    96,
       0,   103,    81,   102,    98,    99,     0,   186,   100,   101,
     423,   232,   143,     0,   144,   397,     0,   419,   431,   431,
     495,     0,   464,   411,   465,   466,     0,   485,     0,     0,
     496,   342,   490,   497,   401,    89,   443,     0,   418,   431,
     548,   549,   551,   552,   413,   415,   417,   382,   383,   384,
     385,   402,   403,   404,   405,   406,   407,   408,   410,   347,
     165,     0,   443,   337,     0,   444,     0,   340,   445,   453,
     505,   446,   478,   409,     0,     0,   331,   332,     0,     0,
     333,     0,     0,     0,     0,   479,     0,     0,     0,     0,
       0,   135,     0,   137,    85,    88,    86,   116,   117,    87,
     132,     0,     0,     0,   127,     0,   277,   278,   281,     0,
     280,   421,     0,     0,     0,     0,     0,     0,     0,    33,
       3,     4,     6,     7,     8,     9,    10,    46,    47,    11,
      13,    16,    17,    79,    84,     5,    12,    14,    15,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    49,    50,    51,    52,    71,    53,    41,    42,    43,
      70,    44,    45,    30,    31,    32,    34,    35,    36,    73,
      74,    75,    76,    77,    78,    37,    38,    39,    40,    61,
      59,    60,    56,    57,    58,    48,    54,    55,    66,    67,
      68,    62,    63,    65,    64,    69,    72,    80,    83,   107,
       0,   519,   519,    95,    93,     0,   519,   483,   486,   484,
     362,   364,   534,     0,   462,     0,     0,     0,   532,     0,
       0,     0,     0,     0,   524,     0,   522,   518,   520,   451,
       0,   452,     0,     0,     0,   502,     0,   439,     0,    97,
     104,   420,   182,   187,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   156,   432,
     428,   428,     0,     0,     0,     0,     0,   478,   442,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   361,   363,   428,     0,     0,   453,     0,
     341,     0,   454,   339,     0,     0,     0,     0,   478,     0,
       0,   154,     0,     0,     0,     0,   334,   336,     0,     0,
       0,     0,   149,   150,   164,     0,   115,     0,   151,     0,
       0,     0,   132,     0,     0,   111,   113,     0,   152,     0,
       0,   153,     0,   120,   174,   481,   555,   120,   553,     0,
       0,   194,   428,   196,   106,     0,    82,     0,     0,    94,
       0,     0,     0,     0,     0,   461,   533,     0,     0,   481,
     531,   463,   530,   396,     0,   142,     0,   139,   136,   138,
     481,   519,   527,     0,   456,   519,   412,   458,     0,    33,
       3,     4,     6,     7,    46,   414,    13,    89,     5,    12,
     448,    71,   427,   426,    73,    39,    40,    48,    54,   468,
     469,   470,   475,   471,   472,   473,   474,     0,   269,     0,
     120,   271,   273,   422,     0,     0,   233,     0,   137,   236,
     367,   369,   368,     0,     0,   400,   365,   366,   370,   372,
     371,   388,   389,   386,   387,   394,   390,   391,   392,   393,
     373,   380,   381,   374,   375,   376,   378,   379,   395,   377,
       0,   428,     0,     0,   476,   503,     0,   477,   504,     0,
     515,     0,   517,   498,   499,     0,     0,     0,   345,   348,
     349,   350,   352,   353,   354,   355,   356,   357,   358,   359,
     351,   360,   416,   550,   194,   447,   510,   508,   509,   511,
       0,     0,   449,     0,   330,     0,     0,   333,     0,     0,
     160,     0,     0,   428,   134,   166,   133,     0,     0,   112,
     114,   132,   126,   276,   282,   279,   121,     0,   121,     0,
     547,   105,     0,   198,     0,     0,   428,    82,     0,     0,
     455,   482,   456,   536,   537,     0,   542,   545,   543,     0,
     539,     0,   538,   541,     0,   140,     0,     0,     0,   523,
       0,   521,   501,   275,     0,   121,     0,   194,     0,     0,
       0,   399,     0,   244,     0,   244,     0,   440,   441,     0,
     493,   494,   492,   491,   346,   198,   507,   506,   137,   230,
       0,   137,   228,   145,     0,   335,     0,     0,   519,     0,
     481,     0,   214,   214,   148,   220,   329,   172,   130,     0,
     120,   123,   128,     0,   175,     0,   554,   546,   195,     0,
     428,   284,   197,   291,     0,     0,   110,     0,   544,   535,
       0,     0,   529,   481,   519,   344,   274,   272,   270,   198,
       0,     0,     0,   398,   247,   246,   245,   244,     0,   120,
     240,   250,   243,   244,     0,   513,   516,   428,   234,     0,
       0,   333,   481,   519,     0,     0,     0,   137,   208,   161,
     214,     0,   214,     0,   120,     0,   120,   222,   120,   226,
       0,     0,   163,     0,   129,   121,     0,   120,   125,   157,
     199,     0,   312,     0,   284,   108,   343,     0,   141,     0,
     428,   231,   137,   237,   242,   267,   244,   238,     0,   262,
     263,   264,   178,   251,   259,   261,     0,   433,     0,   146,
       0,     0,     0,   456,     0,   137,   206,   158,     0,     0,
       0,     0,     0,     0,   210,   121,     0,   219,   121,   221,
     121,     0,     0,   137,   131,   122,   119,   121,     0,   284,
       0,   319,   320,   321,   318,   317,   316,   311,   191,   312,
     288,   283,   250,     0,   310,   314,   292,   312,   540,   528,
       0,   235,     0,     0,   241,   260,   179,   180,     0,     0,
     267,     0,   267,   284,   229,     0,   202,     0,     0,     0,
       0,   212,     0,   217,   218,   137,   211,     0,   223,   227,
       0,   170,   168,     0,   124,   118,   312,     0,   289,     0,
       0,   431,   315,   193,   284,     0,   256,   268,   252,   254,
     255,   429,   181,     0,   265,   266,   429,     0,   429,   312,
     137,   204,   147,   159,     0,   209,   213,   137,   216,   225,
     224,     0,   171,     0,   173,   185,   293,     0,   290,   428,
       0,   323,     0,     0,   327,     0,   312,   253,     0,     0,
     430,   428,     0,     0,   437,   120,   436,     0,   338,     0,
     207,   215,   169,     0,    73,   294,   305,     0,   296,     0,
       0,     0,   306,     0,     0,   324,   285,     0,     0,   286,
       0,   428,   183,   257,   258,     0,   248,   137,   438,   121,
       0,   137,     0,   137,   295,   297,   298,   299,     0,     0,
       0,   428,   322,   428,   326,     0,   429,     0,     0,   435,
     434,     0,   205,     0,   301,   302,   304,   300,   307,   325,
     328,   244,   425,   249,   429,   429,   167,   303,     0,   177,
     424,   267,   429,     0,   308,   137,   429,     0,   287,   309
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -847,  -847,   -85,  -847,   -37,  -439,  -847,   -47,  -178,    84,
    -847,   -81,    -2,     0,  -847,  -847,  -847,   875,  -847,  -847,
    -425,  -847,  -847,   742,   150,  -683,   501,   767,  -125,  -847,
      13,  -847,  -847,  -847,  -847,  -847,  -847,   315,  -847,  -847,
    -847,  -847,  -847,  -847,  -847,   835,  -847,  -847,  -847,  -847,
    -544,  -847,  -622,   177,  -847,    56,  -847,  -847,  -642,    52,
    -847,  -847,  -847,   109,  -847,  -847,  -847,  -847,  -847,  -847,
    -661,  -847,   142,  -847,   202,    88,  -847,  -707,  -847,  -847,
    -724,  -847,  -846,   -82,  -847,   287,  -847,   512,  -847,   513,
    -652,    98,  -847,  -711,  -847,  -847,   -19,  -847,  -847,  -847,
    -847,  -847,  -847,  -847,  -847,  -843,  -847,   -26,  -847,   -31,
     533,  -847,   552,  -589,  -847,   809,  -847,  -847,   169,   -46,
    -847,    -1,  -365,  -806,  -847,  -105,  -847,  -847,   -23,  -847,
     -32,   600,  -847,  -847,   573,   -39,  -847,    15,    21,   -27,
    -847,  -847,  -847,  -847,  -847,    58,    42,  -847,  -847,   599,
    -109,  -280,   489,  -847,  -847,   400,   561,  -847,  -847,  -847,
     352
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   286,   287,   519,     2,   289,   708,   190,    88,
     293,    89,   127,   477,    92,   455,   290,   709,   433,   192,
     627,   710,   787,   193,   711,   712,   194,   180,   310,   478,
     479,   701,   707,   901,   943,   782,   443,   444,    94,   877,
     923,    95,   524,   206,    96,    97,    98,   207,    99,   208,
     633,   636,   720,   699,   932,   827,   769,   704,   771,   895,
     100,   775,   776,   777,   778,   693,   101,   102,   103,   104,
     748,   749,   750,   751,   752,   812,   917,   918,   919,   813,
     920,   815,   873,   402,   520,   521,   195,   196,   199,   200,
     792,   860,   861,   722,   948,   977,   978,   979,   980,   981,
     982,  1046,   862,   863,   864,   865,   950,   951,   953,   954,
     181,   165,   166,   415,   416,   157,   398,   105,   106,   107,
     108,   129,   562,   960,   995,   370,   882,   965,   966,   110,
     111,   159,   163,   320,   403,   112,   113,   114,   115,   176,
     116,   117,   118,   119,   120,   121,   122,   123,   161,   566,
     573,   315,   316,   317,   318,   307,   308,   649,   124,   447,
     448
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      90,   109,    91,   158,   371,   560,   327,   189,   790,   329,
     201,   457,   458,   432,   754,    93,   461,   638,   694,   765,
     177,   912,   629,   702,   395,   182,   784,   814,   -14,   288,
     788,   570,   893,   156,   926,    31,   928,   378,   430,   297,
     297,   941,  -200,    31,   331,   294,   329,  -201,  -203,    31,
     685,   -79,   168,   831,   832,   610,   831,   832,   429,   427,
     645,   773,   430,   757,   302,   411,   319,   302,   412,   322,
     302,     3,   470,   462,   463,   329,   963,   160,    49,    50,
     201,   331,   646,   942,   875,   150,   647,   634,   302,   109,
     330,   648,   816,   298,   298,   666,   464,   197,   151,   299,
     299,   431,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   964,   800,   -79,   155,
     962,   834,   967,   739,   896,   618,   571,  -444,   829,   325,
     833,  -443,   326,    87,   324,   409,   300,   301,   814,   907,
     162,    87,   867,   366,   189,   305,   306,    87,   305,   306,
     164,   305,   306,   367,   924,   925,    49,   302,   910,   808,
     703,   155,   162,   297,   904,  1026,   367,   487,   894,   305,
     306,   766,   821,   128,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,  -200,  1042,   674,   906,   725,  -201,
    -203,   656,   125,    28,    29,    30,   184,   167,   957,   186,
    1032,   302,   459,   303,  -176,   175,   175,   298,  -176,   178,
     302,   175,   470,   299,   302,   198,   470,   184,  1039,  1040,
     186,   929,   393,   394,  -481,  -481,  1043,   465,   305,   306,
    1048,   125,    28,    29,    30,   650,  -481,   651,   706,   183,
     309,   993,   994,   314,  -481,    49,    50,  -481,   169,   621,
     445,   187,   956,   188,   809,   810,   574,   297,   179,   915,
     426,   724,   297,   427,   125,    28,    29,    30,    31,   336,
     337,   436,   523,   170,   437,   786,   125,    28,    29,    30,
      31,   304,   305,   306,   153,   597,   598,   338,  1027,   369,
     471,   305,   306,   809,   810,   305,   306,   438,   476,   109,
     439,    77,   125,    28,    29,    30,   184,   185,   152,   186,
     397,   298,   441,   399,   807,   442,   298,   299,   171,   153,
     152,   175,   299,   410,   158,   564,   567,   172,   414,   417,
     418,   173,   420,   421,    49,    50,    77,   174,   526,   836,
     576,   839,   202,   841,   328,   791,   916,   125,    28,    29,
      30,   203,   848,   204,   469,   205,   154,    57,    58,   480,
    1038,   291,   446,   449,   809,   810,    87,   332,   154,  -484,
    -484,   601,    77,   334,   335,   744,   745,   746,    87,   292,
     189,  -484,   818,    49,    50,   329,   744,   745,   746,  -484,
     372,   916,  -484,   670,   184,   185,   373,   186,   160,   326,
      77,   744,   745,   746,   565,   568,   572,   572,   764,   809,
     810,    77,   125,    28,    29,    30,   620,   476,   109,   437,
     331,  -239,  -480,   404,   405,   870,    77,   401,   187,   425,
     188,   986,  -121,   596,   987,   406,   572,   572,   599,   989,
     155,   413,   990,   407,   799,  -487,   408,   440,   201,   422,
     314,   314,   780,   781,   460,   314,   152,   158,   946,   947,
     423,   793,  1044,  1045,   468,   109,   655,   424,  -481,  -481,
     428,   197,   482,   822,   677,   321,   323,   678,   435,   450,
    -481,   680,   681,   488,   451,   522,   454,   156,  -481,  -526,
    -525,  -481,   452,  -526,  -525,  -526,  -525,   453,   530,   531,
     532,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,   556,   557,   456,   559,  -489,   297,   481,
    1000,   160,   830,   831,   832,   575,   175,   484,   578,   579,
     580,   581,   582,   583,   584,   585,   586,   587,   588,   589,
     590,   591,   485,   758,   486,   592,   760,   525,    49,    50,
     297,   890,   831,   832,   527,   528,   600,   175,   328,    57,
      58,   167,   529,   155,   985,  -483,  -483,   297,   561,    63,
      64,    65,   298,   602,   613,   605,   996,  -483,   299,   607,
     718,   608,  -489,   723,   616,  -483,    77,   617,  -483,   624,
     619,  -482,  -482,   198,   626,   628,   689,   631,   297,   692,
    -486,  -486,   632,  -482,   298,   635,  1015,   637,  -488,   642,
     299,  -482,   639,   640,  -482,   684,    90,   109,    91,   643,
    -486,   298,   828,  -486,   644,   653,  1029,   299,  1030,   654,
     314,    93,   659,   660,   314,   -43,   -70,   297,   128,   130,
     131,   132,   133,   134,   135,   149,   329,   700,   476,   109,
     -66,   747,   298,   747,   -67,   374,   375,   871,   299,   -68,
     -62,   -63,   -65,   -64,   445,   -69,   663,   723,   664,   665,
     667,   673,   683,   675,   668,   376,   669,  -512,   377,  -514,
     888,   687,   671,   851,   852,   853,   854,   855,   856,   857,
     705,   298,   430,   713,   768,   733,   155,   299,   903,   155,
     715,   717,   719,    90,   109,    91,   297,   721,   727,  -488,
     729,    77,   676,   731,   732,   728,   738,   734,    93,   753,
     679,   850,   761,   763,   851,   852,   853,   854,   855,   856,
     857,   747,   770,   801,   762,   772,   476,   109,   476,   109,
     850,   866,   783,   851,   852,   853,   854,   855,   856,   857,
     938,   785,    77,   789,   690,   793,   417,   695,   329,   826,
     298,   363,   364,   365,   794,   366,   299,   798,   802,   803,
     859,    77,   805,   806,   817,   367,   858,   446,   819,   842,
     835,   823,   837,   155,   747,   969,   955,   844,   838,   846,
     902,   840,   971,   843,   847,   913,   868,   872,   723,   876,
     730,   869,   878,   700,   849,   879,   476,   109,   880,   735,
     881,   883,   884,   736,   522,   811,   885,   886,   887,   897,
     850,   743,   891,   851,   852,   853,   854,   855,   856,   857,
     850,   900,   905,   851,   852,   853,   854,   855,   856,   857,
     914,   921,   911,   922,   466,   859,   935,   314,   472,   476,
     109,    77,  1018,   952,   779,   927,  1021,   155,  1023,   949,
     466,    77,   472,   466,   472,   936,   476,   109,   958,   959,
     961,   970,   811,   973,   984,   945,   796,   988,   931,   997,
     826,   476,   109,   314,   859,   968,   998,   999,  1001,   972,
     976,  1003,  -443,  1006,  1007,   983,  1008,  1017,   991,  1009,
    1047,  1010,  1020,  1025,  1031,  1022,   155,   859,  1041,   191,
     417,   333,   314,   434,   155,   845,   476,   109,   622,   419,
     976,   714,   824,   933,   937,   983,   811,   898,   874,   804,
     909,   623,   737,   952,   859,   625,   811,   908,  1005,  1014,
     614,  1012,   811,   811,   604,   400,   558,   476,   109,   476,
     109,   594,   569,  1028,   661,   696,  1019,   723,     0,   850,
     716,     0,   851,   852,   853,   854,   855,   856,   857,  1037,
     359,   360,   361,   362,   363,   364,   365,     0,   366,   811,
     892,     0,     0,     0,     0,     0,     0,   779,   367,   899,
      77,   125,    28,    29,    30,    31,   476,   109,    33,   476,
     109,   476,   109,     0,     0,   155,     0,     0,     0,   747,
       0,   155,     0,     0,   992,   361,   362,   363,   364,   365,
       0,   366,   811,   811,     0,   476,   109,     0,     0,     0,
       0,   367,     0,     0,     0,   152,     0,     0,     0,     0,
       0,   155,     0,     0,     0,     0,   939,     0,     0,   940,
       0,     0,   697,    68,     0,    69,    70,    71,    72,    73,
      74,    75,    76,     0,  -313,     0,  -313,     0,     0,     0,
       0,     0,     0,   155,   851,   852,   853,   854,   855,   856,
       0,     0,     0,   295,     0,     0,     0,     0,     0,   698,
       0,     0,    86,    87,     0,     0,     0,     0,     0,     0,
       0,   489,     0,   490,   491,   492,   493,   214,   215,   216,
     494,   495,     0,    11,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,     0,   366,  1011,     0,     0,     0,  1013,     0,     0,
       0,     0,   367,     0,  1016,     0,     0,     0,    12,    13,
       0,     0,     0,    14,   219,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,   496,  1033,   221,   222,    25,
      26,   497,    28,    29,    30,    31,     0,     0,    33,     0,
       0,   498,   499,   500,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   501,   246,   247,   248,   502,   503,   251,   252,   253,
     254,   255,   256,   257,   258,   504,   260,   261,   262,   263,
     264,   265,   266,   505,   506,     0,   269,   270,   271,   272,
     273,   274,   507,   508,   277,   509,   510,   511,   512,   513,
     514,   515,   516,    77,    78,    79,     0,     0,     0,     0,
       0,     0,     0,     0,    80,     0,     0,     0,     0,     0,
     517,     0,     0,    81,   518,     0,   339,   340,   341,    84,
       0,    85,    86,    87,   489,     0,   490,   491,   492,   493,
     214,   215,   216,   494,   495,     0,    11,   342,     0,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,     0,   366,     0,     0,     0,     0,     0,     0,
       0,    12,    13,   367,     0,     0,    14,   219,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,   496,     0,
     221,   222,    25,    26,   497,    28,    29,    30,    31,     0,
       0,    33,     0,     0,   498,   499,   500,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   501,   246,   247,   248,   502,   503,
     251,   252,   253,   254,   255,   256,   257,   258,   504,   260,
     261,   262,   263,   264,   265,   266,   505,   506,     0,   269,
     270,   271,   272,   273,   274,   507,   508,   277,   509,   510,
     511,   512,   513,   514,   515,   516,    77,    78,    79,     4,
       0,     5,     6,     7,     8,     0,   652,    80,     9,    10,
       0,    11,     0,   517,     0,     0,    81,     0,     0,     0,
       0,     0,    84,     0,    85,    86,    87,  -527,  -527,  -527,
    -527,   358,   359,   360,   361,   362,   363,   364,   365,     0,
     366,     0,     0,     0,     0,     0,    12,    13,     0,     0,
     367,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,     0,     0,     0,    25,    26,    27,
      28,    29,    30,    31,    32,     0,    33,     0,     0,    34,
      35,    36,    37,     0,    38,    39,    40,     0,    41,     0,
      42,     0,    43,     0,     0,    44,     0,     0,     0,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     0,     0,
      54,     0,    55,    56,    57,    58,     0,     0,     0,     0,
      59,    60,    61,    62,    63,    64,    65,     0,     0,    66,
      67,    68,     0,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     4,     0,     5,     6,     7,     8,
       0,     0,    80,     9,    10,     0,    11,     0,     0,     0,
       0,    81,     0,    82,    83,   726,     0,    84,     0,    85,
      86,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,     0,
       0,     0,    25,    26,    27,    28,    29,    30,    31,    32,
       0,    33,     0,     0,    34,    35,    36,    37,     0,    38,
      39,    40,     0,    41,     0,    42,     0,    43,     0,     0,
      44,     0,     0,     0,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     0,     0,    54,     0,    55,    56,    57,
      58,     0,     0,     0,     0,    59,    60,    61,    62,    63,
      64,    65,     0,     0,    66,    67,    68,     0,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,     4,
       0,     5,     6,     7,     8,     0,     0,    80,     9,    10,
       0,    11,     0,     0,     0,     0,    81,     0,    82,    83,
     795,     0,    84,     0,    85,    86,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,     0,     0,     0,    25,    26,    27,
      28,    29,    30,    31,    32,     0,    33,     0,     0,    34,
      35,    36,    37,     0,    38,    39,    40,     0,    41,     0,
      42,     0,    43,     0,     0,    44,     0,     0,     0,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     0,     0,
      54,     0,    55,    56,    57,    58,     0,     0,     0,     0,
      59,    60,    61,    62,    63,    64,    65,     0,     0,    66,
      67,    68,     0,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     4,     0,     5,     6,     7,     8,
       0,     0,    80,     9,    10,     0,    11,     0,     0,     0,
       0,    81,     0,    82,    83,     0,     0,    84,     0,    85,
      86,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,     0,
       0,     0,    25,    26,    27,    28,    29,    30,    31,    32,
       0,    33,     0,     0,    34,    35,    36,    37,     0,    38,
      39,    40,     0,    41,     0,    42,     0,    43,     0,     0,
      44,     0,     0,     0,    45,    46,    47,    48,    49,    50,
       0,    52,    53,     0,     0,     0,     0,    55,    56,    57,
      58,     0,     0,     0,     0,    59,    60,    61,   474,    63,
      64,    65,     0,     0,     0,    67,    68,     0,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,     4,
       0,     5,     6,     7,     8,     0,     0,    80,     9,    10,
       0,    11,     0,     0,     0,     0,    81,     0,    82,    83,
     475,     0,    84,     0,    85,    86,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,     0,     0,     0,    25,    26,    27,
      28,    29,    30,    31,    32,     0,    33,     0,     0,    34,
      35,    36,    37,     0,    38,    39,    40,     0,    41,     0,
      42,     0,    43,     0,     0,    44,     0,     0,     0,    45,
      46,    47,    48,    49,    50,     0,    52,    53,     0,     0,
       0,     0,    55,    56,    57,    58,     0,     0,     0,     0,
      59,    60,    61,   474,    63,    64,    65,     0,     0,     0,
      67,    68,     0,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     4,     0,     5,     6,     7,     8,
       0,     0,    80,     9,    10,     0,    11,     0,     0,     0,
       0,    81,     0,    82,    83,   615,     0,    84,     0,    85,
      86,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,     0,
       0,     0,    25,    26,    27,    28,    29,    30,    31,    32,
       0,    33,     0,     0,    34,    35,    36,    37,   742,    38,
      39,    40,     0,    41,     0,    42,     0,    43,     0,     0,
      44,     0,     0,     0,    45,    46,    47,    48,    49,    50,
       0,    52,    53,     0,     0,     0,     0,    55,    56,    57,
      58,     0,     0,     0,     0,    59,    60,    61,   474,    63,
      64,    65,     0,     0,     0,    67,    68,     0,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,     4,
       0,     5,     6,     7,     8,     0,     0,    80,     9,    10,
       0,    11,     0,     0,     0,     0,    81,     0,    82,    83,
       0,     0,    84,     0,    85,    86,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,     0,     0,     0,    25,    26,    27,
      28,    29,    30,    31,    32,     0,    33,     0,     0,    34,
      35,    36,    37,     0,    38,    39,    40,   820,    41,     0,
      42,     0,    43,     0,     0,    44,     0,     0,     0,    45,
      46,    47,    48,    49,    50,     0,    52,    53,     0,     0,
       0,     0,    55,    56,    57,    58,     0,     0,     0,     0,
      59,    60,    61,   474,    63,    64,    65,     0,     0,     0,
      67,    68,     0,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     4,     0,     5,     6,     7,     8,
       0,     0,    80,     9,    10,     0,    11,     0,     0,     0,
       0,    81,     0,    82,    83,     0,     0,    84,     0,    85,
      86,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,     0,
       0,     0,    25,    26,    27,    28,    29,    30,    31,    32,
       0,    33,     0,     0,    34,    35,    36,    37,     0,    38,
      39,    40,     0,    41,     0,    42,     0,    43,   889,     0,
      44,     0,     0,     0,    45,    46,    47,    48,    49,    50,
       0,    52,    53,     0,     0,     0,     0,    55,    56,    57,
      58,     0,     0,     0,     0,    59,    60,    61,   474,    63,
      64,    65,     0,     0,     0,    67,    68,     0,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,     4,
       0,     5,     6,     7,     8,     0,     0,    80,     9,    10,
       0,    11,     0,     0,     0,     0,    81,     0,    82,    83,
       0,     0,    84,     0,    85,    86,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,     0,     0,     0,    25,    26,    27,
      28,    29,    30,    31,    32,     0,    33,     0,     0,    34,
      35,    36,    37,     0,    38,    39,    40,     0,    41,     0,
      42,   934,    43,     0,     0,    44,     0,     0,     0,    45,
      46,    47,    48,    49,    50,     0,    52,    53,     0,     0,
       0,     0,    55,    56,    57,    58,     0,     0,     0,     0,
      59,    60,    61,   474,    63,    64,    65,     0,     0,     0,
      67,    68,     0,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     4,     0,     5,     6,     7,     8,
       0,     0,    80,     9,    10,     0,    11,     0,     0,     0,
       0,    81,     0,    82,    83,     0,     0,    84,     0,    85,
      86,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,     0,
       0,     0,    25,    26,    27,    28,    29,    30,    31,    32,
       0,    33,     0,     0,    34,    35,    36,    37,     0,    38,
      39,    40,     0,    41,     0,    42,     0,    43,     0,     0,
      44,     0,     0,     0,    45,    46,    47,    48,    49,    50,
       0,    52,    53,     0,     0,     0,     0,    55,    56,    57,
      58,     0,     0,     0,     0,    59,    60,    61,   474,    63,
      64,    65,     0,     0,     0,    67,    68,     0,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,     4,
       0,     5,     6,     7,     8,     0,     0,    80,     9,    10,
       0,    11,     0,     0,     0,     0,    81,     0,    82,    83,
     944,     0,    84,     0,    85,    86,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,     0,     0,     0,    25,    26,    27,
      28,    29,    30,    31,    32,     0,    33,     0,     0,    34,
      35,    36,    37,     0,    38,    39,    40,     0,    41,  1002,
      42,     0,    43,     0,     0,    44,     0,     0,     0,    45,
      46,    47,    48,    49,    50,     0,    52,    53,     0,     0,
       0,     0,    55,    56,    57,    58,     0,     0,     0,     0,
      59,    60,    61,   474,    63,    64,    65,     0,     0,     0,
      67,    68,     0,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     4,     0,     5,     6,     7,     8,
       0,     0,    80,     9,    10,     0,    11,     0,     0,     0,
       0,    81,     0,    82,    83,     0,     0,    84,     0,    85,
      86,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,     0,
       0,     0,    25,    26,    27,    28,    29,    30,    31,    32,
       0,    33,     0,     0,    34,    35,    36,    37,     0,    38,
      39,    40,     0,    41,     0,    42,     0,    43,     0,     0,
      44,     0,     0,     0,    45,    46,    47,    48,    49,    50,
       0,    52,    53,     0,     0,     0,     0,    55,    56,    57,
      58,     0,     0,     0,     0,    59,    60,    61,   474,    63,
      64,    65,     0,     0,     0,    67,    68,     0,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,     4,
       0,     5,     6,     7,     8,     0,     0,    80,     9,    10,
       0,    11,     0,     0,     0,     0,    81,     0,    82,    83,
    1034,     0,    84,     0,    85,    86,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,     0,     0,     0,    25,    26,    27,
      28,    29,    30,    31,    32,     0,    33,     0,     0,    34,
      35,    36,    37,     0,    38,    39,    40,     0,    41,     0,
      42,     0,    43,     0,     0,    44,     0,     0,     0,    45,
      46,    47,    48,    49,    50,     0,    52,    53,     0,     0,
       0,     0,    55,    56,    57,    58,     0,     0,     0,     0,
      59,    60,    61,   474,    63,    64,    65,     0,     0,     0,
      67,    68,     0,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     4,     0,     5,     6,     7,     8,
       0,     0,    80,     9,    10,     0,    11,     0,     0,     0,
       0,    81,     0,    82,    83,  1035,     0,    84,     0,    85,
      86,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,     0,
       0,     0,    25,    26,    27,    28,    29,    30,    31,    32,
       0,    33,     0,     0,    34,    35,    36,    37,     0,    38,
      39,    40,     0,    41,     0,    42,     0,    43,     0,     0,
      44,     0,     0,     0,    45,    46,    47,    48,    49,    50,
       0,    52,    53,     0,     0,     0,     0,    55,    56,    57,
      58,     0,     0,     0,     0,    59,    60,    61,   474,    63,
      64,    65,     0,     0,     0,    67,    68,     0,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,     4,
       0,     5,     6,     7,     8,     0,     0,    80,     9,    10,
       0,    11,     0,     0,     0,     0,    81,     0,    82,    83,
    1036,     0,    84,     0,    85,    86,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,     0,     0,     0,    25,    26,    27,
      28,    29,    30,    31,    32,     0,    33,     0,     0,    34,
      35,    36,    37,     0,    38,    39,    40,     0,    41,     0,
      42,     0,    43,     0,     0,    44,     0,     0,     0,    45,
      46,    47,    48,    49,    50,     0,    52,    53,     0,     0,
       0,     0,    55,    56,    57,    58,     0,     0,     0,     0,
      59,    60,    61,   474,    63,    64,    65,     0,     0,     0,
      67,    68,     0,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     4,     0,     5,     6,     7,     8,
       0,     0,    80,     9,    10,     0,    11,     0,     0,     0,
       0,    81,     0,    82,    83,  1049,     0,    84,     0,    85,
      86,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,     0,
       0,     0,    25,    26,    27,    28,    29,    30,    31,    32,
       0,    33,     0,     0,    34,    35,    36,    37,     0,    38,
      39,    40,     0,    41,     0,    42,     0,    43,     0,     0,
      44,     0,     0,     0,    45,    46,    47,    48,    49,    50,
       0,    52,    53,     0,     0,     0,     0,    55,    56,    57,
      58,     0,     0,     0,     0,    59,    60,    61,   474,    63,
      64,    65,     0,     0,     0,    67,    68,     0,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,     0,
       0,     0,     0,     0,     0,     0,     0,    80,     0,     0,
       0,     0,     0,     0,     0,     0,    81,     0,    82,    83,
     340,   341,    84,     0,    85,    86,    87,   209,     0,   210,
     211,   212,   213,   214,   215,   216,   217,   218,     0,     0,
     342,     0,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,     0,   366,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   367,     0,     0,     0,
     219,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   220,     0,   221,   222,     0,     0,   223,     0,     0,
       0,    31,     0,     0,     0,     0,     0,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,     0,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,     4,
       0,     5,     6,     7,     8,     0,     0,     0,     9,    10,
       0,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   563,     0,     0,     0,     0,   688,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,     0,     0,     0,    25,    26,    27,
      28,    29,    30,    31,    32,     0,    33,     0,     0,    34,
      35,    36,    37,     0,    38,    39,    40,     0,    41,     0,
      42,     0,    43,     0,     0,    44,     0,     0,     0,    45,
      46,    47,    48,    49,    50,     0,    52,    53,     0,     0,
       0,     0,    55,    56,     0,     0,     0,     0,     0,     0,
      59,    60,    61,     0,     0,     0,     0,     0,     0,     0,
      67,    68,     0,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     4,     0,     5,     6,     7,     8,
       0,     0,    80,     9,    10,     0,    11,     0,     0,     0,
       0,    81,     0,    82,    83,     0,     0,    84,     0,    85,
      86,    87,   691,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,     0,
       0,     0,    25,    26,    27,    28,    29,    30,    31,    32,
       0,    33,     0,     0,    34,    35,    36,    37,     0,    38,
      39,    40,     0,    41,     0,    42,     0,    43,     0,     0,
      44,     0,     0,     0,    45,    46,    47,    48,    49,    50,
       0,    52,    53,     0,     0,     0,     0,    55,    56,     0,
       0,     0,     0,     0,     0,    59,    60,    61,     0,     0,
       0,     0,     0,     0,     0,    67,    68,     0,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,     4,
       0,     5,     6,     7,     8,     0,     0,    80,     9,    10,
       0,    11,     0,     0,     0,     0,    81,     0,    82,    83,
       0,     0,    84,     0,    85,    86,    87,   767,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,     0,     0,     0,    25,    26,    27,
      28,    29,    30,    31,    32,     0,    33,     0,     0,    34,
      35,    36,    37,     0,    38,    39,    40,     0,    41,     0,
      42,     0,    43,     0,     0,    44,     0,     0,     0,    45,
      46,    47,    48,    49,    50,     0,    52,    53,     0,     0,
       0,     0,    55,    56,     0,     0,     0,     0,     0,     0,
      59,    60,    61,     0,     0,     0,     0,     0,     0,     0,
      67,    68,     0,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     4,     0,     5,     6,     7,     8,
       0,     0,    80,     9,    10,     0,    11,     0,     0,     0,
       0,    81,     0,    82,    83,     0,     0,    84,     0,    85,
      86,    87,   825,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,     0,
       0,     0,    25,    26,    27,    28,    29,    30,    31,    32,
       0,    33,     0,     0,    34,    35,    36,    37,     0,    38,
      39,    40,     0,    41,     0,    42,     0,    43,     0,     0,
      44,     0,     0,     0,    45,    46,    47,    48,    49,    50,
       0,    52,    53,     0,     0,     0,     0,    55,    56,     0,
       0,     0,     0,     0,     0,    59,    60,    61,     0,     0,
       0,     0,     0,     0,     0,    67,    68,     0,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,     4,
       0,     5,     6,     7,     8,     0,     0,    80,     9,    10,
       0,    11,     0,     0,     0,     0,    81,     0,    82,    83,
       0,     0,    84,     0,    85,    86,    87,   930,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,     0,     0,     0,    25,    26,    27,
      28,    29,    30,    31,    32,     0,    33,     0,     0,    34,
      35,    36,    37,     0,    38,    39,    40,     0,    41,     0,
      42,     0,    43,     0,     0,    44,     0,     0,     0,    45,
      46,    47,    48,    49,    50,     0,    52,    53,     0,     0,
       0,     0,    55,    56,     0,     0,     0,     0,     0,     0,
      59,    60,    61,     0,     0,     0,     0,     0,     0,     0,
      67,    68,     0,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     4,     0,     5,     6,     7,     8,
       0,     0,    80,     9,    10,     0,    11,     0,     0,     0,
       0,    81,     0,    82,    83,     0,     0,    84,     0,    85,
      86,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,     0,
       0,     0,    25,    26,    27,    28,    29,    30,    31,    32,
       0,    33,     0,     0,    34,    35,    36,    37,     0,    38,
      39,    40,     0,    41,     0,    42,     0,    43,     0,     0,
      44,     0,     0,     0,    45,    46,    47,    48,    49,    50,
       0,    52,    53,     0,     0,     0,     0,    55,    56,     0,
       0,     0,     0,     0,     0,    59,    60,    61,     0,     0,
       0,     0,     0,     0,     0,    67,    68,     0,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,     4,
       0,     5,     6,     7,     8,     0,     0,    80,     9,    10,
       0,    11,     0,     0,     0,     0,    81,     0,    82,    83,
       0,     0,    84,     0,    85,    86,    87,     0,     0,     0,
       0,     0,     0,   311,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,     0,     0,     0,    25,    26,   125,
      28,    29,    30,    31,     0,     0,    33,     0,     0,    34,
      35,    36,  -527,  -527,  -527,  -527,  -527,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,    45,
     366,     0,     0,    49,    50,     0,     0,     0,     0,     0,
     367,     0,     0,   126,     0,     0,     0,     0,     0,     0,
       0,    60,    61,     0,     0,     0,     0,     0,     0,     0,
     312,    68,     0,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     4,     0,     5,     6,     7,     8,
       0,     0,    80,     9,    10,     0,    11,     0,   313,     0,
       0,    81,     0,     0,     0,     0,     0,    84,     0,    85,
      86,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,     0,
       0,     0,    25,    26,   125,    28,    29,    30,    31,     0,
       0,    33,   467,     0,    34,    35,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    45,     0,     0,     0,    49,    50,
       0,     0,     0,     0,     0,     0,     0,     0,   126,     0,
       0,     0,     0,     0,     0,     0,    60,    61,     0,     0,
       0,     0,     0,     0,     0,    67,    68,     0,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,     4,
       0,     5,     6,     7,     8,     0,     0,    80,     9,    10,
       0,    11,     0,     0,     0,     0,    81,     0,     0,     0,
       0,     0,    84,     0,    85,    86,    87,   533,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,     0,     0,     0,    25,    26,   125,
      28,    29,    30,    31,     0,     0,    33,     0,     0,    34,
      35,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    45,
       0,     0,     0,    49,    50,     0,     0,     0,     0,     0,
       0,     0,     0,   126,     0,     0,     0,     0,     0,     0,
       0,    60,    61,     0,     0,     0,     0,     0,     0,     0,
      67,    68,     0,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     4,     0,     5,     6,     7,     8,
       0,     0,    80,     9,    10,     0,    11,     0,     0,     0,
       0,    81,     0,     0,     0,     0,     0,    84,     0,    85,
      86,    87,     0,     0,     0,     0,     0,     0,   577,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,     0,
       0,     0,    25,    26,   125,    28,    29,    30,    31,     0,
       0,    33,     0,     0,    34,    35,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    45,     0,     0,     0,    49,    50,
       0,     0,     0,     0,     0,     0,     0,     0,   126,     0,
       0,     0,     0,     0,     0,     0,    60,    61,     0,     0,
       0,     0,     0,     0,     0,    67,    68,     0,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,     4,
       0,     5,     6,     7,     8,     0,     0,    80,     9,    10,
       0,    11,     0,     0,     0,     0,    81,     0,     0,     0,
       0,     0,    84,     0,    85,    86,    87,     0,     0,     0,
       0,     0,     0,   657,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,     0,     0,     0,    25,    26,   125,
      28,    29,    30,    31,     0,     0,    33,     0,     0,    34,
      35,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    45,
       0,     0,     0,    49,    50,     0,     0,     0,     0,     0,
       0,     0,     0,   126,     0,     0,     0,     0,     0,     0,
       0,    60,    61,     0,     0,     0,     0,     0,     0,     0,
     658,    68,     0,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     4,     0,     5,     6,     7,     8,
       0,     0,    80,     9,    10,     0,    11,     0,     0,     0,
       0,    81,     0,     0,     0,     0,     0,    84,     0,    85,
      86,    87,   -47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,     0,
       0,     0,    25,    26,   125,    28,    29,    30,    31,     0,
       0,    33,     0,     0,    34,    35,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    45,     0,     0,     0,    49,    50,
       0,     0,     0,     0,     0,     0,     0,     0,   126,     0,
       0,     0,     0,     0,     0,     0,    60,    61,     0,     0,
       0,     0,     0,     0,     0,    67,    68,     0,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,     4,
       0,     5,     6,     7,     8,     0,     0,    80,     9,    10,
       0,    11,     0,     0,     0,     0,    81,     0,     0,     0,
       0,     0,    84,     0,    85,    86,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,     0,     0,     0,    25,    26,   125,
      28,    29,    30,    31,     0,     0,    33,     0,     0,    34,
      35,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   774,    45,
       0,     0,     0,    49,    50,     0,     0,     0,     0,     0,
       0,     0,     0,   126,     0,     0,     0,     0,     0,     0,
       0,    60,    61,     0,     0,     0,     0,     0,     0,     0,
      67,    68,     0,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     4,     0,     5,     6,     7,     8,
       0,     0,    80,     9,    10,     0,    11,     0,     0,     0,
       0,    81,     0,     0,     0,     0,     0,    84,     0,    85,
      86,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,     0,
       0,     0,    25,    26,   125,    28,    29,    30,    31,     0,
       0,    33,     0,     0,    34,    35,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    45,     0,     0,     0,    49,    50,
       0,     0,     0,     0,     0,     0,     0,     0,   126,     0,
       0,     0,     0,     0,     0,     0,    60,    61,     0,     0,
       0,     0,     0,     0,     0,    67,    68,     0,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,     0,
       0,     0,     0,     0,     0,     0,     0,    80,     0,     0,
       0,     0,     0,     0,     0,     0,    81,   339,   340,   341,
       0,     0,    84,     0,    85,    86,    87,   209,     0,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   342,     0,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,     0,   366,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   367,     0,     0,     0,     0,     0,
     219,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   220,     0,   221,   222,     0,     0,   497,    28,    29,
      30,     0,     0,     0,     0,     0,     0,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   974,   260,   261,   262,   263,   264,   265,   266,   267,
     268,     0,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   209,
       0,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     797,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   342,   975,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,     0,   366,     0,
       0,     0,   219,     0,     0,     0,     0,     0,   367,     0,
       0,     0,     0,   220,     0,   221,   222,     0,     0,   497,
      28,    29,    30,     0,     0,     0,     0,     0,     0,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   974,   260,   261,   262,   263,   264,   265,
     266,   267,   268,     0,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,     0,     0,   339,   340,   341,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   342,  1004,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,     0,
     366,   339,   340,   341,     0,     0,     0,     0,     0,     0,
     367,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   342,     0,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,     0,   366,   339,
     340,   341,     0,     0,     0,     0,     0,     0,   367,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     342,     0,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,     0,   366,   339,   340,   341,
       0,     0,     0,     0,     0,     0,   367,     0,     0,     0,
       0,     0,     0,   662,     0,     0,     0,     0,   342,     0,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,     0,   366,   339,   340,   341,     0,     0,
       0,     0,     0,     0,   367,     0,     0,     0,     0,     0,
       0,   682,     0,     0,     0,     0,   342,     0,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,     0,   366,   339,   340,   341,     0,     0,     0,     0,
       0,     0,   367,     0,     0,     0,     0,     0,     0,   686,
       0,     0,     0,     0,   342,   893,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,     0,
     366,   339,   340,   341,     0,     0,     0,     0,     0,     0,
     367,     0,     0,     0,     0,     0,     0,   755,     0,     0,
       0,     0,   342,     0,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,     0,   366,   339,
     340,   341,     0,     0,     0,     0,     0,     0,   367,     0,
       0,     0,     0,     0,     0,   756,     0,     0,     0,     0,
     342,     0,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,     0,   366,   339,   340,   341,
       0,     0,     0,     0,     0,     0,   367,     0,     0,     0,
       0,   894,     0,     0,     0,     0,     0,     0,   342,     0,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,     0,   366,   339,   340,   341,     0,     0,
       0,     0,     0,     0,   367,     0,     0,     0,     0,   368,
       0,     0,     0,     0,     0,     0,   342,     0,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,     0,   366,   339,   340,   341,     0,     0,     0,     0,
       0,     0,   367,     0,     0,     0,   473,     0,     0,     0,
       0,     0,     0,     0,   342,     0,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,     0,
     366,   339,   340,   341,     0,     0,     0,     0,     0,     0,
     367,     0,     0,     0,   593,     0,     0,     0,     0,     0,
       0,     0,   342,     0,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,     0,   366,   339,
     340,   341,     0,     0,     0,     0,     0,     0,   367,     0,
       0,     0,   595,     0,     0,     0,     0,     0,     0,     0,
     342,     0,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,     0,   366,   339,   340,   341,
       0,     0,     0,     0,     0,     0,   367,     0,     0,     0,
     603,     0,     0,     0,     0,     0,     0,     0,   342,     0,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,     0,   366,   339,   340,   341,     0,     0,
       0,     0,     0,     0,   367,     0,     0,     0,   606,     0,
       0,     0,     0,     0,     0,     0,   342,     0,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,     0,   366,   339,   340,   341,     0,     0,     0,     0,
       0,     0,   367,     0,     0,     0,   611,     0,     0,     0,
       0,     0,     0,     0,   342,     0,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,     0,
     366,   339,   340,   341,     0,     0,     0,     0,     0,     0,
     367,     0,     0,     0,   612,     0,     0,     0,     0,     0,
       0,     0,   342,     0,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,     0,   366,   339,
     340,   341,     0,     0,     0,     0,     0,     0,   367,     0,
       0,     0,   630,     0,     0,     0,     0,     0,     0,     0,
     342,     0,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,     0,   366,   339,   340,   341,
       0,   125,    28,    29,    30,    31,   367,     0,    33,     0,
     641,     0,     0,     0,     0,     0,     0,     0,   342,     0,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,     0,   366,   152,     0,     0,     0,     0,
       0,     0,     0,     0,   367,     0,     0,     0,   740,     0,
       0,     0,     0,    68,     0,    69,    70,    71,    72,    73,
      74,    75,    76,     0,     0,   209,     0,   210,   211,   212,
     213,   214,   215,   216,   217,   218,     0,     0,     0,     0,
       0,     0,     0,   295,     0,     0,     0,     0,     0,   296,
       0,     0,    86,    87,     0,     0,   741,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,     0,   366,   219,     0,
       0,     0,     0,     0,     0,     0,     0,   367,     0,   220,
       0,   221,   222,     0,     0,   223,     0,     0,   224,     0,
       0,     0,     0,     0,   759,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,     0,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   209,   341,   210,
     211,   212,   213,   214,   215,   216,   217,   218,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   342,     0,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,     0,   366,     0,     0,     0,     0,     0,     0,
     219,     0,     0,   367,     0,     0,     0,     0,     0,     0,
       0,   220,     0,   221,   222,     0,     0,   223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,     0,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   209,
       0,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,     0,   366,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   367,     0,     0,     0,     0,     0,
       0,     0,   219,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   220,     0,   221,   222,     0,     0,  1024,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   851,   852,   853,   854,   855,   856,   265,
     266,   267,   268,     0,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   339,   340,   341,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   342,     0,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,     0,   366,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   367,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   339,   340,
     341,     0,     0,   483,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   342,
     609,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,     0,   366,   339,   340,   341,     0,
       0,     0,     0,     0,     0,   367,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   342,   672,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,     0,   366,   339,   340,   341,     0,     0,     0,
       0,     0,     0,   367,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   342,     0,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     396,   366,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   367,     0,     0,     0,     0,   342,     0,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,     0,   366,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   367,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,     0,   366,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   367,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,     0,   366,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   367,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,     0,   366,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   367
};

static const yytype_int16 yycheck[] =
{
       2,     2,     2,    35,   109,   370,    88,    54,   719,    90,
      56,   291,   292,   191,   675,     2,   296,   456,   607,    14,
      47,   864,   447,    31,   129,    52,   709,   751,    31,    66,
     713,    73,    31,    35,   880,    77,   882,   119,    98,    78,
      79,    35,    14,    77,    90,    77,   127,    14,    14,    77,
     594,    31,    39,   101,   102,   166,   101,   102,   183,   170,
      51,   703,    98,   685,    77,   167,    79,    77,   170,    79,
      77,     0,    79,   148,   149,   156,    37,    35,   107,   108,
     126,   127,    73,    77,   808,    31,    77,   452,    77,    90,
      90,    82,   753,    78,    79,   520,   171,    55,   165,    78,
      79,   161,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    77,   739,    98,    35,
     926,   169,   928,   667,   169,   161,   168,   160,   770,    87,
     772,   160,   165,   175,   168,   162,    78,    79,   862,   850,
     165,   175,   794,    56,   191,   158,   159,   175,   158,   159,
     165,   158,   159,    66,   878,   879,   107,    77,   109,    30,
     168,    77,   165,   202,   847,  1008,    66,   174,   167,   158,
     159,   166,   761,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,   166,  1041,   561,   849,   637,   166,
     166,   481,    73,    74,    75,    76,    73,    38,   915,    76,
    1016,    77,   294,    79,   166,    46,    47,   202,   170,    73,
      77,    52,    79,   202,    77,    77,    79,    73,  1034,  1035,
      76,   883,   146,   147,   148,   149,  1042,   157,   158,   159,
    1046,    73,    74,    75,    76,   169,   160,   171,   613,   168,
      81,   958,   959,    84,   168,   107,   108,   171,   165,   437,
     202,   107,   914,   109,   135,   136,   375,   306,    73,    30,
     167,   636,   311,   170,    73,    74,    75,    76,    77,    69,
      70,   167,   328,   165,   170,   710,    73,    74,    75,    76,
      77,   157,   158,   159,   128,   404,   405,    87,  1009,    37,
     157,   158,   159,   135,   136,   158,   159,   167,   310,   310,
     170,   145,    73,    74,    75,    76,    73,    74,   117,    76,
     151,   306,   167,   154,   749,   170,   311,   306,   165,   128,
     117,   162,   311,   164,   366,   372,   373,   165,   169,   170,
     171,   165,   173,   174,   107,   108,   145,   165,   335,   774,
     377,   776,   165,   778,   117,   720,   117,    73,    74,    75,
      76,   165,   787,   165,   306,   165,   165,   118,   119,   311,
    1031,   165,   203,   204,   135,   136,   175,   128,   165,   148,
     149,   408,   145,    69,    70,   120,   121,   122,   175,   165,
     437,   160,   757,   107,   108,   476,   120,   121,   122,   168,
     160,   117,   171,   528,    73,    74,   160,    76,   366,   165,
     145,   120,   121,   122,   372,   373,   374,   375,   698,   135,
     136,   145,    73,    74,    75,    76,   167,   429,   429,   170,
     476,   166,   160,   148,   149,   800,   145,   160,   107,    16,
     109,   167,   166,   401,   170,   160,   404,   405,   406,   167,
     366,    90,   170,   168,   734,   165,   171,    16,   504,   167,
     291,   292,   112,   113,   295,   296,   117,   499,   167,   168,
     167,   170,   167,   168,   305,   476,   476,   167,   148,   149,
     167,   439,   313,   763,   566,    85,    86,   569,   167,   166,
     160,   573,   574,   324,    73,   326,   167,   499,   168,   166,
     166,   171,    73,   170,   170,   172,   172,    73,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   168,   367,   165,   577,   165,
     965,   499,   100,   101,   102,   376,   377,   172,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   170,   688,   173,   396,   691,   165,   107,   108,
     609,   100,   101,   102,   165,    31,   407,   408,   117,   118,
     119,   412,   167,   499,   949,   148,   149,   626,    73,   128,
     129,   130,   577,   166,   425,   165,   961,   160,   577,   167,
     632,   170,   165,   635,    73,   168,   145,   168,   171,   440,
     167,   148,   149,    77,   170,   170,   603,   167,   657,   606,
     148,   149,   131,   160,   609,   131,   991,   168,   165,   172,
     609,   168,   166,   166,   171,   577,   638,   638,   638,    73,
     168,   626,   767,   171,    73,   169,  1011,   626,  1013,   165,
     481,   638,   483,    16,   485,    31,    31,   696,   489,   490,
     491,   492,   493,   494,   495,   496,   747,   609,   670,   670,
      31,   673,   657,   675,    31,   148,   149,   802,   657,    31,
      31,    31,    31,    31,   626,    31,   517,   719,    31,   170,
      73,   165,   172,   165,   525,   168,   527,   165,   171,   165,
     825,   172,   533,   117,   118,   119,   120,   121,   122,   123,
     168,   696,    98,   168,   701,   657,   632,   696,   843,   635,
     166,   166,   132,   725,   725,   725,   765,   168,    16,   165,
     172,   145,   563,   166,   166,    82,   166,   165,   725,   165,
     571,   114,   167,   165,   117,   118,   119,   120,   121,   122,
     123,   753,   167,   740,   696,   167,   758,   758,   760,   760,
     114,   793,    98,   117,   118,   119,   120,   121,   122,   123,
     895,   170,   145,   167,   605,   170,   607,   608,   859,   766,
     765,    52,    53,    54,   168,    56,   765,   167,    31,   167,
     792,   145,   166,   170,   166,    66,   169,   628,   167,   165,
     170,   172,   169,   719,   806,   930,   911,    73,   170,   169,
     842,   170,   937,   168,   170,   169,   169,    31,   850,    37,
     651,   166,    35,   765,   168,    35,   828,   828,   166,   660,
     114,   168,   167,   664,   665,   751,   166,   166,   166,    14,
     114,   672,   167,   117,   118,   119,   120,   121,   122,   123,
     114,    14,   169,   117,   118,   119,   120,   121,   122,   123,
     168,    14,   863,   162,   303,   867,   167,   698,   307,   871,
     871,   145,   997,   910,   705,   165,  1001,   793,  1003,    77,
     319,   145,   321,   322,   323,   167,   888,   888,    35,    35,
      77,   167,   808,   166,    16,   169,   727,    16,   885,   168,
     887,   903,   903,   734,   906,   169,    77,   170,   168,   941,
     947,   168,   160,   167,   167,   947,    98,    16,   955,   115,
    1045,   160,   166,  1008,   165,   167,   842,   929,   166,    54,
     761,    96,   763,   191,   850,   785,   938,   938,   437,   172,
     977,   626,   765,   887,   892,   977,   862,   838,   806,   747,
     862,   439,   665,   990,   956,   442,   872,   859,   977,   990,
     427,   987,   878,   879,   412,   156,   366,   969,   969,   971,
     971,   398,   373,  1010,   485,    37,   999,  1009,    -1,   114,
     628,    -1,   117,   118,   119,   120,   121,   122,   123,  1026,
      48,    49,    50,    51,    52,    53,    54,    -1,    56,   915,
     831,    -1,    -1,    -1,    -1,    -1,    -1,   838,    66,   840,
     145,    73,    74,    75,    76,    77,  1018,  1018,    80,  1021,
    1021,  1023,  1023,    -1,    -1,   941,    -1,    -1,    -1,  1031,
      -1,   947,    -1,    -1,   169,    50,    51,    52,    53,    54,
      -1,    56,   958,   959,    -1,  1047,  1047,    -1,    -1,    -1,
      -1,    66,    -1,    -1,    -1,   117,    -1,    -1,    -1,    -1,
      -1,   977,    -1,    -1,    -1,    -1,   897,    -1,    -1,   900,
      -1,    -1,   134,   135,    -1,   137,   138,   139,   140,   141,
     142,   143,   144,    -1,   107,    -1,   109,    -1,    -1,    -1,
      -1,    -1,    -1,  1009,   117,   118,   119,   120,   121,   122,
      -1,    -1,    -1,   165,    -1,    -1,    -1,    -1,    -1,   171,
      -1,    -1,   174,   175,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    56,   984,    -1,    -1,    -1,   988,    -1,    -1,
      -1,    -1,    66,    -1,   995,    -1,    -1,    -1,    50,    51,
      -1,    -1,    -1,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    67,  1017,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    -1,    -1,    80,    -1,
      -1,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,    -1,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   156,    -1,    -1,    -1,    -1,    -1,
     162,    -1,    -1,   165,   166,    -1,     9,    10,    11,   171,
      -1,   173,   174,   175,     3,    -1,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    66,    -1,    -1,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    67,    -1,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    -1,
      -1,    80,    -1,    -1,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,    -1,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,     3,
      -1,     5,     6,     7,     8,    -1,   169,   156,    12,    13,
      -1,    15,    -1,   162,    -1,    -1,   165,    -1,    -1,    -1,
      -1,    -1,   171,    -1,   173,   174,   175,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      66,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    80,    -1,    -1,    83,
      84,    85,    86,    -1,    88,    89,    90,    -1,    92,    -1,
      94,    -1,    96,    -1,    -1,    99,    -1,    -1,    -1,   103,
     104,   105,   106,   107,   108,   109,   110,   111,    -1,    -1,
     114,    -1,   116,   117,   118,   119,    -1,    -1,    -1,    -1,
     124,   125,   126,   127,   128,   129,   130,    -1,    -1,   133,
     134,   135,    -1,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,     3,    -1,     5,     6,     7,     8,
      -1,    -1,   156,    12,    13,    -1,    15,    -1,    -1,    -1,
      -1,   165,    -1,   167,   168,   169,    -1,   171,    -1,   173,
     174,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    67,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    80,    -1,    -1,    83,    84,    85,    86,    -1,    88,
      89,    90,    -1,    92,    -1,    94,    -1,    96,    -1,    -1,
      99,    -1,    -1,    -1,   103,   104,   105,   106,   107,   108,
     109,   110,   111,    -1,    -1,   114,    -1,   116,   117,   118,
     119,    -1,    -1,    -1,    -1,   124,   125,   126,   127,   128,
     129,   130,    -1,    -1,   133,   134,   135,    -1,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,     3,
      -1,     5,     6,     7,     8,    -1,    -1,   156,    12,    13,
      -1,    15,    -1,    -1,    -1,    -1,   165,    -1,   167,   168,
     169,    -1,   171,    -1,   173,   174,   175,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      -1,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    80,    -1,    -1,    83,
      84,    85,    86,    -1,    88,    89,    90,    -1,    92,    -1,
      94,    -1,    96,    -1,    -1,    99,    -1,    -1,    -1,   103,
     104,   105,   106,   107,   108,   109,   110,   111,    -1,    -1,
     114,    -1,   116,   117,   118,   119,    -1,    -1,    -1,    -1,
     124,   125,   126,   127,   128,   129,   130,    -1,    -1,   133,
     134,   135,    -1,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,     3,    -1,     5,     6,     7,     8,
      -1,    -1,   156,    12,    13,    -1,    15,    -1,    -1,    -1,
      -1,   165,    -1,   167,   168,    -1,    -1,   171,    -1,   173,
     174,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    67,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    80,    -1,    -1,    83,    84,    85,    86,    -1,    88,
      89,    90,    -1,    92,    -1,    94,    -1,    96,    -1,    -1,
      99,    -1,    -1,    -1,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,    -1,    -1,    -1,    -1,   116,   117,   118,
     119,    -1,    -1,    -1,    -1,   124,   125,   126,   127,   128,
     129,   130,    -1,    -1,    -1,   134,   135,    -1,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,     3,
      -1,     5,     6,     7,     8,    -1,    -1,   156,    12,    13,
      -1,    15,    -1,    -1,    -1,    -1,   165,    -1,   167,   168,
     169,    -1,   171,    -1,   173,   174,   175,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      -1,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    80,    -1,    -1,    83,
      84,    85,    86,    -1,    88,    89,    90,    -1,    92,    -1,
      94,    -1,    96,    -1,    -1,    99,    -1,    -1,    -1,   103,
     104,   105,   106,   107,   108,    -1,   110,   111,    -1,    -1,
      -1,    -1,   116,   117,   118,   119,    -1,    -1,    -1,    -1,
     124,   125,   126,   127,   128,   129,   130,    -1,    -1,    -1,
     134,   135,    -1,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,     3,    -1,     5,     6,     7,     8,
      -1,    -1,   156,    12,    13,    -1,    15,    -1,    -1,    -1,
      -1,   165,    -1,   167,   168,   169,    -1,   171,    -1,   173,
     174,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    67,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    80,    -1,    -1,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    92,    -1,    94,    -1,    96,    -1,    -1,
      99,    -1,    -1,    -1,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,    -1,    -1,    -1,    -1,   116,   117,   118,
     119,    -1,    -1,    -1,    -1,   124,   125,   126,   127,   128,
     129,   130,    -1,    -1,    -1,   134,   135,    -1,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,     3,
      -1,     5,     6,     7,     8,    -1,    -1,   156,    12,    13,
      -1,    15,    -1,    -1,    -1,    -1,   165,    -1,   167,   168,
      -1,    -1,   171,    -1,   173,   174,   175,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      -1,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    80,    -1,    -1,    83,
      84,    85,    86,    -1,    88,    89,    90,    91,    92,    -1,
      94,    -1,    96,    -1,    -1,    99,    -1,    -1,    -1,   103,
     104,   105,   106,   107,   108,    -1,   110,   111,    -1,    -1,
      -1,    -1,   116,   117,   118,   119,    -1,    -1,    -1,    -1,
     124,   125,   126,   127,   128,   129,   130,    -1,    -1,    -1,
     134,   135,    -1,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,     3,    -1,     5,     6,     7,     8,
      -1,    -1,   156,    12,    13,    -1,    15,    -1,    -1,    -1,
      -1,   165,    -1,   167,   168,    -1,    -1,   171,    -1,   173,
     174,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    67,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    80,    -1,    -1,    83,    84,    85,    86,    -1,    88,
      89,    90,    -1,    92,    -1,    94,    -1,    96,    97,    -1,
      99,    -1,    -1,    -1,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,    -1,    -1,    -1,    -1,   116,   117,   118,
     119,    -1,    -1,    -1,    -1,   124,   125,   126,   127,   128,
     129,   130,    -1,    -1,    -1,   134,   135,    -1,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,     3,
      -1,     5,     6,     7,     8,    -1,    -1,   156,    12,    13,
      -1,    15,    -1,    -1,    -1,    -1,   165,    -1,   167,   168,
      -1,    -1,   171,    -1,   173,   174,   175,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      -1,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    80,    -1,    -1,    83,
      84,    85,    86,    -1,    88,    89,    90,    -1,    92,    -1,
      94,    95,    96,    -1,    -1,    99,    -1,    -1,    -1,   103,
     104,   105,   106,   107,   108,    -1,   110,   111,    -1,    -1,
      -1,    -1,   116,   117,   118,   119,    -1,    -1,    -1,    -1,
     124,   125,   126,   127,   128,   129,   130,    -1,    -1,    -1,
     134,   135,    -1,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,     3,    -1,     5,     6,     7,     8,
      -1,    -1,   156,    12,    13,    -1,    15,    -1,    -1,    -1,
      -1,   165,    -1,   167,   168,    -1,    -1,   171,    -1,   173,
     174,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    67,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    80,    -1,    -1,    83,    84,    85,    86,    -1,    88,
      89,    90,    -1,    92,    -1,    94,    -1,    96,    -1,    -1,
      99,    -1,    -1,    -1,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,    -1,    -1,    -1,    -1,   116,   117,   118,
     119,    -1,    -1,    -1,    -1,   124,   125,   126,   127,   128,
     129,   130,    -1,    -1,    -1,   134,   135,    -1,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,     3,
      -1,     5,     6,     7,     8,    -1,    -1,   156,    12,    13,
      -1,    15,    -1,    -1,    -1,    -1,   165,    -1,   167,   168,
     169,    -1,   171,    -1,   173,   174,   175,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      -1,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    80,    -1,    -1,    83,
      84,    85,    86,    -1,    88,    89,    90,    -1,    92,    93,
      94,    -1,    96,    -1,    -1,    99,    -1,    -1,    -1,   103,
     104,   105,   106,   107,   108,    -1,   110,   111,    -1,    -1,
      -1,    -1,   116,   117,   118,   119,    -1,    -1,    -1,    -1,
     124,   125,   126,   127,   128,   129,   130,    -1,    -1,    -1,
     134,   135,    -1,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,     3,    -1,     5,     6,     7,     8,
      -1,    -1,   156,    12,    13,    -1,    15,    -1,    -1,    -1,
      -1,   165,    -1,   167,   168,    -1,    -1,   171,    -1,   173,
     174,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    67,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    80,    -1,    -1,    83,    84,    85,    86,    -1,    88,
      89,    90,    -1,    92,    -1,    94,    -1,    96,    -1,    -1,
      99,    -1,    -1,    -1,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,    -1,    -1,    -1,    -1,   116,   117,   118,
     119,    -1,    -1,    -1,    -1,   124,   125,   126,   127,   128,
     129,   130,    -1,    -1,    -1,   134,   135,    -1,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,     3,
      -1,     5,     6,     7,     8,    -1,    -1,   156,    12,    13,
      -1,    15,    -1,    -1,    -1,    -1,   165,    -1,   167,   168,
     169,    -1,   171,    -1,   173,   174,   175,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      -1,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    80,    -1,    -1,    83,
      84,    85,    86,    -1,    88,    89,    90,    -1,    92,    -1,
      94,    -1,    96,    -1,    -1,    99,    -1,    -1,    -1,   103,
     104,   105,   106,   107,   108,    -1,   110,   111,    -1,    -1,
      -1,    -1,   116,   117,   118,   119,    -1,    -1,    -1,    -1,
     124,   125,   126,   127,   128,   129,   130,    -1,    -1,    -1,
     134,   135,    -1,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,     3,    -1,     5,     6,     7,     8,
      -1,    -1,   156,    12,    13,    -1,    15,    -1,    -1,    -1,
      -1,   165,    -1,   167,   168,   169,    -1,   171,    -1,   173,
     174,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    67,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    80,    -1,    -1,    83,    84,    85,    86,    -1,    88,
      89,    90,    -1,    92,    -1,    94,    -1,    96,    -1,    -1,
      99,    -1,    -1,    -1,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,    -1,    -1,    -1,    -1,   116,   117,   118,
     119,    -1,    -1,    -1,    -1,   124,   125,   126,   127,   128,
     129,   130,    -1,    -1,    -1,   134,   135,    -1,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,     3,
      -1,     5,     6,     7,     8,    -1,    -1,   156,    12,    13,
      -1,    15,    -1,    -1,    -1,    -1,   165,    -1,   167,   168,
     169,    -1,   171,    -1,   173,   174,   175,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      -1,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    80,    -1,    -1,    83,
      84,    85,    86,    -1,    88,    89,    90,    -1,    92,    -1,
      94,    -1,    96,    -1,    -1,    99,    -1,    -1,    -1,   103,
     104,   105,   106,   107,   108,    -1,   110,   111,    -1,    -1,
      -1,    -1,   116,   117,   118,   119,    -1,    -1,    -1,    -1,
     124,   125,   126,   127,   128,   129,   130,    -1,    -1,    -1,
     134,   135,    -1,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,     3,    -1,     5,     6,     7,     8,
      -1,    -1,   156,    12,    13,    -1,    15,    -1,    -1,    -1,
      -1,   165,    -1,   167,   168,   169,    -1,   171,    -1,   173,
     174,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    67,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    80,    -1,    -1,    83,    84,    85,    86,    -1,    88,
      89,    90,    -1,    92,    -1,    94,    -1,    96,    -1,    -1,
      99,    -1,    -1,    -1,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,    -1,    -1,    -1,    -1,   116,   117,   118,
     119,    -1,    -1,    -1,    -1,   124,   125,   126,   127,   128,
     129,   130,    -1,    -1,    -1,   134,   135,    -1,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   156,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,   167,   168,
      10,    11,   171,    -1,   173,   174,   175,     3,    -1,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    69,    70,    -1,    -1,    73,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    -1,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,     3,
      -1,     5,     6,     7,     8,    -1,    -1,    -1,    12,    13,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   168,    -1,    -1,    -1,    -1,    31,    -1,   175,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      -1,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    80,    -1,    -1,    83,
      84,    85,    86,    -1,    88,    89,    90,    -1,    92,    -1,
      94,    -1,    96,    -1,    -1,    99,    -1,    -1,    -1,   103,
     104,   105,   106,   107,   108,    -1,   110,   111,    -1,    -1,
      -1,    -1,   116,   117,    -1,    -1,    -1,    -1,    -1,    -1,
     124,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,    -1,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,     3,    -1,     5,     6,     7,     8,
      -1,    -1,   156,    12,    13,    -1,    15,    -1,    -1,    -1,
      -1,   165,    -1,   167,   168,    -1,    -1,   171,    -1,   173,
     174,   175,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    67,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    80,    -1,    -1,    83,    84,    85,    86,    -1,    88,
      89,    90,    -1,    92,    -1,    94,    -1,    96,    -1,    -1,
      99,    -1,    -1,    -1,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,    -1,    -1,    -1,    -1,   116,   117,    -1,
      -1,    -1,    -1,    -1,    -1,   124,   125,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,   135,    -1,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,     3,
      -1,     5,     6,     7,     8,    -1,    -1,   156,    12,    13,
      -1,    15,    -1,    -1,    -1,    -1,   165,    -1,   167,   168,
      -1,    -1,   171,    -1,   173,   174,   175,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      -1,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    80,    -1,    -1,    83,
      84,    85,    86,    -1,    88,    89,    90,    -1,    92,    -1,
      94,    -1,    96,    -1,    -1,    99,    -1,    -1,    -1,   103,
     104,   105,   106,   107,   108,    -1,   110,   111,    -1,    -1,
      -1,    -1,   116,   117,    -1,    -1,    -1,    -1,    -1,    -1,
     124,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,    -1,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,     3,    -1,     5,     6,     7,     8,
      -1,    -1,   156,    12,    13,    -1,    15,    -1,    -1,    -1,
      -1,   165,    -1,   167,   168,    -1,    -1,   171,    -1,   173,
     174,   175,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    67,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    80,    -1,    -1,    83,    84,    85,    86,    -1,    88,
      89,    90,    -1,    92,    -1,    94,    -1,    96,    -1,    -1,
      99,    -1,    -1,    -1,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,    -1,    -1,    -1,    -1,   116,   117,    -1,
      -1,    -1,    -1,    -1,    -1,   124,   125,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,   135,    -1,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,     3,
      -1,     5,     6,     7,     8,    -1,    -1,   156,    12,    13,
      -1,    15,    -1,    -1,    -1,    -1,   165,    -1,   167,   168,
      -1,    -1,   171,    -1,   173,   174,   175,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      -1,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    80,    -1,    -1,    83,
      84,    85,    86,    -1,    88,    89,    90,    -1,    92,    -1,
      94,    -1,    96,    -1,    -1,    99,    -1,    -1,    -1,   103,
     104,   105,   106,   107,   108,    -1,   110,   111,    -1,    -1,
      -1,    -1,   116,   117,    -1,    -1,    -1,    -1,    -1,    -1,
     124,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,    -1,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,     3,    -1,     5,     6,     7,     8,
      -1,    -1,   156,    12,    13,    -1,    15,    -1,    -1,    -1,
      -1,   165,    -1,   167,   168,    -1,    -1,   171,    -1,   173,
     174,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    67,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    80,    -1,    -1,    83,    84,    85,    86,    -1,    88,
      89,    90,    -1,    92,    -1,    94,    -1,    96,    -1,    -1,
      99,    -1,    -1,    -1,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,    -1,    -1,    -1,    -1,   116,   117,    -1,
      -1,    -1,    -1,    -1,    -1,   124,   125,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,   135,    -1,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,     3,
      -1,     5,     6,     7,     8,    -1,    -1,   156,    12,    13,
      -1,    15,    -1,    -1,    -1,    -1,   165,    -1,   167,   168,
      -1,    -1,   171,    -1,   173,   174,   175,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      -1,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    76,    77,    -1,    -1,    80,    -1,    -1,    83,
      84,    85,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,   103,
      56,    -1,    -1,   107,   108,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    -1,   117,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,    -1,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,     3,    -1,     5,     6,     7,     8,
      -1,    -1,   156,    12,    13,    -1,    15,    -1,   162,    -1,
      -1,   165,    -1,    -1,    -1,    -1,    -1,   171,    -1,   173,
     174,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    67,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    76,    77,    -1,
      -1,    80,    81,    -1,    83,    84,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,   135,    -1,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,     3,
      -1,     5,     6,     7,     8,    -1,    -1,   156,    12,    13,
      -1,    15,    -1,    -1,    -1,    -1,   165,    -1,    -1,    -1,
      -1,    -1,   171,    -1,   173,   174,   175,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      -1,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    76,    77,    -1,    -1,    80,    -1,    -1,    83,
      84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,
      -1,    -1,    -1,   107,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   117,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,    -1,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,     3,    -1,     5,     6,     7,     8,
      -1,    -1,   156,    12,    13,    -1,    15,    -1,    -1,    -1,
      -1,   165,    -1,    -1,    -1,    -1,    -1,   171,    -1,   173,
     174,   175,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    67,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    76,    77,    -1,
      -1,    80,    -1,    -1,    83,    84,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,   135,    -1,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,     3,
      -1,     5,     6,     7,     8,    -1,    -1,   156,    12,    13,
      -1,    15,    -1,    -1,    -1,    -1,   165,    -1,    -1,    -1,
      -1,    -1,   171,    -1,   173,   174,   175,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      -1,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    76,    77,    -1,    -1,    80,    -1,    -1,    83,
      84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,
      -1,    -1,    -1,   107,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   117,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,    -1,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,     3,    -1,     5,     6,     7,     8,
      -1,    -1,   156,    12,    13,    -1,    15,    -1,    -1,    -1,
      -1,   165,    -1,    -1,    -1,    -1,    -1,   171,    -1,   173,
     174,   175,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    67,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    76,    77,    -1,
      -1,    80,    -1,    -1,    83,    84,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,   135,    -1,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,     3,
      -1,     5,     6,     7,     8,    -1,    -1,   156,    12,    13,
      -1,    15,    -1,    -1,    -1,    -1,   165,    -1,    -1,    -1,
      -1,    -1,   171,    -1,   173,   174,   175,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      -1,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    76,    77,    -1,    -1,    80,    -1,    -1,    83,
      84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,
      -1,    -1,    -1,   107,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   117,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,    -1,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,     3,    -1,     5,     6,     7,     8,
      -1,    -1,   156,    12,    13,    -1,    15,    -1,    -1,    -1,
      -1,   165,    -1,    -1,    -1,    -1,    -1,   171,    -1,   173,
     174,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    67,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    76,    77,    -1,
      -1,    80,    -1,    -1,    83,    84,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,   135,    -1,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   156,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   165,     9,    10,    11,
      -1,    -1,   171,    -1,   173,   174,   175,     3,    -1,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    69,    70,    -1,    -1,    73,    74,    75,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    -1,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,     3,
      -1,     5,     6,     7,     8,     9,    10,    11,    12,    13,
     172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,   169,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    56,    -1,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    67,    -1,    69,    70,    -1,    -1,    73,
      74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,    -1,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,   169,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      56,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    56,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    56,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    -1,   169,    -1,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    56,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      -1,   169,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    56,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,   169,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      56,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    56,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,   169,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    56,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    56,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,   167,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    56,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,   166,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      56,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,   166,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    56,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    56,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
     166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    56,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,   166,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    56,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,   166,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      56,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,   166,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    56,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    56,     9,    10,    11,
      -1,    73,    74,    75,    76,    77,    66,    -1,    80,    -1,
     166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    56,   117,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,   166,    -1,
      -1,    -1,    -1,   135,    -1,   137,   138,   139,   140,   141,
     142,   143,   144,    -1,    -1,     3,    -1,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   165,    -1,    -1,    -1,    -1,    -1,   171,
      -1,    -1,   174,   175,    -1,    -1,   166,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    56,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    67,
      -1,    69,    70,    -1,    -1,    73,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,   166,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,    -1,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,     3,    11,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    69,    70,    -1,    -1,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    -1,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,     3,
      -1,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    69,    70,    -1,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,    -1,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,
      11,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      98,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    56,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    56,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      14,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   177,   181,     0,     3,     5,     6,     7,     8,    12,
      13,    15,    50,    51,    55,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    67,    71,    72,    73,    74,    75,
      76,    77,    78,    80,    83,    84,    85,    86,    88,    89,
      90,    92,    94,    96,    99,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   114,   116,   117,   118,   119,   124,
     125,   126,   127,   128,   129,   130,   133,   134,   135,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     156,   165,   167,   168,   171,   173,   174,   175,   185,   187,
     188,   189,   190,   206,   214,   217,   220,   221,   222,   224,
     236,   242,   243,   244,   245,   293,   294,   295,   296,   297,
     305,   306,   311,   312,   313,   314,   316,   317,   318,   319,
     320,   321,   322,   323,   334,    73,   117,   188,   294,   297,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
      31,   165,   117,   128,   165,   185,   188,   291,   306,   307,
     322,   324,   165,   308,   165,   287,   288,   294,   206,   165,
     165,   165,   165,   165,   165,   294,   315,   315,    73,    73,
     203,   286,   315,   168,    73,    74,    76,   107,   109,   183,
     184,   193,   195,   199,   202,   262,   263,   322,    77,   264,
     265,   295,   165,   165,   165,   165,   219,   223,   225,     3,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    56,
      67,    69,    70,    73,    76,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   178,   179,   180,   182,
     192,   165,   165,   186,   306,   165,   171,   311,   313,   314,
     321,   321,    77,    79,   157,   158,   159,   331,   332,   294,
     204,    37,   134,   162,   294,   327,   328,   329,   330,    79,
     309,   331,    79,   331,   168,   322,   165,   259,   117,   187,
     189,   295,   128,   221,    69,    70,    69,    70,    87,     9,
      10,    11,    30,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    56,    66,   167,    37,
     301,   301,   160,   160,   148,   149,   168,   171,   259,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,   146,   147,   301,    14,   294,   292,   294,
     291,   160,   259,   310,   148,   149,   160,   168,   171,   315,
     294,   167,   170,    90,   294,   289,   290,   294,   294,   203,
     294,   294,   167,   167,   167,    16,   167,   170,   167,   204,
      98,   161,   184,   194,   199,   167,   167,   170,   167,   170,
      16,   167,   170,   212,   213,   321,   294,   335,   336,   294,
     166,    73,    73,    73,   167,   191,   168,   327,   327,   259,
     294,   327,   148,   149,   171,   157,   332,    81,   294,   321,
      79,   157,   332,   166,   127,   169,   188,   189,   205,   206,
     321,   165,   294,    14,   172,   170,   173,   174,   294,     3,
       5,     6,     7,     8,    12,    13,    67,    73,    83,    84,
      85,   103,   107,   108,   117,   125,   126,   134,   135,   137,
     138,   139,   140,   141,   142,   143,   144,   162,   166,   180,
     260,   261,   294,   295,   218,   165,   206,   165,    31,   167,
     294,   294,   294,    31,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   307,   294,
     298,    73,   298,   168,   180,   322,   325,   180,   322,   325,
      73,   168,   322,   326,   326,   294,   315,    37,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   166,   310,   166,   322,   326,   326,   322,
     294,   315,   166,   166,   288,   165,   166,   167,   170,    98,
     166,   166,   166,   294,   286,   169,    73,   168,   161,   167,
     167,   184,   202,   263,   294,   265,   170,   196,   170,   196,
     166,   167,   131,   226,   298,   131,   227,   168,   181,   166,
     166,   166,   172,    73,    73,    51,    73,    77,    82,   333,
     169,   171,   169,   169,   165,   189,   327,    37,   134,   294,
      16,   328,   169,   294,    31,   170,   196,    73,   294,   294,
     204,   294,    31,   165,   298,   165,   294,   259,   259,   294,
     259,   259,   169,   172,   321,   226,   169,   172,    31,   206,
     294,    31,   206,   241,   289,   294,    37,   134,   171,   229,
     321,   207,    31,   168,   233,   168,   298,   208,   183,   193,
     197,   200,   201,   168,   213,   166,   336,   166,   306,   132,
     228,   168,   269,   306,   298,   181,   169,    16,    82,   172,
     294,   166,   166,   321,   165,   294,   294,   261,   166,   226,
     166,   166,    87,   294,   120,   121,   122,   188,   246,   247,
     248,   249,   250,   165,   246,   169,   169,   228,   204,   166,
     204,   167,   321,   165,   327,    14,   166,    31,   206,   232,
     167,   234,   167,   234,   102,   237,   238,   239,   240,   294,
     112,   113,   211,    98,   201,   170,   196,   198,   201,   167,
     269,   298,   266,   170,   168,   169,   294,   172,   167,   327,
     228,   206,    31,   167,   250,   166,   170,   196,    30,   135,
     136,   185,   251,   255,   256,   257,   246,   166,   298,   167,
      91,   289,   327,   172,   229,    31,   206,   231,   204,   234,
     100,   101,   102,   234,   169,   170,   196,   169,   170,   196,
     170,   196,   165,   168,    73,   200,   169,   170,   196,   168,
     114,   117,   118,   119,   120,   121,   122,   123,   169,   188,
     267,   268,   278,   279,   280,   281,   306,   266,   169,   166,
     298,   204,    31,   258,   248,   256,    37,   215,    35,    35,
     166,   114,   302,   168,   167,   166,   166,   166,   204,    97,
     100,   167,   294,    31,   167,   235,   169,    14,   239,   294,
      14,   209,   306,   204,   201,   169,   266,   269,   267,   251,
     109,   297,   281,   169,   168,    30,   117,   252,   253,   254,
     256,    14,   162,   216,   256,   256,   258,   165,   258,   266,
      31,   206,   230,   231,    95,   167,   167,   235,   204,   294,
     294,    35,    77,   210,   169,   169,   167,   168,   270,    77,
     282,   283,   180,   284,   285,   301,   266,   253,    35,    35,
     299,    77,   299,    37,    77,   303,   304,   299,   169,   204,
     167,   204,   306,   166,   117,   169,   180,   271,   272,   273,
     274,   275,   276,   306,    16,   298,   167,   170,    16,   167,
     170,   180,   169,   253,   253,   300,   298,   168,    77,   170,
     196,   168,    93,   168,   169,   272,   167,   167,    98,   115,
     160,   294,   283,   294,   285,   298,   294,    16,   204,   304,
     166,   204,   167,   204,    73,   178,   281,   269,   180,   298,
     298,   165,   299,   294,   169,   169,   169,   180,   246,   299,
     299,   166,   258,   299,   167,   168,   277,   204,   299,   169
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   176,   177,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   179,   179,   179,   179,   179,   179,   179,   180,
     180,   181,   181,   182,   182,   183,   183,   184,   184,   185,
     185,   185,   185,   186,   186,   187,   188,   188,   189,   189,
     189,   189,   190,   190,   190,   190,   190,   191,   190,   192,
     190,   190,   190,   190,   190,   190,   193,   193,   194,   195,
     196,   196,   197,   197,   198,   198,   199,   199,   200,   200,
     201,   201,   202,   202,   203,   203,   204,   204,   205,   205,
     205,   205,   206,   206,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     207,   206,   206,   206,   206,   206,   208,   208,   209,   209,
     210,   210,   211,   211,   212,   212,   213,   214,   215,   215,
     216,   216,   218,   217,   219,   217,   220,   220,   221,   221,
     223,   222,   225,   224,   226,   226,   227,   227,   228,   228,
     229,   229,   229,   229,   230,   230,   231,   231,   232,   232,
     233,   233,   233,   233,   234,   234,   234,   235,   235,   236,
     237,   237,   238,   238,   239,   239,   240,   240,   241,   241,
     242,   242,   243,   243,   244,   244,   245,   245,   246,   246,
     247,   247,   248,   248,   249,   249,   249,   249,   250,   250,
     251,   251,   252,   252,   252,   253,   253,   254,   254,   255,
     255,   255,   256,   256,   256,   257,   257,   258,   258,   259,
     259,   260,   260,   261,   261,   261,   262,   262,   263,   264,
     264,   265,   265,   266,   266,   267,   267,   267,   268,   268,
     268,   269,   269,   270,   270,   270,   271,   271,   272,   272,
     273,   274,   274,   274,   274,   275,   275,   276,   277,   277,
     278,   278,   279,   279,   280,   280,   281,   281,   281,   281,
     281,   281,   282,   282,   283,   283,   284,   284,   285,   286,
     287,   287,   288,   289,   289,   290,   290,   292,   291,   293,
     293,   293,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   295,   295,   296,   297,   298,   299,
     300,   301,   301,   302,   302,   303,   303,   304,   304,   305,
     305,   305,   305,   306,   306,   307,   307,   307,   308,   308,
     309,   309,   309,   310,   310,   311,   311,   311,   311,   312,
     312,   312,   312,   312,   312,   312,   312,   313,   313,   313,
     313,   313,   313,   313,   313,   313,   314,   314,   315,   315,
     316,   317,   317,   317,   317,   318,   318,   319,   319,   319,
     320,   320,   320,   320,   320,   320,   321,   321,   321,   321,
     322,   322,   322,   323,   323,   324,   324,   324,   324,   324,
     324,   324,   325,   325,   325,   326,   326,   326,   327,   328,
     328,   329,   329,   330,   330,   330,   330,   330,   330,   330,
     331,   331,   331,   331,   332,   332,   332,   332,   332,   332,
     332,   332,   333,   333,   333,   333,   334,   334,   334,   334,
     334,   334,   334,   335,   335,   336
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
       1,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     2,     4,     3,     0,     6,     0,
       5,     3,     4,     3,     4,     3,     1,     1,     6,     6,
       0,     1,     3,     1,     3,     1,     3,     1,     1,     2,
       1,     3,     1,     3,     3,     1,     2,     0,     1,     1,
       2,     4,     3,     1,     1,     5,     7,     9,     5,     3,
       3,     3,     3,     3,     3,     1,     2,     6,     7,     9,
       0,     6,     1,     6,     3,     2,     0,     9,     1,     3,
       0,     1,     0,     4,     1,     3,     1,    13,     0,     1,
       0,     1,     0,    10,     0,     9,     1,     2,     1,     1,
       0,     7,     0,     8,     0,     2,     0,     2,     0,     2,
       1,     2,     4,     3,     1,     4,     1,     4,     1,     4,
       3,     4,     4,     5,     0,     5,     4,     1,     1,     7,
       0,     2,     1,     3,     4,     4,     1,     3,     1,     4,
       5,     6,     1,     3,     6,     7,     3,     6,     2,     0,
       1,     3,     2,     1,     0,     1,     1,     1,     6,     8,
       0,     1,     1,     2,     1,     1,     1,     3,     3,     1,
       2,     1,     1,     1,     1,     3,     3,     0,     2,     2,
       4,     1,     3,     1,     3,     2,     3,     1,     1,     3,
       1,     1,     3,     2,     0,     4,     4,    12,     1,     2,
       3,     1,     3,     1,     2,     3,     1,     2,     2,     2,
       3,     3,     3,     4,     3,     1,     1,     3,     1,     3,
       1,     1,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     3,     1,     2,     4,     3,     1,     4,     4,
       3,     1,     1,     0,     1,     3,     1,     0,     9,     3,
       2,     3,     1,     6,     5,     3,     4,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     5,     4,
       3,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     3,     2,     1,     2,     4,     2,     2,     1,
       2,     2,     3,     1,    13,    12,     1,     1,     0,     0,
       0,     0,     1,     0,     5,     3,     1,     1,     2,     2,
       4,     4,     2,     1,     1,     1,     1,     3,     0,     3,
       0,     1,     1,     0,     1,     4,     3,     1,     3,     1,
       1,     3,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     0,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     3,     1,
       1,     4,     4,     4,     4,     1,     1,     1,     3,     3,
       1,     4,     2,     3,     3,     1,     4,     4,     3,     3,
       3,     3,     1,     3,     1,     1,     3,     1,     1,     0,
       1,     3,     1,     3,     1,     4,     2,     2,     6,     4,
       2,     2,     1,     2,     1,     4,     3,     3,     3,     3,
       6,     3,     1,     1,     2,     1,     5,     4,     2,     2,
       4,     2,     2,     1,     3,     1
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
#if ZENDDEBUG

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
#else /* !ZENDDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !ZENDDEBUG */


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
          case 71: /* "integer"  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 72: /* "floating-point number"  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 73: /* "identifier"  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 74: /* "fully qualified name"  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 75: /* "namespace-relative name"  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 76: /* "namespaced name"  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 77: /* "variable"  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 78: /* T_INLINE_HTML  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 79: /* "string content"  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 80: /* "quoted string"  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 81: /* "variable name"  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 82: /* "number"  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 180: /* identifier  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 181: /* top_statement_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 182: /* namespace_declaration_name  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 183: /* namespace_name  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 184: /* legacy_namespace_name  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 185: /* name  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 186: /* attribute_decl  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 187: /* attribute  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 188: /* attributes  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 189: /* attributed_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 190: /* top_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 194: /* group_use_declaration  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 195: /* mixed_group_use_declaration  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 197: /* inline_use_declarations  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 198: /* unprefixed_use_declarations  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 199: /* use_declarations  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 200: /* inline_use_declaration  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 201: /* unprefixed_use_declaration  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 202: /* use_declaration  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 203: /* const_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 204: /* inner_statement_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 205: /* inner_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 206: /* statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 208: /* catch_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 209: /* catch_name_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 210: /* optional_variable  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 211: /* finally_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 212: /* unset_variables  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 213: /* unset_variable  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 214: /* function_declaration_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 217: /* class_declaration_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 222: /* trait_declaration_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 224: /* interface_declaration_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 226: /* extends_from  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 227: /* interface_extends_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 228: /* implements_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 229: /* foreach_variable  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 230: /* for_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 231: /* foreach_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 232: /* declare_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 233: /* switch_case_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 234: /* case_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 236: /* match  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 237: /* match_arm_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 238: /* non_empty_match_arm_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 239: /* match_arm  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 240: /* match_arm_cond_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 241: /* while_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 242: /* if_stmt_without_else  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 243: /* if_stmt  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 244: /* alt_if_stmt_without_else  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 245: /* alt_if_stmt  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 246: /* parameter_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 247: /* non_empty_parameter_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 248: /* attributed_parameter  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 250: /* parameter  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 251: /* optional_type_without_static  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 252: /* type_expr  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 253: /* type  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 254: /* union_type  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 255: /* type_expr_without_static  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 256: /* type_without_static  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 257: /* union_type_without_static  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 258: /* return_type  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 259: /* argument_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 260: /* non_empty_argument_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 261: /* argument  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 262: /* global_var_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 263: /* global_var  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 264: /* static_var_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 265: /* static_var  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 266: /* class_statement_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 267: /* attributed_class_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 268: /* class_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 269: /* class_name_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 270: /* trait_adaptations  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 271: /* trait_adaptation_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 272: /* trait_adaptation  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 273: /* trait_precedence  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 274: /* trait_alias  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 275: /* trait_method_reference  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 276: /* absolute_trait_method_reference  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 277: /* method_body  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 282: /* property_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 283: /* property  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 284: /* class_const_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 285: /* class_const_decl  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 286: /* const_decl  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 287: /* echo_expr_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 288: /* echo_expr  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 289: /* for_exprs  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 290: /* non_empty_for_exprs  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 291: /* anonymous_class  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 293: /* new_expr  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 294: /* expr  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 295: /* inline_function  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 298: /* backup_doc_comment  */

      { if (((*yyvaluep).str)) zend_string_release_ex(((*yyvaluep).str), 0); }

        break;

    case 302: /* lexical_vars  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 303: /* lexical_var_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 304: /* lexical_var  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 305: /* function_call  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 306: /* class_name  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 307: /* class_name_reference  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 308: /* exit_expr  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 309: /* backticks_expr  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 310: /* ctor_arguments  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 311: /* dereferencable_scalar  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 312: /* scalar  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 313: /* constant  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 314: /* class_constant  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 315: /* optional_expr  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 316: /* variable_class_name  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 317: /* fully_dereferencable  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 318: /* array_object_dereferencable  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 319: /* callable_expr  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 320: /* callable_variable  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 321: /* variable  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 322: /* simple_variable  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 323: /* static_member  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 324: /* new_variable  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 325: /* member_name  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 326: /* property_name  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 327: /* array_pair_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 328: /* possible_array_pair  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 329: /* non_empty_array_pair_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 330: /* array_pair  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 331: /* encaps_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 332: /* encaps_var  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 333: /* encaps_var_offset  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 334: /* internal_functions_in_yacc  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 335: /* isset_variables  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 336: /* isset_variable  */

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

  case 79:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 80:

    {
			zval zv;
			if (zend_lex_tstring(&zv, (yyvsp[0].ident)) == FAILURE) { YYABORT; }
			(yyval.ast) = zend_ast_create_zval(&zv);
		}

    break;

  case 81:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 82:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_STMT_LIST); }

    break;

  case 83:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 84:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 85:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 86:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 87:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 88:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 89:

    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_NAME_NOT_FQ; }

    break;

  case 90:

    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_NAME_NOT_FQ; }

    break;

  case 91:

    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_NAME_FQ; }

    break;

  case 92:

    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_NAME_RELATIVE; }

    break;

  case 93:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ATTRIBUTE, (yyvsp[0].ast), NULL); }

    break;

  case 94:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ATTRIBUTE, (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 95:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 96:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ATTRIBUTE_LIST, (yyvsp[0].ast)); }

    break;

  case 97:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 98:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 99:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 100:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 101:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 102:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 103:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 104:

    { (yyval.ast) = zend_ast_with_attributes((yyvsp[0].ast), (yyvsp[-1].ast)); }

    break;

  case 105:

    { (yyval.ast) = zend_ast_create(ZEND_AST_HALT_COMPILER,
			      zend_ast_create_zval_from_long(zend_get_scanned_file_offset()));
			  zend_stop_lexing(); }

    break;

  case 106:

    { (yyval.ast) = zend_ast_create(ZEND_AST_NAMESPACE, (yyvsp[-1].ast), NULL);
			  RESET_DOC_COMMENT(); }

    break;

  case 107:

    { RESET_DOC_COMMENT(); }

    break;

  case 108:

    { (yyval.ast) = zend_ast_create(ZEND_AST_NAMESPACE, (yyvsp[-4].ast), (yyvsp[-1].ast)); }

    break;

  case 109:

    { RESET_DOC_COMMENT(); }

    break;

  case 110:

    { (yyval.ast) = zend_ast_create(ZEND_AST_NAMESPACE, NULL, (yyvsp[-1].ast)); }

    break;

  case 111:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 112:

    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = (yyvsp[-2].num); }

    break;

  case 113:

    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_SYMBOL_CLASS; }

    break;

  case 114:

    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = (yyvsp[-2].num); }

    break;

  case 115:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 116:

    { (yyval.num) = ZEND_SYMBOL_FUNCTION; }

    break;

  case 117:

    { (yyval.num) = ZEND_SYMBOL_CONST; }

    break;

  case 118:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[-5].ast), (yyvsp[-2].ast)); }

    break;

  case 119:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[-5].ast), (yyvsp[-2].ast));}

    break;

  case 122:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 123:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_USE, (yyvsp[0].ast)); }

    break;

  case 124:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 125:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_USE, (yyvsp[0].ast)); }

    break;

  case 126:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 127:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_USE, (yyvsp[0].ast)); }

    break;

  case 128:

    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_SYMBOL_CLASS; }

    break;

  case 129:

    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = (yyvsp[-1].num); }

    break;

  case 130:

    { (yyval.ast) = zend_ast_create(ZEND_AST_USE_ELEM, (yyvsp[0].ast), NULL); }

    break;

  case 131:

    { (yyval.ast) = zend_ast_create(ZEND_AST_USE_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 132:

    { (yyval.ast) = zend_ast_create(ZEND_AST_USE_ELEM, (yyvsp[0].ast), NULL); }

    break;

  case 133:

    { (yyval.ast) = zend_ast_create(ZEND_AST_USE_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 134:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 135:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_CONST_DECL, (yyvsp[0].ast)); }

    break;

  case 136:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 137:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_STMT_LIST); }

    break;

  case 138:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 139:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 140:

    { (yyval.ast) = zend_ast_with_attributes((yyvsp[0].ast), (yyvsp[-1].ast)); }

    break;

  case 141:

    { (yyval.ast) = NULL; zend_throw_exception(zend_ce_compile_error,
			      "__HALT_COMPILER() can only be used from the outermost scope", 0); YYERROR; }

    break;

  case 142:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 143:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 144:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 145:

    { (yyval.ast) = zend_ast_create(ZEND_AST_WHILE, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 146:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DO_WHILE, (yyvsp[-5].ast), (yyvsp[-2].ast)); }

    break;

  case 147:

    { (yyval.ast) = zend_ast_create(ZEND_AST_FOR, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 148:

    { (yyval.ast) = zend_ast_create(ZEND_AST_SWITCH, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 149:

    { (yyval.ast) = zend_ast_create(ZEND_AST_BREAK, (yyvsp[-1].ast)); }

    break;

  case 150:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CONTINUE, (yyvsp[-1].ast)); }

    break;

  case 151:

    { (yyval.ast) = zend_ast_create(ZEND_AST_RETURN, (yyvsp[-1].ast)); }

    break;

  case 152:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 153:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 154:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 155:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ECHO, (yyvsp[0].ast)); }

    break;

  case 156:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 157:

    { (yyval.ast) = (yyvsp[-3].ast); }

    break;

  case 158:

    { (yyval.ast) = zend_ast_create(ZEND_AST_FOREACH, (yyvsp[-4].ast), (yyvsp[-2].ast), NULL, (yyvsp[0].ast)); }

    break;

  case 159:

    { (yyval.ast) = zend_ast_create(ZEND_AST_FOREACH, (yyvsp[-6].ast), (yyvsp[-2].ast), (yyvsp[-4].ast), (yyvsp[0].ast)); }

    break;

  case 160:

    { if (!zend_handle_encoding_declaration((yyvsp[-1].ast))) { YYERROR; } }

    break;

  case 161:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DECLARE, (yyvsp[-3].ast), (yyvsp[0].ast)); }

    break;

  case 162:

    { (yyval.ast) = NULL; }

    break;

  case 163:

    { (yyval.ast) = zend_ast_create(ZEND_AST_TRY, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 164:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GOTO, (yyvsp[-1].ast)); }

    break;

  case 165:

    { (yyval.ast) = zend_ast_create(ZEND_AST_LABEL, (yyvsp[-1].ast)); }

    break;

  case 166:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_CATCH_LIST); }

    break;

  case 167:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-8].ast), zend_ast_create(ZEND_AST_CATCH, (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast))); }

    break;

  case 168:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_NAME_LIST, (yyvsp[0].ast)); }

    break;

  case 169:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 170:

    { (yyval.ast) = NULL; }

    break;

  case 171:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 172:

    { (yyval.ast) = NULL; }

    break;

  case 173:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 174:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }

    break;

  case 175:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 176:

    { (yyval.ast) = zend_ast_create(ZEND_AST_UNSET, (yyvsp[0].ast)); }

    break;

  case 177:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_FUNC_DECL, (yyvsp[-11].num) | (yyvsp[0].num), (yyvsp[-12].num), (yyvsp[-9].str),
		      zend_ast_get_str((yyvsp[-10].ast)), (yyvsp[-7].ast), NULL, (yyvsp[-2].ast), (yyvsp[-5].ast), NULL); CG(extra_fn_flags) = (yyvsp[-4].num); }

    break;

  case 178:

    { (yyval.num) = 0; }

    break;

  case 179:

    { (yyval.num) = ZEND_PARAM_REF; }

    break;

  case 180:

    { (yyval.num) = 0; }

    break;

  case 181:

    { (yyval.num) = ZEND_PARAM_VARIADIC; }

    break;

  case 182:

    { (yyval.num) = CG(zend_lineno); }

    break;

  case 183:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, (yyvsp[-9].num), (yyvsp[-7].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-6].ast)), (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast), NULL, NULL); }

    break;

  case 184:

    { (yyval.num) = CG(zend_lineno); }

    break;

  case 185:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, 0, (yyvsp[-7].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-6].ast)), (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast), NULL, NULL); }

    break;

  case 186:

    { (yyval.num) = (yyvsp[0].num); }

    break;

  case 187:

    { (yyval.num) = zend_add_class_modifier((yyvsp[-1].num), (yyvsp[0].num)); if (!(yyval.num)) { YYERROR; } }

    break;

  case 188:

    { (yyval.num) = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; }

    break;

  case 189:

    { (yyval.num) = ZEND_ACC_FINAL; }

    break;

  case 190:

    { (yyval.num) = CG(zend_lineno); }

    break;

  case 191:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, ZEND_ACC_TRAIT, (yyvsp[-5].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-4].ast)), NULL, NULL, (yyvsp[-1].ast), NULL, NULL); }

    break;

  case 192:

    { (yyval.num) = CG(zend_lineno); }

    break;

  case 193:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, ZEND_ACC_INTERFACE, (yyvsp[-6].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-5].ast)), NULL, (yyvsp[-4].ast), (yyvsp[-1].ast), NULL, NULL); }

    break;

  case 194:

    { (yyval.ast) = NULL; }

    break;

  case 195:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 196:

    { (yyval.ast) = NULL; }

    break;

  case 197:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 198:

    { (yyval.ast) = NULL; }

    break;

  case 199:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 200:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 201:

    { (yyval.ast) = zend_ast_create(ZEND_AST_REF, (yyvsp[0].ast)); }

    break;

  case 202:

    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_ARRAY_SYNTAX_LIST; }

    break;

  case 203:

    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_ARRAY_SYNTAX_SHORT; }

    break;

  case 204:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 205:

    { (yyval.ast) = (yyvsp[-2].ast); }

    break;

  case 206:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 207:

    { (yyval.ast) = (yyvsp[-2].ast); }

    break;

  case 208:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 209:

    { (yyval.ast) = (yyvsp[-2].ast); }

    break;

  case 210:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 211:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 212:

    { (yyval.ast) = (yyvsp[-2].ast); }

    break;

  case 213:

    { (yyval.ast) = (yyvsp[-2].ast); }

    break;

  case 214:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_SWITCH_LIST); }

    break;

  case 215:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-4].ast), zend_ast_create(ZEND_AST_SWITCH_CASE, (yyvsp[-2].ast), (yyvsp[0].ast))); }

    break;

  case 216:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-3].ast), zend_ast_create(ZEND_AST_SWITCH_CASE, NULL, (yyvsp[0].ast))); }

    break;

  case 219:

    { (yyval.ast) = zend_ast_create(ZEND_AST_MATCH, (yyvsp[-4].ast), (yyvsp[-1].ast)); }

    break;

  case 220:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_MATCH_ARM_LIST); }

    break;

  case 221:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 222:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_MATCH_ARM_LIST, (yyvsp[0].ast)); }

    break;

  case 223:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 224:

    { (yyval.ast) = zend_ast_create(ZEND_AST_MATCH_ARM, (yyvsp[-3].ast), (yyvsp[0].ast)); }

    break;

  case 225:

    { (yyval.ast) = zend_ast_create(ZEND_AST_MATCH_ARM, NULL, (yyvsp[0].ast)); }

    break;

  case 226:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_EXPR_LIST, (yyvsp[0].ast)); }

    break;

  case 227:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 228:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 229:

    { (yyval.ast) = (yyvsp[-2].ast); }

    break;

  case 230:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_IF,
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast))); }

    break;

  case 231:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-5].ast),
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast))); }

    break;

  case 232:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 233:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), zend_ast_create(ZEND_AST_IF_ELEM, NULL, (yyvsp[0].ast))); }

    break;

  case 234:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_IF,
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-3].ast), (yyvsp[0].ast))); }

    break;

  case 235:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-6].ast),
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-3].ast), (yyvsp[0].ast))); }

    break;

  case 236:

    { (yyval.ast) = (yyvsp[-2].ast); }

    break;

  case 237:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-5].ast),
			      zend_ast_create(ZEND_AST_IF_ELEM, NULL, (yyvsp[-2].ast))); }

    break;

  case 238:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 239:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_PARAM_LIST); }

    break;

  case 240:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_PARAM_LIST, (yyvsp[0].ast)); }

    break;

  case 241:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 242:

    { (yyval.ast) = zend_ast_with_attributes((yyvsp[0].ast), (yyvsp[-1].ast)); }

    break;

  case 243:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 244:

    { (yyval.num) = 0; }

    break;

  case 245:

    { (yyval.num) = ZEND_ACC_PUBLIC; }

    break;

  case 246:

    { (yyval.num) = ZEND_ACC_PROTECTED; }

    break;

  case 247:

    { (yyval.num) = ZEND_ACC_PRIVATE; }

    break;

  case 248:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_PARAM, (yyvsp[-5].num) | (yyvsp[-3].num) | (yyvsp[-2].num), (yyvsp[-4].ast), (yyvsp[-1].ast), NULL,
					NULL, (yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL); }

    break;

  case 249:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_PARAM, (yyvsp[-7].num) | (yyvsp[-5].num) | (yyvsp[-4].num), (yyvsp[-6].ast), (yyvsp[-3].ast), (yyvsp[0].ast),
					NULL, (yyvsp[-2].str) ? zend_ast_create_zval_from_str((yyvsp[-2].str)) : NULL); }

    break;

  case 250:

    { (yyval.ast) = NULL; }

    break;

  case 251:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 252:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 253:

    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr |= ZEND_TYPE_NULLABLE; }

    break;

  case 254:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 255:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 256:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TYPE, IS_STATIC); }

    break;

  case 257:

    { (yyval.ast) = zend_ast_create_list(2, ZEND_AST_TYPE_UNION, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 258:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 259:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 260:

    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr |= ZEND_TYPE_NULLABLE; }

    break;

  case 261:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 262:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TYPE, IS_ARRAY); }

    break;

  case 263:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TYPE, IS_CALLABLE); }

    break;

  case 264:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 265:

    { (yyval.ast) = zend_ast_create_list(2, ZEND_AST_TYPE_UNION, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 266:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 267:

    { (yyval.ast) = NULL; }

    break;

  case 268:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 269:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_ARG_LIST); }

    break;

  case 270:

    { (yyval.ast) = (yyvsp[-2].ast); }

    break;

  case 271:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ARG_LIST, (yyvsp[0].ast)); }

    break;

  case 272:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 273:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 274:

    { (yyval.ast) = zend_ast_create(ZEND_AST_NAMED_ARG, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 275:

    { (yyval.ast) = zend_ast_create(ZEND_AST_UNPACK, (yyvsp[0].ast)); }

    break;

  case 276:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 277:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }

    break;

  case 278:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GLOBAL, zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast))); }

    break;

  case 279:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 280:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }

    break;

  case 281:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC, (yyvsp[0].ast), NULL); }

    break;

  case 282:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 283:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 284:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_STMT_LIST); }

    break;

  case 285:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP_GROUP, (yyvsp[-2].ast), (yyvsp[-1].ast), NULL);
			  (yyval.ast)->attr = (yyvsp[-3].num); }

    break;

  case 286:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CLASS_CONST_GROUP, (yyvsp[-1].ast), NULL);
			  (yyval.ast)->attr = (yyvsp[-3].num); }

    break;

  case 287:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_METHOD, (yyvsp[-9].num) | (yyvsp[-11].num) | (yyvsp[0].num), (yyvsp[-10].num), (yyvsp[-7].str),
				  zend_ast_get_str((yyvsp[-8].ast)), (yyvsp[-5].ast), NULL, (yyvsp[-1].ast), (yyvsp[-3].ast), NULL); CG(extra_fn_flags) = (yyvsp[-2].num); }

    break;

  case 288:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 289:

    { (yyval.ast) = zend_ast_with_attributes((yyvsp[0].ast), (yyvsp[-1].ast)); }

    break;

  case 290:

    { (yyval.ast) = zend_ast_create(ZEND_AST_USE_TRAIT, (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 291:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_NAME_LIST, (yyvsp[0].ast)); }

    break;

  case 292:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 293:

    { (yyval.ast) = NULL; }

    break;

  case 294:

    { (yyval.ast) = NULL; }

    break;

  case 295:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 296:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_TRAIT_ADAPTATIONS, (yyvsp[0].ast)); }

    break;

  case 297:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 298:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 299:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 300:

    { (yyval.ast) = zend_ast_create(ZEND_AST_TRAIT_PRECEDENCE, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 301:

    { (yyval.ast) = zend_ast_create(ZEND_AST_TRAIT_ALIAS, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 302:

    { zval zv;
			  if (zend_lex_tstring(&zv, (yyvsp[0].ident)) == FAILURE) { YYABORT; }
			  (yyval.ast) = zend_ast_create(ZEND_AST_TRAIT_ALIAS, (yyvsp[-2].ast), zend_ast_create_zval(&zv)); }

    break;

  case 303:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TRAIT_ALIAS, (yyvsp[-1].num), (yyvsp[-3].ast), (yyvsp[0].ast)); }

    break;

  case 304:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TRAIT_ALIAS, (yyvsp[0].num), (yyvsp[-2].ast), NULL); }

    break;

  case 305:

    { (yyval.ast) = zend_ast_create(ZEND_AST_METHOD_REFERENCE, NULL, (yyvsp[0].ast)); }

    break;

  case 306:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 307:

    { (yyval.ast) = zend_ast_create(ZEND_AST_METHOD_REFERENCE, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 308:

    { (yyval.ast) = NULL; }

    break;

  case 309:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 310:

    { (yyval.num) = (yyvsp[0].num); }

    break;

  case 311:

    { (yyval.num) = ZEND_ACC_PUBLIC; }

    break;

  case 312:

    { (yyval.num) = ZEND_ACC_PUBLIC; }

    break;

  case 313:

    { (yyval.num) = (yyvsp[0].num); if (!((yyval.num) & ZEND_ACC_PPP_MASK)) { (yyval.num) |= ZEND_ACC_PUBLIC; } }

    break;

  case 314:

    { (yyval.num) = (yyvsp[0].num); }

    break;

  case 315:

    { (yyval.num) = zend_add_member_modifier((yyvsp[-1].num), (yyvsp[0].num)); if (!(yyval.num)) { YYERROR; } }

    break;

  case 316:

    { (yyval.num) = ZEND_ACC_PUBLIC; }

    break;

  case 317:

    { (yyval.num) = ZEND_ACC_PROTECTED; }

    break;

  case 318:

    { (yyval.num) = ZEND_ACC_PRIVATE; }

    break;

  case 319:

    { (yyval.num) = ZEND_ACC_STATIC; }

    break;

  case 320:

    { (yyval.num) = ZEND_ACC_ABSTRACT; }

    break;

  case 321:

    { (yyval.num) = ZEND_ACC_FINAL; }

    break;

  case 322:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 323:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_PROP_DECL, (yyvsp[0].ast)); }

    break;

  case 324:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP_ELEM, (yyvsp[-1].ast), NULL, ((yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL)); }

    break;

  case 325:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP_ELEM, (yyvsp[-3].ast), (yyvsp[-1].ast), ((yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL)); }

    break;

  case 326:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 327:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_CLASS_CONST_DECL, (yyvsp[0].ast)); }

    break;

  case 328:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CONST_ELEM, (yyvsp[-3].ast), (yyvsp[-1].ast), ((yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL)); }

    break;

  case 329:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CONST_ELEM, (yyvsp[-3].ast), (yyvsp[-1].ast), ((yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL)); }

    break;

  case 330:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 331:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }

    break;

  case 332:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ECHO, (yyvsp[0].ast)); }

    break;

  case 333:

    { (yyval.ast) = NULL; }

    break;

  case 334:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 335:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 336:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_EXPR_LIST, (yyvsp[0].ast)); }

    break;

  case 337:

    { (yyval.num) = CG(zend_lineno); }

    break;

  case 338:

    {
			zend_ast *decl = zend_ast_create_decl(
				ZEND_AST_CLASS, ZEND_ACC_ANON_CLASS, (yyvsp[-7].num), (yyvsp[-3].str), NULL,
				(yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast), NULL, NULL);
			(yyval.ast) = zend_ast_create(ZEND_AST_NEW, decl, (yyvsp[-6].ast));
		}

    break;

  case 339:

    { (yyval.ast) = zend_ast_create(ZEND_AST_NEW, (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 340:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 341:

    { zend_ast_with_attributes((yyvsp[0].ast)->child[0], (yyvsp[-1].ast)); (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 342:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 343:

    { (yyvsp[-3].ast)->attr = ZEND_ARRAY_SYNTAX_LIST; (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN, (yyvsp[-3].ast), (yyvsp[0].ast)); }

    break;

  case 344:

    { (yyvsp[-3].ast)->attr = ZEND_ARRAY_SYNTAX_SHORT; (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN, (yyvsp[-3].ast), (yyvsp[0].ast)); }

    break;

  case 345:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 346:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN_REF, (yyvsp[-3].ast), (yyvsp[0].ast)); }

    break;

  case 347:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CLONE, (yyvsp[0].ast)); }

    break;

  case 348:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ADD, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 349:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_SUB, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 350:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_MUL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 351:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_POW, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 352:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_DIV, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 353:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_CONCAT, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 354:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_MOD, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 355:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_BW_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 356:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_BW_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 357:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_BW_XOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 358:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_SL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 359:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_SR, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 360:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN_COALESCE, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 361:

    { (yyval.ast) = zend_ast_create(ZEND_AST_POST_INC, (yyvsp[-1].ast)); }

    break;

  case 362:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PRE_INC, (yyvsp[0].ast)); }

    break;

  case 363:

    { (yyval.ast) = zend_ast_create(ZEND_AST_POST_DEC, (yyvsp[-1].ast)); }

    break;

  case 364:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PRE_DEC, (yyvsp[0].ast)); }

    break;

  case 365:

    { (yyval.ast) = zend_ast_create(ZEND_AST_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 366:

    { (yyval.ast) = zend_ast_create(ZEND_AST_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 367:

    { (yyval.ast) = zend_ast_create(ZEND_AST_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 368:

    { (yyval.ast) = zend_ast_create(ZEND_AST_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 369:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BOOL_XOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 370:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 371:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 372:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_XOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 373:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_CONCAT, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 374:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_ADD, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 375:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_SUB, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 376:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_MUL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 377:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_POW, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 378:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_DIV, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 379:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_MOD, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 380:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_SL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 381:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_SR, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 382:

    { (yyval.ast) = zend_ast_create(ZEND_AST_UNARY_PLUS, (yyvsp[0].ast)); }

    break;

  case 383:

    { (yyval.ast) = zend_ast_create(ZEND_AST_UNARY_MINUS, (yyvsp[0].ast)); }

    break;

  case 384:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_UNARY_OP, ZEND_BOOL_NOT, (yyvsp[0].ast)); }

    break;

  case 385:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_UNARY_OP, ZEND_BW_NOT, (yyvsp[0].ast)); }

    break;

  case 386:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_IDENTICAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 387:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_NOT_IDENTICAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 388:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 389:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_NOT_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 390:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_SMALLER, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 391:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_SMALLER_OR_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 392:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GREATER, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 393:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GREATER_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 394:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_SPACESHIP, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 395:

    { (yyval.ast) = zend_ast_create(ZEND_AST_INSTANCEOF, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 396:

    {
			(yyval.ast) = (yyvsp[-1].ast);
			if ((yyval.ast)->kind == ZEND_AST_CONDITIONAL) (yyval.ast)->attr = ZEND_PARENTHESIZED_CONDITIONAL;
		}

    break;

  case 397:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 398:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CONDITIONAL, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 399:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CONDITIONAL, (yyvsp[-3].ast), NULL, (yyvsp[0].ast)); }

    break;

  case 400:

    { (yyval.ast) = zend_ast_create(ZEND_AST_COALESCE, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 401:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 402:

    { (yyval.ast) = zend_ast_create_cast(IS_LONG, (yyvsp[0].ast)); }

    break;

  case 403:

    { (yyval.ast) = zend_ast_create_cast(IS_DOUBLE, (yyvsp[0].ast)); }

    break;

  case 404:

    { (yyval.ast) = zend_ast_create_cast(IS_STRING, (yyvsp[0].ast)); }

    break;

  case 405:

    { (yyval.ast) = zend_ast_create_cast(IS_ARRAY, (yyvsp[0].ast)); }

    break;

  case 406:

    { (yyval.ast) = zend_ast_create_cast(IS_OBJECT, (yyvsp[0].ast)); }

    break;

  case 407:

    { (yyval.ast) = zend_ast_create_cast(_IS_BOOL, (yyvsp[0].ast)); }

    break;

  case 408:

    { (yyval.ast) = zend_ast_create_cast(IS_NULL, (yyvsp[0].ast)); }

    break;

  case 409:

    { (yyval.ast) = zend_ast_create(ZEND_AST_EXIT, (yyvsp[0].ast)); }

    break;

  case 410:

    { (yyval.ast) = zend_ast_create(ZEND_AST_SILENCE, (yyvsp[0].ast)); }

    break;

  case 411:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 412:

    { (yyval.ast) = zend_ast_create(ZEND_AST_SHELL_EXEC, (yyvsp[-1].ast)); }

    break;

  case 413:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PRINT, (yyvsp[0].ast)); }

    break;

  case 414:

    { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD, NULL, NULL); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; }

    break;

  case 415:

    { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD, (yyvsp[0].ast), NULL); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; }

    break;

  case 416:

    { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD, (yyvsp[0].ast), (yyvsp[-2].ast)); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; }

    break;

  case 417:

    { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD_FROM, (yyvsp[0].ast)); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; }

    break;

  case 418:

    { (yyval.ast) = zend_ast_create(ZEND_AST_THROW, (yyvsp[0].ast)); }

    break;

  case 419:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 420:

    { (yyval.ast) = zend_ast_with_attributes((yyvsp[0].ast), (yyvsp[-1].ast)); }

    break;

  case 421:

    { (yyval.ast) = (yyvsp[0].ast); ((zend_ast_decl *) (yyval.ast))->flags |= ZEND_ACC_STATIC; }

    break;

  case 422:

    { (yyval.ast) = zend_ast_with_attributes((yyvsp[0].ast), (yyvsp[-2].ast)); ((zend_ast_decl *) (yyval.ast))->flags |= ZEND_ACC_STATIC; }

    break;

  case 423:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 424:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLOSURE, (yyvsp[-11].num) | (yyvsp[0].num), (yyvsp[-12].num), (yyvsp[-10].str),
				  zend_string_init("{closure}", sizeof("{closure}") - 1, 0),
				  (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-2].ast), (yyvsp[-5].ast), NULL); CG(extra_fn_flags) = (yyvsp[-4].num); }

    break;

  case 425:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_ARROW_FUNC, (yyvsp[-10].num) | (yyvsp[0].num), (yyvsp[-11].num), (yyvsp[-9].str),
				  zend_string_init("{closure}", sizeof("{closure}") - 1, 0), (yyvsp[-7].ast), NULL,
				  zend_ast_create(ZEND_AST_RETURN, (yyvsp[-1].ast)), (yyvsp[-5].ast), NULL);
				  ((zend_ast_decl *) (yyval.ast))->lex_pos = (yyvsp[-2].ptr);
				  CG(extra_fn_flags) = (yyvsp[-3].num); }

    break;

  case 426:

    { (yyval.num) = CG(zend_lineno); }

    break;

  case 427:

    { (yyval.num) = CG(zend_lineno); }

    break;

  case 428:

    { (yyval.str) = CG(doc_comment); CG(doc_comment) = NULL; }

    break;

  case 429:

    { (yyval.num) = CG(extra_fn_flags); CG(extra_fn_flags) = 0; }

    break;

  case 430:

    { (yyval.ptr) = LANG_SCNG(yy_text); }

    break;

  case 431:

    { (yyval.num) = 0; }

    break;

  case 432:

    { (yyval.num) = ZEND_ACC_RETURN_REFERENCE; }

    break;

  case 433:

    { (yyval.ast) = NULL; }

    break;

  case 434:

    { (yyval.ast) = (yyvsp[-2].ast); }

    break;

  case 435:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 436:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_CLOSURE_USES, (yyvsp[0].ast)); }

    break;

  case 437:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 438:

    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_BIND_REF; }

    break;

  case 439:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CALL, (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 440:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_CALL, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 441:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_CALL, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 442:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CALL, (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 443:

    { zval zv; ZVAL_INTERNED_STR(&zv, ZSTR_KNOWN(ZEND_STR_STATIC));
			  (yyval.ast) = zend_ast_create_zval_ex(&zv, ZEND_NAME_NOT_FQ); }

    break;

  case 444:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 445:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 446:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 447:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 448:

    { (yyval.ast) = NULL; }

    break;

  case 449:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 450:

    { (yyval.ast) = zend_ast_create_zval_from_str(ZSTR_EMPTY_ALLOC()); }

    break;

  case 451:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 452:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 453:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_ARG_LIST); }

    break;

  case 454:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 455:

    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_ARRAY_SYNTAX_LONG; }

    break;

  case 456:

    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_ARRAY_SYNTAX_SHORT; }

    break;

  case 457:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 458:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 459:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 460:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 461:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 462:

    { (yyval.ast) = zend_ast_create_zval_from_str(ZSTR_EMPTY_ALLOC()); }

    break;

  case 463:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 464:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 465:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 466:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 467:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CONST, (yyvsp[0].ast)); }

    break;

  case 468:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_LINE); }

    break;

  case 469:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_FILE); }

    break;

  case 470:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_DIR); }

    break;

  case 471:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_TRAIT_C); }

    break;

  case 472:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_METHOD_C); }

    break;

  case 473:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_FUNC_C); }

    break;

  case 474:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_NS_C); }

    break;

  case 475:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_CLASS_C); }

    break;

  case 476:

    { (yyval.ast) = zend_ast_create_class_const_or_name((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 477:

    { (yyval.ast) = zend_ast_create_class_const_or_name((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 478:

    { (yyval.ast) = NULL; }

    break;

  case 479:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 480:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 481:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 482:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 483:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 484:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 485:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 486:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 487:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 488:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 489:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 490:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }

    break;

  case 491:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[-3].ast), (yyvsp[-1].ast)); }

    break;

  case 492:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_DIM, ZEND_DIM_ALTERNATIVE_SYNTAX, (yyvsp[-3].ast), (yyvsp[-1].ast)); }

    break;

  case 493:

    { (yyval.ast) = zend_ast_create(ZEND_AST_METHOD_CALL, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 494:

    { (yyval.ast) = zend_ast_create(ZEND_AST_NULLSAFE_METHOD_CALL, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 495:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 496:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 497:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 498:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 499:

    { (yyval.ast) = zend_ast_create(ZEND_AST_NULLSAFE_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 500:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 501:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 502:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }

    break;

  case 503:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 504:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 505:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }

    break;

  case 506:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[-3].ast), (yyvsp[-1].ast)); }

    break;

  case 507:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_DIM, ZEND_DIM_ALTERNATIVE_SYNTAX, (yyvsp[-3].ast), (yyvsp[-1].ast)); }

    break;

  case 508:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 509:

    { (yyval.ast) = zend_ast_create(ZEND_AST_NULLSAFE_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 510:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 511:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 512:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 513:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 514:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }

    break;

  case 515:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 516:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 517:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }

    break;

  case 518:

    { /* allow single trailing comma */ (yyval.ast) = zend_ast_list_rtrim((yyvsp[0].ast)); }

    break;

  case 519:

    { (yyval.ast) = NULL; }

    break;

  case 520:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 521:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 522:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ARRAY, (yyvsp[0].ast)); }

    break;

  case 523:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[0].ast), (yyvsp[-2].ast)); }

    break;

  case 524:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[0].ast), NULL); }

    break;

  case 525:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_ARRAY_ELEM, 1, (yyvsp[0].ast), (yyvsp[-3].ast)); }

    break;

  case 526:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_ARRAY_ELEM, 1, (yyvsp[0].ast), NULL); }

    break;

  case 527:

    { (yyval.ast) = zend_ast_create(ZEND_AST_UNPACK, (yyvsp[0].ast)); }

    break;

  case 528:

    { (yyvsp[-1].ast)->attr = ZEND_ARRAY_SYNTAX_LIST;
			  (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[-1].ast), (yyvsp[-5].ast)); }

    break;

  case 529:

    { (yyvsp[-1].ast)->attr = ZEND_ARRAY_SYNTAX_LIST;
			  (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[-1].ast), NULL); }

    break;

  case 530:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 531:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 532:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ENCAPS_LIST, (yyvsp[0].ast)); }

    break;

  case 533:

    { (yyval.ast) = zend_ast_create_list(2, ZEND_AST_ENCAPS_LIST, (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 534:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }

    break;

  case 535:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[-3].ast)), (yyvsp[-1].ast)); }

    break;

  case 536:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[-2].ast)), (yyvsp[0].ast)); }

    break;

  case 537:

    { (yyval.ast) = zend_ast_create(ZEND_AST_NULLSAFE_PROP,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[-2].ast)), (yyvsp[0].ast)); }

    break;

  case 538:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[-1].ast)); }

    break;

  case 539:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[-1].ast)); }

    break;

  case 540:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[-4].ast)), (yyvsp[-2].ast)); }

    break;

  case 541:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 542:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 543:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 544:

    { (yyval.ast) = zend_negate_num_string((yyvsp[0].ast)); }

    break;

  case 545:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }

    break;

  case 546:

    { (yyval.ast) = (yyvsp[-2].ast); }

    break;

  case 547:

    { (yyval.ast) = zend_ast_create(ZEND_AST_EMPTY, (yyvsp[-1].ast)); }

    break;

  case 548:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_INCLUDE, (yyvsp[0].ast)); }

    break;

  case 549:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_INCLUDE_ONCE, (yyvsp[0].ast)); }

    break;

  case 550:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_EVAL, (yyvsp[-1].ast)); }

    break;

  case 551:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_REQUIRE, (yyvsp[0].ast)); }

    break;

  case 552:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_REQUIRE_ONCE, (yyvsp[0].ast)); }

    break;

  case 553:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 554:

    { (yyval.ast) = zend_ast_create(ZEND_AST_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 555:

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



/* Over-ride Bison formatting routine to give better token descriptions.
   Copy to YYRES the contents of YYSTR for use in yyerror.
   YYSTR is taken from yytname, from the %token declaration.
   If YYRES is null, do not copy; instead, return the length of what
   the result would have been.  */
static YYSIZE_T zend_yytnamerr(char *yyres, const char *yystr)
{
	const char *toktype = yystr;
	size_t toktype_len = strlen(toktype);

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
		const unsigned char *tokcontent, *tokcontent_end;
		size_t tokcontent_len;

		CG(parse_error)++;

		if (LANG_SCNG(yy_text)[0] == 0 &&
			LANG_SCNG(yy_leng) == 1 &&
			strcmp(toktype, "\"end of file\"") == 0) {
			if (yyres) {
				yystpcpy(yyres, "end of file");
			}
			return sizeof("end of file")-1;
		}

		/* Prevent the backslash getting doubled in the output (eugh) */
		if (strcmp(toktype, "\"'\\\\'\"") == 0) {
			if (yyres) {
				yystpcpy(yyres, "token \"\\\"");
			}
			return sizeof("token \"\\\"")-1;
		}

		/* Avoid unreadable """ */
		/* "'" would theoretically be just as bad, but is never currently parsed as a separate token */
		if (strcmp(toktype, "'\"'") == 0) {
			if (yyres) {
				yystpcpy(yyres, "double-quote mark");
			}
			return sizeof("double-quote mark")-1;
		}

		/* Strip off the outer quote marks */
		if (toktype_len >= 2 && *toktype == '"') {
			toktype++;
			toktype_len -= 2;
		}

		/* If the token always has one form, the %token line should have a single-quoted name */
		/* The parser rules also include single-character un-named tokens which will be single-quoted here */
		/* We re-format this with double quotes here to ensure everything's consistent */
		if (toktype_len > 0 && *toktype == '\'') {
			if (yyres) {
				snprintf(buffer, sizeof(buffer), "token \"%.*s\"", (int)toktype_len-2, toktype+1);
				yystpcpy(yyres, buffer);
			}
			return toktype_len + sizeof("token ")-1;
		}

		/* Fetch the content of the last seen token from global lexer state */
		tokcontent = LANG_SCNG(yy_text);
		tokcontent_len = LANG_SCNG(yy_leng);

		/* For T_BAD_CHARACTER, the content probably won't be a printable char */
		/* Also, "unexpected invalid character" sounds a bit redundant */
		if (tokcontent_len == 1 && strcmp(yystr, "\"invalid character\"") == 0) {
			if (yyres) {
				snprintf(buffer, sizeof(buffer), "character 0x%02hhX", *tokcontent);
				yystpcpy(yyres, buffer);
			}
			return sizeof("character 0x00")-1;
		}

		/* Truncate at line end to avoid messing up log formats */
		tokcontent_end = memchr(tokcontent, '\n', tokcontent_len);
		if (tokcontent_end != NULL) {
			tokcontent_len = (tokcontent_end - tokcontent);
		}

		/* Try to be helpful about what kind of string was found, before stripping the quotes */
		if (tokcontent_len > 0 && strcmp(yystr, "\"quoted string\"") == 0) {
			if (*tokcontent == '"') {
				toktype = "double-quoted string";
				toktype_len = sizeof("double-quoted string")-1;
			}
			else if (*tokcontent == '\'') {
				toktype = "single-quoted string";
				toktype_len = sizeof("single-quoted string")-1;
			}
		}

		/* For quoted strings, strip off another layer of quotes to avoid putting quotes inside quotes */
		if (tokcontent_len > 0 && (*tokcontent == '\'' || *tokcontent=='"'))  {
			tokcontent++;
			tokcontent_len--;
		}
		if (tokcontent_len > 0 && (tokcontent[tokcontent_len-1] == '\'' || tokcontent[tokcontent_len-1] == '"'))  {
			tokcontent_len--;
		}

		/* Truncate to 30 characters and add a ... */
		if (tokcontent_len > 30 + sizeof("...")-1) {
			if (yyres) {
				snprintf(buffer, sizeof(buffer), "%.*s \"%.*s...\"", (int)toktype_len, toktype, 30, tokcontent);
				yystpcpy(yyres, buffer);
			}
			return toktype_len + 30 + sizeof(" \"...\"")-1;
		}

		if (yyres) {
			snprintf(buffer, sizeof(buffer), "%.*s \"%.*s\"", (int)toktype_len, toktype, (int)tokcontent_len, tokcontent);
			yystpcpy(yyres, buffer);
		}
		return toktype_len + tokcontent_len + sizeof(" \"\"")-1;
	}

	/* One of the expected tokens */

	/* Prevent the backslash getting doubled in the output (eugh) */
	if (strcmp(toktype, "\"'\\\\'\"") == 0) {
		if (yyres) {
			yystpcpy(yyres, "\"\\\"");
		}
		return sizeof("\"\\\"")-1;
	}

	/* Strip off the outer quote marks */
	if (toktype_len >= 2 && *toktype == '"') {
		toktype++;
		toktype_len -= 2;
	}

	if (yyres) {
		YYSIZE_T yyn = 0;

		for (; yyn < toktype_len; ++yyn) {
			/* Replace single quotes with double for consistency */
			if (toktype[yyn] == '\'') {
				yyres[yyn] = '"';
			}
			else {
				yyres[yyn] = toktype[yyn];
			}
		}
		yyres[toktype_len] = '\0';
	}

	return toktype_len;
}
