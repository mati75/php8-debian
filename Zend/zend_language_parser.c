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
    T_VARIABLE = 312,
    T_INLINE_HTML = 313,
    T_ENCAPSED_AND_WHITESPACE = 314,
    T_CONSTANT_ENCAPSED_STRING = 315,
    T_STRING_VARNAME = 316,
    T_NUM_STRING = 317,
    T_EVAL = 318,
    T_NEW = 319,
    T_EXIT = 320,
    T_IF = 321,
    T_ENDIF = 322,
    T_ECHO = 323,
    T_DO = 324,
    T_WHILE = 325,
    T_ENDWHILE = 326,
    T_FOR = 327,
    T_ENDFOR = 328,
    T_FOREACH = 329,
    T_ENDFOREACH = 330,
    T_DECLARE = 331,
    T_ENDDECLARE = 332,
    T_AS = 333,
    T_SWITCH = 334,
    T_ENDSWITCH = 335,
    T_CASE = 336,
    T_DEFAULT = 337,
    T_MATCH = 338,
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
    T_USE = 349,
    T_INSTEADOF = 350,
    T_GLOBAL = 351,
    T_STATIC = 352,
    T_ABSTRACT = 353,
    T_FINAL = 354,
    T_PRIVATE = 355,
    T_PROTECTED = 356,
    T_PUBLIC = 357,
    T_VAR = 358,
    T_UNSET = 359,
    T_ISSET = 360,
    T_EMPTY = 361,
    T_HALT_COMPILER = 362,
    T_CLASS = 363,
    T_TRAIT = 364,
    T_INTERFACE = 365,
    T_EXTENDS = 366,
    T_IMPLEMENTS = 367,
    T_NAMESPACE = 368,
    T_LIST = 369,
    T_ARRAY = 370,
    T_CALLABLE = 371,
    T_LINE = 372,
    T_FILE = 373,
    T_DIR = 374,
    T_CLASS_C = 375,
    T_TRAIT_C = 376,
    T_METHOD_C = 377,
    T_FUNC_C = 378,
    T_NS_C = 379,
    T_INC = 380,
    T_DEC = 381,
    T_OBJECT_OPERATOR = 382,
    T_COMMENT = 383,
    T_DOC_COMMENT = 384,
    T_OPEN_TAG = 385,
    T_OPEN_TAG_WITH_ECHO = 386,
    T_CLOSE_TAG = 387,
    T_WHITESPACE = 388,
    T_START_HEREDOC = 389,
    T_END_HEREDOC = 390,
    T_DOLLAR_OPEN_CURLY_BRACES = 391,
    T_CURLY_OPEN = 392,
    T_PAAMAYIM_NEKUDOTAYIM = 393,
    T_NS_SEPARATOR = 394,
    T_ELLIPSIS = 395,
    T_BAD_CHARACTER = 396,
    T_ERROR = 397
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
#define YYLAST   7561

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  171
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  159
/* YYNRULES -- Number of rules.  */
#define YYNRULES  547
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1027

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   397

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,   169,     2,   170,    54,    37,     2,
     160,   161,    52,    50,   165,    51,    47,    53,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    31,   162,
      43,    16,    45,    30,    65,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   166,     2,   167,    36,     2,   168,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   163,    35,   164,    57,     2,     2,     2,
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
     152,   153,   154,   155,   156,   157,   158,   159
};

#if ZENDDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   279,   279,   283,   283,   283,   283,   283,   283,   283,
     283,   284,   284,   284,   284,   284,   284,   284,   284,   284,
     284,   284,   284,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   286,   286,   286,   286,   286,   286,   286,
     286,   286,   286,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   287,   288,   288,   288,   288,   288,   288,
     288,   288,   289,   289,   289,   289,   289,   289,   289,   289,
     289,   289,   293,   294,   294,   294,   294,   294,   294,   298,
     299,   307,   308,   312,   313,   317,   318,   319,   323,   325,
     330,   334,   335,   339,   340,   341,   342,   346,   347,   348,
     349,   353,   356,   356,   359,   359,   362,   363,   364,   365,
     366,   370,   371,   375,   377,   382,   384,   389,   390,   394,
     396,   401,   403,   408,   410,   415,   416,   420,   422,   427,
     428,   432,   433,   437,   439,   445,   446,   447,   448,   455,
     456,   457,   458,   460,   462,   464,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   477,   481,   480,   484,
     485,   487,   488,   492,   494,   499,   500,   504,   505,   509,
     510,   514,   515,   519,   523,   530,   531,   535,   536,   540,
     540,   543,   543,   549,   550,   555,   556,   560,   560,   566,
     566,   572,   573,   577,   578,   582,   583,   587,   588,   589,
     590,   594,   595,   599,   600,   604,   605,   609,   610,   611,
     612,   616,   617,   619,   624,   625,   630,   635,   636,   640,
     641,   645,   647,   652,   653,   658,   659,   664,   667,   673,
     674,   679,   682,   688,   689,   695,   696,   701,   703,   708,
     709,   713,   714,   715,   716,   720,   724,   732,   733,   737,
     738,   739,   743,   744,   748,   749,   756,   757,   758,   762,
     763,   764,   768,   770,   775,   776,   780,   781,   785,   787,
     792,   793,   797,   798,   802,   808,   809,   813,   814,   818,
     820,   826,   829,   832,   839,   840,   841,   846,   847,   851,
     852,   853,   857,   859,   864,   865,   869,   874,   876,   880,
     882,   887,   889,   893,   898,   899,   903,   904,   908,   909,
     914,   915,   920,   921,   922,   923,   924,   925,   929,   930,
     934,   936,   941,   942,   946,   950,   954,   955,   958,   962,
     963,   967,   968,   972,   972,   982,   984,   986,   991,   993,
     995,   997,   999,  1001,  1002,  1004,  1006,  1008,  1010,  1012,
    1014,  1016,  1018,  1020,  1022,  1024,  1026,  1028,  1029,  1030,
    1031,  1032,  1034,  1036,  1038,  1040,  1042,  1043,  1044,  1045,
    1046,  1047,  1048,  1049,  1050,  1051,  1052,  1053,  1054,  1055,
    1056,  1057,  1058,  1060,  1062,  1064,  1066,  1068,  1070,  1072,
    1074,  1076,  1078,  1082,  1083,  1085,  1087,  1089,  1090,  1091,
    1092,  1093,  1094,  1095,  1096,  1097,  1098,  1099,  1100,  1101,
    1102,  1103,  1104,  1105,  1106,  1107,  1108,  1109,  1110,  1112,
    1117,  1122,  1132,  1136,  1140,  1144,  1148,  1152,  1153,  1157,
    1158,  1162,  1163,  1167,  1168,  1172,  1174,  1176,  1178,  1183,
    1186,  1190,  1191,  1192,  1196,  1197,  1201,  1203,  1204,  1209,
    1210,  1215,  1216,  1217,  1218,  1222,  1223,  1224,  1225,  1227,
    1228,  1229,  1230,  1234,  1235,  1236,  1237,  1238,  1239,  1240,
    1241,  1242,  1246,  1248,  1253,  1254,  1258,  1262,  1263,  1264,
    1265,  1269,  1270,  1274,  1275,  1276,  1280,  1282,  1284,  1286,
    1288,  1292,  1294,  1296,  1301,  1302,  1303,  1307,  1309,  1314,
    1316,  1318,  1320,  1322,  1324,  1329,  1330,  1331,  1335,  1336,
    1337,  1341,  1346,  1347,  1351,  1353,  1358,  1360,  1362,  1364,
    1366,  1368,  1371,  1377,  1379,  1381,  1383,  1388,  1390,  1393,
    1396,  1398,  1400,  1403,  1407,  1408,  1409,  1410,  1415,  1416,
    1417,  1419,  1421,  1423,  1425,  1430,  1431,  1436
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
  "\"floating-point number\"", "\"identifier\"", "\"variable\"",
  "T_INLINE_HTML", "\"string content\"", "\"quoted string\"",
  "\"variable name\"", "\"number\"", "\"'eval'\"", "\"'new'\"",
  "\"'exit'\"", "\"'if'\"", "\"'endif'\"", "\"'echo'\"", "\"'do'\"",
  "\"'while'\"", "\"'endwhile'\"", "\"'for'\"", "\"'endfor'\"",
  "\"'foreach'\"", "\"'endforeach'\"", "\"'declare'\"", "\"'enddeclare'\"",
  "\"'as'\"", "\"'switch'\"", "\"'endswitch'\"", "\"'case'\"",
  "\"'default'\"", "\"'match'\"", "\"'break'\"", "\"'continue'\"",
  "\"'goto'\"", "\"'function'\"", "\"'fn'\"", "\"'const'\"",
  "\"'return'\"", "\"'try'\"", "\"'catch'\"", "\"'finally'\"", "\"'use'\"",
  "\"'insteadof'\"", "\"'global'\"", "\"'static'\"", "\"'abstract'\"",
  "\"'final'\"", "\"'private'\"", "\"'protected'\"", "\"'public'\"",
  "\"'var'\"", "\"'unset'\"", "\"'isset'\"", "\"'empty'\"",
  "\"'__halt_compiler'\"", "\"'class'\"", "\"'trait'\"", "\"'interface'\"",
  "\"'extends'\"", "\"'implements'\"", "\"'namespace'\"", "\"'list'\"",
  "\"'array'\"", "\"'callable'\"", "\"'__LINE__'\"", "\"'__FILE__'\"",
  "\"'__DIR__'\"", "\"'__CLASS__'\"", "\"'__TRAIT__'\"",
  "\"'__METHOD__'\"", "\"'__FUNCTION__'\"", "\"'__NAMESPACE__'\"",
  "\"'++'\"", "\"'--'\"", "\"'->'\"", "\"comment\"", "\"doc comment\"",
  "\"open tag\"", "\"'<?='\"", "\"'?>'\"", "\"whitespace\"",
  "\"heredoc start\"", "\"heredoc end\"", "\"'${'\"", "\"'{$'\"",
  "\"'::'\"", "\"'\\\\'\"", "\"'...'\"", "\"invalid character\"",
  "T_ERROR", "'('", "')'", "';'", "'{'", "'}'", "','", "'['", "']'", "'`'",
  "'\"'", "'$'", "$accept", "start", "reserved_non_modifiers",
  "semi_reserved", "identifier", "top_statement_list", "namespace_name",
  "name", "attribute_decl", "attribute", "attributes",
  "attributed_statement", "top_statement", "$@1", "$@2", "use_type",
  "group_use_declaration", "mixed_group_use_declaration", "possible_comma",
  "inline_use_declarations", "unprefixed_use_declarations",
  "use_declarations", "inline_use_declaration",
  "unprefixed_use_declaration", "use_declaration", "const_list",
  "inner_statement_list", "inner_statement", "statement", "$@3",
  "catch_list", "catch_name_list", "optional_variable",
  "finally_statement", "unset_variables", "unset_variable",
  "function_declaration_statement", "is_reference", "is_variadic",
  "class_declaration_statement", "@4", "@5", "class_modifiers",
  "class_modifier", "trait_declaration_statement", "@6",
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
      40,    41,    59,   123,   125,    44,    91,    93,    96,    34,
      36
};
# endif

#define YYPACT_NINF -843

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-843)))

#define YYTABLE_NINF -520

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-520)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -843,    55,  1318,  -843,  5538,  5538,  5538,  5538,  5538,  5538,
    5538,  5538,   126,  5538,  5538,  5538,  5538,  5538,  5538,  5538,
    5538,  5538,  5538,  5538,  5538,  5538,  -843,  -843,    43,  -843,
    -843,  -843,   -97,   170,   -77,   -42,  5538,  4182,   -22,   -15,
      -5,    54,    77,    97,  5538,  5538,    51,  -843,  -843,   130,
    5538,   -30,   146,   -36,    -9,  -843,  -843,   103,   150,   184,
     230,  -843,  -843,  -843,   -20,   239,   255,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  4615,  4615,   260,   176,  5538,
    -843,  -843,  4324,    41,   412,   134,    64,   -75,  -843,   428,
    -843,  -843,  -843,  -843,  -843,   277,  -843,  -843,  -843,  -843,
     281,  -843,   272,  -843,  -843,  6266,  -843,   413,   413,  -843,
     314,   350,  -843,   -82,    68,   326,   349,   352,   348,   354,
    3346,  -843,  -843,  -843,  -843,   306,   363,   258,  7309,   413,
    7309,  7309,  7309,  7309,  5839,  7397,  5839,  -843,  -843,   482,
     348,   468,   468,    56,   468,   468,   468,   468,   468,   468,
     468,   468,   468,  -843,  -843,  5538,  -843,  5538,     3,  -843,
     381,   348,  -843,   346,  5538,  -843,  5538,    89,  -843,  7309,
     451,  5538,  5538,  5538,   130,  5538,  5538,  7309,   378,   383,
     394,   532,   193,  -843,   397,  -843,  -843,  -843,   176,   -27,
      -4,   415,   202,  -843,  -843,   232,  -843,  -843,   559,   289,
    -843,  -843,  4615,  5538,  5538,   420,   513,   515,   517,   176,
     -58,   430,  4324,  4324,  5538,  4324,   444,  -843,  -843,   395,
     395,   -90,   225,  -843,  4660,  4615,   373,  -843,    64,  6315,
    1460,  4615,   445,  5538,  7261,   439,  -843,   447,  -843,   200,
     452,   417,   200,   222,  5538,  -843,   549,  4492,  -843,   306,
    -843,  -843,  -843,  -843,  -843,   466,  4182,   467,   597,   472,
    5538,  5538,  5538,  4802,  5538,  5538,  5538,  5538,  5538,  5538,
    5538,  5538,  5538,  5538,  5538,  5538,  5538,  5538,  5538,  5538,
    5538,  5538,  5538,  5538,  5538,  5538,  5538,   187,  5538,  -843,
    -843,  -843,   557,  3332,  3332,   -16,  5538,  5538,  -843,  4944,
    5538,  5538,  5538,  5538,  5538,  5538,  5538,  5538,  5538,  5538,
    5538,  5538,  5538,  -843,  -843,  -843,  5538,  -843,  -843,  6363,
     348,  6411,  -843,   -36,  -843,  -843,   -16,   -36,  5538,  5538,
     474,  6459,  -843,  5538,   476,  6507,   480,   486,  7309,  7197,
      60,  6555,  6603,  -843,  -843,  -843,  5538,  -843,   130,  -843,
    1602,   131,  -843,   564,   -32,   176,   147,   490,   318,  -843,
    -843,     0,  -843,   -36,  5538,  -843,   579,   489,  -843,   105,
    7309,   492,  -843,  6651,   503,   538,  -843,   539,    64,  -843,
     505,  -843,   511,   512,  6699,   507,   602,   322,  -843,  -843,
     114,  1022,   516,  -843,  -843,  -843,   386,   519,  -843,   428,
    -843,  -843,  -843,   424,  4324,  7309,  5086,   661,  4324,  -843,
    -843,  5978,  -843,  5538,  -843,   522,  -843,  7309,  -843,   609,
    5538,  -843,  5538,  -843,  -843,  7356,  7057,  5839,  5538,  5382,
    7432,  6923,  7464,  7495,  6873,  4369,  4537,  4537,  4537,  4537,
    4537,   964,   964,   964,   964,   884,   901,   901,   543,   543,
      56,    56,    56,  -843,   468,   529,  -843,   531,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  5538,  -843,  -843,   534,   545,   348,
     534,   545,   348,  -843,  5538,  -843,   348,  6026,   525,  4615,
    5839,  5839,  5839,  5839,  5839,  5839,  5839,  5839,  5839,  5839,
    5839,  5839,  5839,  5839,  5839,  -843,   538,  -843,  -843,  -843,
    -843,  6074,   546,  -843,  3472,  -843,  5538,  3614,  5538,  5538,
    5611,  -843,   -19,   535,  7309,  -843,  -843,   -28,  -843,    -3,
     151,   -17,  -843,  -843,   176,   163,  -843,  -843,  7309,  -843,
    4615,   550,  5538,   553,  -843,  -843,   126,   570,   547,   126,
    -843,  -843,  1034,   699,  -843,   558,  -843,  -843,   644,  -843,
    -843,  -843,   566,  -843,  5538,  -843,  -843,   563,  -843,   565,
    4615,   571,  7309,  5538,  -843,  -843,  7309,  5228,   575,   538,
    6747,  6795,  1744,  7432,  5538,    92,   577,    92,  6122,  -843,
    -843,  6170,  -843,  -843,  -843,   395,   570,  -843,  -843,  -843,
    -843,  6843,  -843,  -843,  -843,   582,  7309,  4615,   581,  4324,
       7,    22,  3756,   585,   587,  -843,  5396,  -843,     1,    -3,
     176,   560,  -843,  -843,   -12,   176,  -843,   590,  -843,  -843,
    -843,   126,  -843,  -843,   574,  -843,   591,  1176,  -843,  5538,
    -843,  -843,  4478,   593,   699,   458,  4324,  5839,  -843,  -843,
     570,  4182,   725,   599,  7432,  -843,  -843,  -843,   268,   610,
     605,  -843,    57,  -843,    92,   611,  -843,  -843,  -843,  3164,
     613,  1886,  5538,    30,  4324,   606,  5611,  3898,  -843,  -843,
    -843,  -843,   400,  -843,   169,   612,   614,   617,  -843,   619,
    7309,   626,   616,  -843,   560,  -843,    -3,   623,   176,   625,
    -843,  -843,   574,   628,   174,   126,  -843,  -843,  5839,   630,
    -843,   631,  -843,  -843,  -843,  -843,  -843,   764,   154,  -843,
     -24,  -843,  -843,  -843,   759,  -843,   762,   767,   642,   693,
     646,  -843,   643,   650,   651,    32,   653,  -843,  -843,  -843,
    2028,   475,   645,  5538,   -14,   347,  -843,  -843,   796,  -843,
    5396,  -843,  5538,   804,   126,  -843,   655,  -843,  -843,   625,
     176,   657,  -843,   126,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,   753,  -843,  -843,    57,   233,   856,  -843,  -843,
     544,  -843,   699,   660,  3164,    -7,   810,  -843,  -843,  -843,
     670,   -24,   -24,   764,   668,   764,  -843,  -843,  4040,  -843,
    3898,  2170,   669,   671,  -843,  6218,  -843,  -843,  -843,  -843,
    5538,  -843,  7309,  5538,    40,  -843,  2312,  -843,   666,  -843,
    -843,   649,   243,  -843,   760,  6925,   413,  -843,  -843,  -843,
     251,  -843,  -843,   801,   802,  -843,  -843,  -843,   766,  -843,
    -843,  -843,    23,  -843,   778,  -843,  -843,  -843,  -843,   679,
    -843,  -843,  -843,  3164,  7309,  7309,   126,  -843,   683,  -843,
    -843,  -843,  -843,  5706,  -843,   832,   330,  -843,   833,   359,
    -843,  6925,   805,  -843,   251,   251,  -843,  -843,   687,   777,
    -843,   160,  -843,   689,  -843,  2454,  -843,  3164,  -843,   691,
     761,   703,   363,  -843,  -843,  5845,  -843,   714,   715,   770,
     749,   723,  5538,  -843,  -843,   760,  5538,  -843,  6925,  -843,
    -843,  -843,  -843,  5538,   864,  -843,  -843,  -843,    23,  -843,
     719,  -843,  -843,  -843,  -843,  -843,  7064,   126,  6925,  7309,
    -843,  7309,  -843,   722,  7309,  5538,  2596,  -843,  2738,  -843,
    2880,  -843,  -843,  6925,   574,  -843,  -843,  -843,    92,  -843,
    7309,  -843,  -843,  -843,  -843,   724,  -843,  -843,   764,  -843,
     366,  -843,  -843,  -843,  3022,  -843,  -843
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      82,     0,     2,     1,     0,     0,     0,     0,     0,     0,
     410,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   455,   456,    83,   494,
     152,   453,     0,     0,   444,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   474,   474,     0,   423,   422,     0,
     474,     0,     0,     0,   439,   185,   186,     0,     0,     0,
       0,   181,   187,   189,   104,     0,     0,   464,   465,   466,
     471,   467,   468,   469,   470,     0,     0,     0,     0,     0,
     159,   134,   512,   446,     0,     0,    85,   463,    91,     0,
      98,    81,    97,    93,    94,     0,   183,    95,    96,   419,
     229,   140,     0,   141,   393,     0,   415,   427,   427,   490,
       0,   460,   407,   461,   462,     0,   481,     0,     0,   491,
     338,   486,   492,   397,    83,   439,     0,     0,   414,   427,
     540,   541,   543,   544,   409,   411,   413,   439,   440,     0,
      88,   378,   379,   380,   381,   398,   399,   400,   401,   402,
     403,   404,   406,   343,   162,     0,   333,     0,     0,   336,
     441,   449,   499,   442,   474,   405,     0,     0,   327,   328,
       0,     0,   329,     0,     0,     0,     0,   475,     0,     0,
       0,     0,     0,   132,     0,   134,   111,   112,     0,   127,
       0,     0,     0,   129,   124,     0,   273,   274,   277,     0,
     276,   417,     0,     0,     0,     0,     0,     0,     0,     0,
     102,     0,   512,   512,     0,   512,   479,   482,   480,   358,
     360,   527,     0,   458,     0,     0,     0,   525,    87,     0,
       0,     0,     0,     0,   517,     0,   515,   511,   513,   447,
       0,   448,     0,     0,     0,   496,     0,     0,   435,     0,
      92,    99,   416,   179,   184,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   153,
     428,   424,   424,     0,     0,     0,     0,   474,   438,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   357,   359,   424,     0,    90,    89,     0,
     449,     0,   337,     0,   450,   335,     0,     0,     0,   474,
       0,     0,   151,     0,     0,     0,     0,   330,   332,     0,
       0,     0,     0,   146,   147,   161,     0,   110,     0,   148,
       0,   127,   130,     0,     0,     0,   127,     0,     0,   106,
     108,     0,   149,     0,     0,   150,     0,   117,   171,   477,
     547,   117,   545,     0,     0,   191,   424,   193,    86,   101,
       0,    82,     0,     0,     0,     0,     0,     0,   457,   526,
       0,     0,   477,   524,   459,   523,   392,     0,   139,     0,
     136,   133,   135,   477,   512,   520,     0,   452,   512,   408,
     454,     0,    84,     0,   266,   117,   268,   270,   418,     0,
       0,   230,     0,   134,   233,   363,   365,   364,     0,     0,
     396,   361,   362,   366,   368,   367,   384,   385,   382,   383,
     390,   386,   387,   388,   389,   369,   376,   377,   370,   371,
     372,   374,   375,   391,   373,     0,   424,     0,    33,     3,
       4,     6,     7,     8,     9,    10,    46,    47,    11,    13,
      16,    17,    79,     5,    12,    14,    15,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    49,
      50,    51,    52,    71,    53,    41,    42,    43,    70,    44,
      45,    30,    31,    32,    34,    35,    36,    73,    74,    75,
      76,    77,    78,    37,    38,    39,    40,    61,    59,    60,
      56,    57,    58,    48,    54,    55,    66,    67,    68,    62,
      63,    65,    64,    69,     0,    72,    80,   472,   497,     0,
     473,   498,     0,   508,     0,   510,   493,     0,     0,     0,
     341,   344,   345,   346,   348,   349,   350,   351,   352,   353,
     354,   355,   347,   356,   412,   542,   191,   443,   503,   502,
     504,     0,     0,   445,     0,   326,     0,     0,   329,     0,
       0,   157,     0,     0,   424,   131,   163,     0,   128,     0,
     127,     0,   107,   109,     0,   127,   123,   272,   278,   275,
     118,     0,   118,     0,   539,   100,     0,   195,     0,     0,
     424,    82,     0,     0,   451,   478,   452,   529,     0,   534,
     537,   535,     0,   531,     0,   530,   533,     0,   137,     0,
       0,     0,   516,     0,   514,   495,   271,   118,     0,   191,
       0,     0,     0,   395,     0,   241,     0,   241,     0,   436,
     437,     0,   489,   488,   487,   342,   195,   501,   500,   134,
     227,     0,   134,   225,   142,     0,   331,     0,     0,   512,
       0,   477,     0,   211,   211,   145,   217,   325,   169,     0,
       0,   117,   120,   125,     0,     0,   172,     0,   546,   538,
     192,     0,   424,   280,   194,   287,     0,     0,   105,     0,
     536,   528,     0,     0,   522,   477,   512,   340,   269,   267,
     195,     0,     0,     0,   394,   244,   243,   242,   241,     0,
     117,   237,   247,   240,   241,     0,   506,   509,   424,   231,
       0,     0,   329,   477,   512,     0,     0,     0,   134,   205,
     158,   211,     0,   211,     0,   117,     0,   117,   219,   117,
     223,     0,     0,   160,   117,   126,   118,     0,     0,   117,
     122,   154,   196,     0,   308,     0,   280,   103,   339,     0,
     138,     0,   424,   228,   134,   234,   239,   264,   241,   235,
       0,   259,   260,   261,   175,   248,   256,   258,     0,   429,
       0,   143,     0,     0,     0,   452,     0,   134,   203,   155,
       0,     0,     0,     0,     0,     0,   207,   118,     0,   216,
     118,   218,   118,     0,     0,   134,     0,   119,   115,   117,
     118,     0,   280,     0,   315,   316,   317,   314,   313,   312,
     307,   188,   308,   284,   279,   247,     0,   306,   310,   288,
     308,   532,   521,     0,   232,     0,     0,   238,   257,   176,
     177,     0,     0,   264,     0,   264,   280,   226,     0,   199,
       0,     0,     0,     0,   209,     0,   214,   215,   134,   208,
       0,   220,   224,     0,   167,   165,     0,   116,     0,   121,
     113,   308,     0,   285,     0,     0,   427,   311,   190,   280,
       0,   253,   265,   249,   251,   252,   425,   178,     0,   262,
     263,   425,     0,   425,   308,   134,   201,   144,   156,     0,
     206,   210,   134,   213,   222,   221,     0,   168,     0,   170,
     114,   182,   289,     0,   286,   424,     0,   319,     0,     0,
     323,     0,   308,   250,     0,     0,   426,   424,     0,     0,
     433,     0,   432,     0,   334,     0,   204,   212,   166,     0,
      83,    73,    58,   290,   301,     0,   292,     0,     0,     0,
     302,     0,     0,   320,   281,     0,     0,   282,     0,   424,
     180,   254,   255,     0,   245,   134,   434,   430,     0,   134,
       0,   134,   291,   293,   294,   295,     0,     0,     0,   424,
     318,   424,   322,     0,   425,     0,     0,   431,     0,   202,
       0,   297,   298,   300,   296,   303,   321,   324,   241,   421,
     246,   425,   425,   164,   299,     0,   174,   420,   264,   425,
       0,   304,   134,   425,     0,   283,   305
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -843,  -843,  -103,  -843,  -284,  -370,    27,    -6,  -843,   -87,
      -2,     5,  -843,  -843,  -843,   834,  -843,  -843,  -272,   208,
     133,   709,   144,   -72,   540,   729,  -159,  -843,     6,  -843,
    -843,  -843,  -843,  -843,  -843,   304,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,   811,  -843,  -843,  -843,  -843,  -519,  -843,
    -597,   171,  -843,    45,  -843,  -843,  -622,    44,  -843,  -843,
    -843,   104,  -843,  -843,  -843,  -843,  -843,  -843,  -642,  -843,
     135,  -843,   209,    83,  -843,  -842,  -843,  -843,  -694,  -843,
    -833,   -68,  -843,   294,  -843,   576,  -843,   592,  -624,    94,
    -843,  -673,  -843,  -843,     8,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -800,  -843,    11,  -843,     9,   600,  -843,
     608,  -548,  -843,   798,  -843,  -843,   156,   -25,  -843,    -1,
    -249,  -764,  -843,  -105,  -843,  -843,   -13,  -843,    -8,   674,
    -843,  -843,   658,   -43,  -843,     2,    14,   -11,  -843,  -843,
    -843,  -843,  -843,   121,   -18,  -843,  -843,   686,   638,  -199,
     578,  -843,  -843,   484,   407,  -843,  -843,  -843,   380
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   535,   536,   928,     2,    86,    87,   139,    88,
     127,   400,    91,   380,   211,   680,   357,   191,   601,   681,
     759,   192,   682,   193,   194,   182,   230,   401,   402,   672,
     678,   874,   918,   753,   367,   368,    93,   850,   898,    94,
     419,   206,    95,    96,    97,   207,    98,   208,   607,   610,
     692,   670,   907,   799,   740,   675,   742,   868,    99,   746,
     747,   748,   749,   664,   100,   101,   102,   103,   719,   720,
     721,   722,   723,   784,   892,   893,   894,   785,   895,   787,
     846,   324,   415,   416,   195,   196,   199,   200,   764,   833,
     834,   694,   924,   955,   956,   957,   958,   959,   960,  1023,
     835,   836,   837,   838,   926,   927,   929,   930,   183,   167,
     168,   336,   337,   159,   320,   104,   105,   106,   107,   129,
     457,   936,   973,   291,   855,   941,   942,   109,   110,   161,
     165,   240,   325,   111,   112,   113,   114,   178,   115,   116,
     117,   118,   119,   120,   121,   122,   163,   539,   546,   235,
     236,   237,   238,   226,   227,   622,   123,   371,   372
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      89,   108,   250,   292,   140,   725,   138,    90,    92,   537,
     540,   612,   673,   382,   383,   162,   385,   866,   762,   248,
     901,   736,   903,   890,   315,   160,   350,   138,   786,   201,
     665,   158,   216,   216,   179,   197,  -197,   887,    29,   184,
     250,   412,   455,   170,  -198,   412,  -200,   656,   933,   124,
     298,    12,   744,   124,   386,     3,   412,   543,    29,   728,
     939,   412,  -482,   155,   252,   198,   124,   245,   353,   124,
     124,   250,   318,   124,   154,   916,   387,   217,   217,   189,
    -440,  -482,   788,   164,  -482,   247,   848,   780,   108,   218,
     218,   210,   971,   972,   251,    47,    48,   940,   246,   603,
     201,   186,   252,   187,   379,   228,   126,   891,   781,   782,
     751,   752,   287,   772,   917,   221,   352,   239,   166,   801,
     710,   805,   288,   126,   180,   781,   782,   608,   156,   354,
     124,   589,    78,   185,    85,   679,   209,   938,   171,   943,
      12,   786,   840,   638,   674,   172,   685,   544,   867,    78,
     882,   758,   355,   330,    85,   173,   594,   899,   900,   216,
     128,   130,   131,   132,   133,   134,   135,   136,   737,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   216,  -197,   793,  1019,  1003,   126,   216,   781,
     782,  -198,   169,  -200,   224,   225,   219,   220,   881,   124,
     177,   177,    12,   181,   217,   629,   177,   646,    29,   715,
     716,   717,  -480,    78,   174,   351,   218,   356,    12,   124,
     246,   581,    12,  -480,   418,   348,   353,   217,   399,   108,
    1009,  -480,   904,   217,  -480,   229,   378,   175,   234,   218,
     137,   697,   353,   124,    29,   218,   353,  1016,  1017,   124,
     186,   332,   187,  -236,   333,  1020,   126,   176,   353,  1025,
     124,    29,   421,   202,   642,   932,  -173,   803,   804,   162,
    -173,   715,   716,   717,   221,   538,   541,   545,   623,   160,
     624,   138,    78,   352,   137,   823,   548,   587,   824,   825,
     826,   827,   828,   829,   830,   156,   221,   244,   393,   221,
     126,   137,   188,   591,    85,   568,    12,   684,   545,   570,
     203,   319,   250,   321,  1004,  -118,    12,   126,   572,   246,
     177,   977,   331,   369,   124,   978,    78,   335,   338,   339,
     157,   341,   342,   806,   221,   677,   222,    47,   831,   885,
      85,   257,   258,    78,   204,   197,   392,   157,   399,   108,
     255,   256,   403,   224,   225,   347,   259,    85,   348,   370,
     373,   696,    47,    48,   360,   891,  1015,   361,   234,   234,
     384,   234,   249,   618,   252,   224,   225,   388,   224,   225,
     391,   126,   590,   781,   782,   715,   716,   717,   595,   405,
     205,   410,    55,    56,   362,   619,   620,   363,   108,   212,
     411,   621,   253,   417,   628,   922,   923,    78,   765,   757,
      47,    48,   223,   224,   225,   213,   425,   426,   427,   429,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   763,   454,   803,   804,   221,   779,   393,
     290,   365,   547,   177,   366,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   293,
     735,   649,   564,   808,   650,   811,    12,   813,   652,   790,
     593,   294,   816,   361,   571,   177,   221,   821,   242,   169,
     326,   221,   964,   393,  -479,   965,   295,   802,   803,   804,
     729,   327,   584,   731,  -476,  -479,   216,   771,   247,   328,
    -485,   869,   329,  -479,  -483,   296,  -479,   683,   297,   209,
     598,   967,   352,   843,   968,   394,   224,   225,  1021,  1022,
    -478,   317,    47,    48,   288,   794,   323,   216,   334,  -477,
     343,  -478,   249,    55,    56,   344,  -484,   878,   346,  -478,
    -477,   217,  -478,    61,    62,    63,   345,   216,  -477,   349,
     234,  -477,   632,   218,   234,   224,   225,   241,   243,   636,
     224,   225,   863,   803,   804,   364,   640,   359,   641,   800,
     660,   374,   217,   663,   643,  -519,   375,   216,   376,  -519,
     377,  -519,    12,   381,   218,   284,   285,   286,   690,   287,
     138,   695,   217,   138,  -485,   404,   407,   683,   755,   288,
      89,   108,   408,   760,   218,   844,   595,    90,    92,  -518,
     409,   595,   412,  -518,   216,  -518,   420,   422,   423,   389,
     456,   250,   217,   395,   424,   573,   576,   588,   861,   954,
     399,   108,   578,   718,   218,   718,   389,   969,   395,   389,
     395,   579,   592,   198,   600,   823,   876,   602,   824,   825,
     826,   827,   828,   829,   830,   605,   606,   609,   611,   217,
     655,   954,   613,   614,   616,   617,   963,   633,   739,   627,
     626,   218,   639,   695,   683,   138,   760,   637,   974,   645,
     648,   647,   654,   216,  -505,    89,   108,    12,   676,   691,
     651,   671,    90,    92,  1005,  -507,   595,   595,   888,   913,
     693,   687,   595,   658,   689,   699,   783,   773,  -484,  1014,
     993,   369,   718,   700,   703,   756,   704,   399,   108,   399,
     108,   706,   661,   701,   338,   666,   709,   724,   217,   765,
    1006,   734,  1007,   798,   732,   250,   945,   741,   879,   743,
     218,   705,   761,   947,   766,   770,   774,   839,   370,   138,
     823,   775,   832,   824,   825,   826,   827,   828,   829,   830,
     778,   777,   789,   795,   783,   791,   718,   807,   809,   815,
     702,   931,   810,   595,   812,   595,   814,   818,   733,   707,
     820,   822,   842,   417,   841,   845,   849,   851,   399,   108,
     714,    12,   852,   853,   854,   857,   875,   864,   138,   856,
     870,   858,   859,   921,   860,   695,   996,   138,   873,   877,
     998,   880,  1000,   889,   896,   234,    12,   897,   902,   783,
     920,   910,   750,   911,   925,   886,   934,   935,   832,   783,
     937,   946,   399,   108,   949,   783,   783,   595,   962,   966,
     975,   976,   979,    12,   981,   768,   -79,   671,  -439,   399,
     108,   987,   234,  1024,   906,   986,   798,   824,   825,   826,
     827,   828,   829,   830,   399,   108,   984,   985,   988,   832,
     995,   999,  1008,  1002,   783,  1018,   190,   754,   338,   823,
     234,   819,   824,   825,   826,   827,   828,   829,   830,   358,
     817,   596,   832,   340,   686,   908,   254,   796,   948,   912,
     138,   399,   108,   847,   871,   961,   823,   138,   884,   824,
     825,   826,   827,   828,   829,   830,   883,   776,   783,   783,
     832,   708,   280,   281,   282,   283,   284,   285,   286,   597,
     287,   575,   944,   399,   108,   399,   108,   961,   585,   138,
     288,   282,   283,   284,   285,   286,   322,   287,   599,   865,
    -309,   453,  -309,   983,   569,   997,   750,   288,   872,   970,
     824,   825,   826,   827,   828,   829,   990,   992,   566,   695,
     542,   138,   688,     0,     0,     0,   634,     0,     0,     0,
       0,     0,     0,     0,   399,   108,   399,   108,   399,   108,
       0,     0,     0,     0,     0,     0,   718,  -520,  -520,  -520,
    -520,   279,   280,   281,   282,   283,   284,   285,   286,     0,
     287,     0,   399,   108,     0,     0,   914,     0,     0,   915,
     288,   260,   261,   262,     0,     0,     0,     4,     0,     5,
       6,     7,     8,     0,     0,     0,     9,    10,     0,    11,
       0,     0,   263,     0,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,     0,   287,     0,
       0,     0,    12,     0,    13,    14,     0,     0,   288,    15,
       0,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,     0,     0,     0,    26,    27,    28,    29,    30,
       0,    31,     0,     0,    32,    33,    34,    35,   989,    36,
      37,    38,   991,    39,     0,    40,     0,    41,     0,   994,
      42,     0,     0,     0,    43,    44,    45,    46,    47,    48,
      49,    50,    51,     0,     0,    52,     0,    53,    54,    55,
      56,  1010,     0,     0,     0,    57,    58,    59,    60,    61,
      62,    63,     0,     0,    64,    65,    66,     0,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,     0,     4,
       0,     5,     6,     7,     8,    77,   625,     0,     9,    10,
      78,    11,     0,     0,    79,     0,    80,    81,   698,     0,
      82,     0,    83,    84,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,     0,    13,    14,     0,     0,
       0,    15,     0,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,     0,     0,     0,    26,    27,    28,
      29,    30,     0,    31,     0,     0,    32,    33,    34,    35,
       0,    36,    37,    38,     0,    39,     0,    40,     0,    41,
       0,     0,    42,     0,     0,     0,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,    52,     0,    53,
      54,    55,    56,     0,     0,     0,     0,    57,    58,    59,
      60,    61,    62,    63,     0,     0,    64,    65,    66,     0,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
       0,     4,     0,     5,     6,     7,     8,    77,     0,     0,
       9,    10,    78,    11,     0,     0,    79,     0,    80,    81,
     767,     0,    82,     0,    83,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,     0,    13,    14,
       0,     0,     0,    15,     0,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,     0,     0,     0,    26,
      27,    28,    29,    30,     0,    31,     0,     0,    32,    33,
      34,    35,     0,    36,    37,    38,     0,    39,     0,    40,
       0,    41,     0,     0,    42,     0,     0,     0,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,     0,    52,
       0,    53,    54,    55,    56,     0,     0,     0,     0,    57,
      58,    59,    60,    61,    62,    63,     0,     0,    64,    65,
      66,     0,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,     0,     4,     0,     5,     6,     7,     8,    77,
       0,     0,     9,    10,    78,    11,     0,     0,    79,     0,
      80,    81,     0,     0,    82,     0,    83,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,     0,
      13,    14,     0,     0,     0,    15,     0,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,     0,     0,
       0,    26,    27,    28,    29,    30,     0,    31,     0,     0,
      32,    33,    34,    35,     0,    36,    37,    38,     0,    39,
       0,    40,     0,    41,     0,     0,    42,     0,     0,     0,
      43,    44,    45,    46,    47,    48,     0,    50,    51,     0,
       0,     0,     0,    53,    54,    55,    56,     0,     0,     0,
       0,    57,    58,    59,   397,    61,    62,    63,     0,     0,
     126,    65,    66,     0,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,     0,     4,     0,     5,     6,     7,
       8,    77,     0,     0,     9,    10,    78,    11,     0,     0,
      79,     0,    80,    81,   398,     0,    82,     0,    83,    84,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,     0,    13,    14,     0,     0,     0,    15,     0,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
       0,     0,     0,    26,    27,    28,    29,    30,     0,    31,
       0,     0,    32,    33,    34,    35,     0,    36,    37,    38,
       0,    39,     0,    40,     0,    41,     0,     0,    42,     0,
       0,     0,    43,    44,    45,    46,    47,    48,     0,    50,
      51,     0,     0,     0,     0,    53,    54,    55,    56,     0,
       0,     0,     0,    57,    58,    59,   397,    61,    62,    63,
       0,     0,   126,    65,    66,     0,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,     0,     4,     0,     5,
       6,     7,     8,    77,     0,     0,     9,    10,    78,    11,
       0,     0,    79,     0,    80,    81,   586,     0,    82,     0,
      83,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,     0,    13,    14,     0,     0,     0,    15,
       0,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,     0,     0,     0,    26,    27,    28,    29,    30,
       0,    31,     0,     0,    32,    33,    34,    35,   713,    36,
      37,    38,     0,    39,     0,    40,     0,    41,     0,     0,
      42,     0,     0,     0,    43,    44,    45,    46,    47,    48,
       0,    50,    51,     0,     0,     0,     0,    53,    54,    55,
      56,     0,     0,     0,     0,    57,    58,    59,   397,    61,
      62,    63,     0,     0,   126,    65,    66,     0,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,     0,     4,
       0,     5,     6,     7,     8,    77,     0,     0,     9,    10,
      78,    11,     0,     0,    79,     0,    80,    81,     0,     0,
      82,     0,    83,    84,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,     0,    13,    14,     0,     0,
       0,    15,     0,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,     0,     0,     0,    26,    27,    28,
      29,    30,     0,    31,     0,     0,    32,    33,    34,    35,
       0,    36,    37,    38,   792,    39,     0,    40,     0,    41,
       0,     0,    42,     0,     0,     0,    43,    44,    45,    46,
      47,    48,     0,    50,    51,     0,     0,     0,     0,    53,
      54,    55,    56,     0,     0,     0,     0,    57,    58,    59,
     397,    61,    62,    63,     0,     0,   126,    65,    66,     0,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
       0,     4,     0,     5,     6,     7,     8,    77,     0,     0,
       9,    10,    78,    11,     0,     0,    79,     0,    80,    81,
       0,     0,    82,     0,    83,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,     0,    13,    14,
       0,     0,     0,    15,     0,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,     0,     0,     0,    26,
      27,    28,    29,    30,     0,    31,     0,     0,    32,    33,
      34,    35,     0,    36,    37,    38,     0,    39,     0,    40,
       0,    41,   862,     0,    42,     0,     0,     0,    43,    44,
      45,    46,    47,    48,     0,    50,    51,     0,     0,     0,
       0,    53,    54,    55,    56,     0,     0,     0,     0,    57,
      58,    59,   397,    61,    62,    63,     0,     0,   126,    65,
      66,     0,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,     0,     4,     0,     5,     6,     7,     8,    77,
       0,     0,     9,    10,    78,    11,     0,     0,    79,     0,
      80,    81,     0,     0,    82,     0,    83,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,     0,
      13,    14,     0,     0,     0,    15,     0,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,     0,     0,
       0,    26,    27,    28,    29,    30,     0,    31,     0,     0,
      32,    33,    34,    35,     0,    36,    37,    38,     0,    39,
       0,    40,   909,    41,     0,     0,    42,     0,     0,     0,
      43,    44,    45,    46,    47,    48,     0,    50,    51,     0,
       0,     0,     0,    53,    54,    55,    56,     0,     0,     0,
       0,    57,    58,    59,   397,    61,    62,    63,     0,     0,
     126,    65,    66,     0,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,     0,     4,     0,     5,     6,     7,
       8,    77,     0,     0,     9,    10,    78,    11,     0,     0,
      79,     0,    80,    81,     0,     0,    82,     0,    83,    84,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,     0,    13,    14,     0,     0,     0,    15,     0,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
       0,     0,     0,    26,    27,    28,    29,    30,     0,    31,
       0,     0,    32,    33,    34,    35,     0,    36,    37,    38,
       0,    39,     0,    40,     0,    41,     0,     0,    42,     0,
       0,     0,    43,    44,    45,    46,    47,    48,     0,    50,
      51,     0,     0,     0,     0,    53,    54,    55,    56,     0,
       0,     0,     0,    57,    58,    59,   397,    61,    62,    63,
       0,     0,   126,    65,    66,     0,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,     0,     4,     0,     5,
       6,     7,     8,    77,     0,     0,     9,    10,    78,    11,
       0,     0,    79,     0,    80,    81,   919,     0,    82,     0,
      83,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,     0,    13,    14,     0,     0,     0,    15,
       0,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,     0,     0,     0,    26,    27,    28,    29,    30,
       0,    31,     0,     0,    32,    33,    34,    35,     0,    36,
      37,    38,     0,    39,   980,    40,     0,    41,     0,     0,
      42,     0,     0,     0,    43,    44,    45,    46,    47,    48,
       0,    50,    51,     0,     0,     0,     0,    53,    54,    55,
      56,     0,     0,     0,     0,    57,    58,    59,   397,    61,
      62,    63,     0,     0,   126,    65,    66,     0,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,     0,     4,
       0,     5,     6,     7,     8,    77,     0,     0,     9,    10,
      78,    11,     0,     0,    79,     0,    80,    81,     0,     0,
      82,     0,    83,    84,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,     0,    13,    14,     0,     0,
       0,    15,     0,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,     0,     0,     0,    26,    27,    28,
      29,    30,     0,    31,     0,     0,    32,    33,    34,    35,
       0,    36,    37,    38,     0,    39,     0,    40,     0,    41,
       0,     0,    42,     0,     0,     0,    43,    44,    45,    46,
      47,    48,     0,    50,    51,     0,     0,     0,     0,    53,
      54,    55,    56,     0,     0,     0,     0,    57,    58,    59,
     397,    61,    62,    63,     0,     0,   126,    65,    66,     0,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
       0,     4,     0,     5,     6,     7,     8,    77,     0,     0,
       9,    10,    78,    11,     0,     0,    79,     0,    80,    81,
    1011,     0,    82,     0,    83,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,     0,    13,    14,
       0,     0,     0,    15,     0,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,     0,     0,     0,    26,
      27,    28,    29,    30,     0,    31,     0,     0,    32,    33,
      34,    35,     0,    36,    37,    38,     0,    39,     0,    40,
       0,    41,     0,     0,    42,     0,     0,     0,    43,    44,
      45,    46,    47,    48,     0,    50,    51,     0,     0,     0,
       0,    53,    54,    55,    56,     0,     0,     0,     0,    57,
      58,    59,   397,    61,    62,    63,     0,     0,   126,    65,
      66,     0,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,     0,     4,     0,     5,     6,     7,     8,    77,
       0,     0,     9,    10,    78,    11,     0,     0,    79,     0,
      80,    81,  1012,     0,    82,     0,    83,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,     0,
      13,    14,     0,     0,     0,    15,     0,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,     0,     0,
       0,    26,    27,    28,    29,    30,     0,    31,     0,     0,
      32,    33,    34,    35,     0,    36,    37,    38,     0,    39,
       0,    40,     0,    41,     0,     0,    42,     0,     0,     0,
      43,    44,    45,    46,    47,    48,     0,    50,    51,     0,
       0,     0,     0,    53,    54,    55,    56,     0,     0,     0,
       0,    57,    58,    59,   397,    61,    62,    63,     0,     0,
     126,    65,    66,     0,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,     0,     4,     0,     5,     6,     7,
       8,    77,     0,     0,     9,    10,    78,    11,     0,     0,
      79,     0,    80,    81,  1013,     0,    82,     0,    83,    84,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,     0,    13,    14,     0,     0,     0,    15,     0,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
       0,     0,     0,    26,    27,    28,    29,    30,     0,    31,
       0,     0,    32,    33,    34,    35,     0,    36,    37,    38,
       0,    39,     0,    40,     0,    41,     0,     0,    42,     0,
       0,     0,    43,    44,    45,    46,    47,    48,     0,    50,
      51,     0,     0,     0,     0,    53,    54,    55,    56,     0,
       0,     0,     0,    57,    58,    59,   397,    61,    62,    63,
       0,     0,   126,    65,    66,     0,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,     0,     4,     0,     5,
       6,     7,     8,    77,     0,     0,     9,    10,    78,    11,
       0,     0,    79,     0,    80,    81,  1026,     0,    82,     0,
      83,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,     0,    13,    14,     0,     0,     0,    15,
       0,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,     0,     0,     0,    26,    27,    28,    29,    30,
       0,    31,     0,     0,    32,    33,    34,    35,     0,    36,
      37,    38,     0,    39,     0,    40,     0,    41,     0,     0,
      42,     0,     0,     0,    43,    44,    45,    46,    47,    48,
       0,    50,    51,     0,     0,     0,     0,    53,    54,    55,
      56,     0,     0,     0,     0,    57,    58,    59,   397,    61,
      62,    63,     0,     0,   126,    65,    66,     0,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,     0,     0,
       0,     0,     0,     0,     0,    77,     0,     0,     0,     0,
      78,     0,     0,     0,    79,     0,    80,    81,     0,     0,
      82,     0,    83,    84,    85,   458,     0,   459,   460,   461,
     462,   463,   464,   465,   466,   467,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   468,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   469,
       0,   470,   471,     0,     0,   472,    29,     0,     0,     0,
       0,     0,   473,   474,   475,   476,   477,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,   514,   515,   516,     0,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,     0,     4,     0,     5,     6,     7,
       8,     0,     0,     0,     9,    10,     0,    11,   313,   314,
    -477,     0,     0,     0,     0,   534,     0,     0,     0,     0,
       0,  -477,    85,   659,     0,     0,     0,     0,     0,  -477,
       0,     0,  -477,     0,     0,     0,     0,     0,     0,     0,
      12,     0,    13,    14,     0,     0,     0,    15,     0,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
       0,     0,     0,    26,    27,    28,    29,    30,     0,    31,
       0,     0,    32,    33,    34,    35,     0,    36,    37,    38,
       0,    39,     0,    40,     0,    41,     0,     0,    42,     0,
       0,     0,    43,    44,    45,    46,    47,    48,     0,    50,
      51,     0,     0,     0,     0,    53,    54,     0,     0,     0,
       0,     0,     0,    57,    58,    59,     0,     0,     0,     0,
       0,     0,   126,    65,    66,     0,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,     0,     4,     0,     5,
       6,     7,     8,    77,     0,     0,     9,    10,    78,    11,
       0,     0,    79,     0,    80,    81,     0,     0,    82,     0,
      83,    84,    85,     0,     0,   662,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,     0,    13,    14,     0,     0,     0,    15,
       0,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,     0,     0,     0,    26,    27,    28,    29,    30,
       0,    31,     0,     0,    32,    33,    34,    35,     0,    36,
      37,    38,     0,    39,     0,    40,     0,    41,     0,     0,
      42,     0,     0,     0,    43,    44,    45,    46,    47,    48,
       0,    50,    51,     0,     0,     0,     0,    53,    54,     0,
       0,     0,     0,     0,     0,    57,    58,    59,     0,     0,
       0,     0,     0,     0,   126,    65,    66,     0,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,     0,     4,
       0,     5,     6,     7,     8,    77,     0,     0,     9,    10,
      78,    11,     0,     0,    79,     0,    80,    81,     0,     0,
      82,     0,    83,    84,    85,     0,     0,   738,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,     0,    13,    14,     0,     0,
       0,    15,     0,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,     0,     0,     0,    26,    27,    28,
      29,    30,     0,    31,     0,     0,    32,    33,    34,    35,
       0,    36,    37,    38,     0,    39,     0,    40,     0,    41,
       0,     0,    42,     0,     0,     0,    43,    44,    45,    46,
      47,    48,     0,    50,    51,     0,     0,     0,     0,    53,
      54,     0,     0,     0,     0,     0,     0,    57,    58,    59,
       0,     0,     0,     0,     0,     0,   126,    65,    66,     0,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
       0,     4,     0,     5,     6,     7,     8,    77,     0,     0,
       9,    10,    78,    11,     0,     0,    79,     0,    80,    81,
       0,     0,    82,     0,    83,    84,    85,     0,     0,   797,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,     0,    13,    14,
       0,     0,     0,    15,     0,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,     0,     0,     0,    26,
      27,    28,    29,    30,     0,    31,     0,     0,    32,    33,
      34,    35,     0,    36,    37,    38,     0,    39,     0,    40,
       0,    41,     0,     0,    42,     0,     0,     0,    43,    44,
      45,    46,    47,    48,     0,    50,    51,     0,     0,     0,
       0,    53,    54,     0,     0,     0,     0,     0,     0,    57,
      58,    59,     0,     0,     0,     0,     0,     0,   126,    65,
      66,     0,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,     0,     4,     0,     5,     6,     7,     8,    77,
       0,     0,     9,    10,    78,    11,     0,     0,    79,     0,
      80,    81,     0,     0,    82,     0,    83,    84,    85,     0,
       0,   905,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,     0,
      13,    14,     0,     0,     0,    15,     0,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,     0,     0,
       0,    26,    27,    28,    29,    30,     0,    31,     0,     0,
      32,    33,    34,    35,     0,    36,    37,    38,     0,    39,
       0,    40,     0,    41,     0,     0,    42,     0,     0,     0,
      43,    44,    45,    46,    47,    48,     0,    50,    51,     0,
       0,     0,     0,    53,    54,     0,     0,     0,     0,     0,
       0,    57,    58,    59,     0,     0,     0,     0,     0,     0,
     126,    65,    66,     0,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,     0,     4,     0,     5,     6,     7,
       8,    77,     0,     0,     9,    10,    78,    11,     0,     0,
      79,     0,    80,    81,     0,     0,    82,     0,    83,    84,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,     0,    13,    14,     0,     0,     0,    15,     0,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
       0,     0,     0,    26,    27,    28,    29,    30,     0,    31,
       0,     0,    32,    33,    34,    35,     0,    36,    37,    38,
       0,    39,     0,    40,     0,    41,     0,     0,    42,     0,
       0,     0,    43,    44,    45,    46,    47,    48,     0,    50,
      51,     0,     0,     0,     0,    53,    54,     0,     0,     0,
       0,     0,     0,    57,    58,    59,     0,     0,     0,     0,
       0,     0,   126,    65,    66,     0,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,     0,     4,     0,     5,
       6,     7,     8,    77,     0,     0,     9,    10,    78,    11,
       0,     0,    79,     0,    80,    81,     0,     0,    82,     0,
      83,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,   231,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,     0,    13,    14,     0,     0,     0,    15,
       0,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,     0,     0,     0,    26,    27,   124,    29,     0,
       0,    31,     0,     0,    32,    33,    34,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,    43,   287,     0,     0,    47,    48,
       0,     0,     0,     0,     0,   288,     0,     0,   125,     0,
       0,     0,     0,     0,     0,     0,    58,    59,     0,     0,
       0,     0,     0,     0,   126,   232,    66,     0,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,     0,     0,
       0,     0,     0,     0,     0,    77,     0,     0,     0,     0,
      78,   233,     0,     0,    79,     0,     0,   260,   261,   262,
      82,     0,    83,    84,    85,     4,     0,     5,     6,     7,
       8,     0,     0,     0,     9,    10,     0,    11,   263,     0,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,     0,   287,     0,     0,     0,     0,     0,
      12,     0,    13,    14,   288,     0,     0,    15,     0,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
       0,     0,     0,    26,    27,   124,    29,     0,     0,    31,
       0,     0,    32,    33,    34,  -520,  -520,  -520,  -520,  -520,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,    43,   287,     0,     0,    47,    48,     0,     0,
       0,     0,     0,   288,     0,     0,   125,     0,     0,     0,
       0,     0,     0,     0,    58,    59,     0,     0,     0,     0,
       0,     0,   126,    65,    66,     0,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,     0,     0,     0,     0,
       0,     0,     0,    77,     0,   769,     0,     0,    78,   413,
       0,     0,    79,   414,     0,     0,     0,     0,    82,     0,
      83,    84,    85,     4,     0,     5,     6,     7,     8,     0,
       0,     0,     9,    10,     0,    11,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   124,    29,
       0,     0,    31,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,     0,
      13,    14,     0,     0,     0,    15,     0,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,     0,   137,
       0,    26,    27,   124,    29,     0,     0,    31,   390,     0,
      32,    33,    34,     0,     0,   126,     0,    66,     0,    67,
      68,    69,    70,    71,    72,    73,    74,     0,     0,     0,
      43,     0,     0,     0,    47,    48,     0,     0,     0,     0,
       0,    78,     0,     0,   125,   214,     0,     0,     0,     0,
       0,   215,    58,    59,    84,    85,     0,     0,     0,     0,
     126,    65,    66,     0,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,     0,     4,     0,     5,     6,     7,
       8,    77,     0,     0,     9,    10,    78,    11,     0,     0,
      79,     0,     0,     0,     0,     0,    82,     0,    83,    84,
      85,     0,     0,   428,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,     0,    13,    14,     0,     0,     0,    15,     0,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
       0,     0,     0,    26,    27,   124,    29,     0,     0,    31,
       0,     0,    32,    33,    34,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    43,     0,     0,     0,    47,    48,     0,     0,
       0,     0,     0,     0,     0,     0,   125,     0,     0,     0,
       0,     0,     0,     0,    58,    59,     0,     0,     0,     0,
       0,     0,   126,    65,    66,     0,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,     0,     4,     0,     5,
       6,     7,     8,    77,     0,     0,     9,    10,    78,    11,
       0,     0,    79,     0,     0,     0,     0,     0,    82,     0,
      83,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,   549,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,     0,    13,    14,     0,     0,     0,    15,
       0,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,     0,     0,     0,    26,    27,   124,    29,     0,
       0,    31,     0,     0,    32,    33,    34,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    43,     0,     0,     0,    47,    48,
       0,     0,     0,     0,     0,     0,     0,     0,   125,     0,
       0,     0,     0,     0,     0,     0,    58,    59,     0,     0,
       0,     0,     0,     0,   126,    65,    66,     0,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,     0,     4,
       0,     5,     6,     7,     8,    77,     0,     0,     9,    10,
      78,    11,     0,     0,    79,     0,     0,     0,     0,     0,
      82,     0,    83,    84,    85,     0,     0,     0,     0,     0,
       0,     0,     0,   630,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,     0,    13,    14,     0,     0,
       0,    15,     0,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,     0,     0,     0,    26,    27,   124,
      29,     0,     0,    31,     0,     0,    32,    33,    34,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    43,     0,     0,     0,
      47,    48,     0,     0,     0,     0,     0,     0,     0,     0,
     125,     0,     0,     0,     0,     0,     0,     0,    58,    59,
       0,     0,     0,     0,     0,     0,   126,   631,    66,     0,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
       0,     4,     0,     5,     6,     7,     8,    77,     0,     0,
       9,    10,    78,    11,     0,     0,    79,     0,     0,     0,
       0,     0,    82,     0,    83,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,     0,    13,    14,
       0,     0,     0,    15,     0,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,     0,     0,     0,    26,
      27,   124,    29,     0,     0,    31,     0,     0,    32,    33,
      34,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    43,     0,
       0,     0,    47,    48,     0,     0,     0,     0,     0,     0,
       0,     0,   125,     0,     0,     0,     0,     0,     0,     0,
      58,    59,     0,     0,     0,     0,     0,     0,   126,    65,
      66,     0,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,     0,     0,     0,     0,     0,     0,     0,    77,
       0,     0,     0,     0,    78,   413,     0,     0,    79,     0,
       0,   260,   261,   262,    82,     0,    83,    84,    85,     4,
       0,     5,     6,     7,     8,     0,     0,     0,     9,    10,
       0,    11,   263,   644,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,     0,   287,     0,
       0,     0,     0,     0,    12,     0,    13,    14,   288,     0,
       0,    15,     0,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,     0,     0,     0,    26,    27,   124,
      29,     0,     0,    31,     0,     0,    32,    33,    34,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   745,    43,     0,     0,     0,
      47,    48,     0,     0,     0,     0,     0,     0,     0,     0,
     125,     0,     0,     0,     0,     0,     0,     0,    58,    59,
       0,     0,     0,     0,     0,     0,   126,    65,    66,     0,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
       0,     4,     0,     5,     6,     7,     8,    77,     0,     0,
       9,    10,    78,    11,     0,     0,    79,     0,     0,     0,
       0,     0,    82,     0,    83,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,     0,    13,    14,
       0,     0,     0,    15,     0,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,     0,     0,     0,    26,
      27,   124,    29,     0,     0,    31,     0,     0,    32,    33,
      34,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    43,     0,
       0,     0,    47,    48,     0,     0,     0,     0,   667,     0,
       0,     0,   125,     0,     0,     0,     0,     0,     0,     0,
      58,    59,     0,     0,     0,     0,     0,     0,   126,    65,
      66,     0,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,     0,     0,   124,    29,     0,     0,    31,    77,
       0,     0,     0,     0,    78,     0,     0,     0,    79,     0,
       0,     0,     0,     0,    82,     0,    83,    84,    85,   458,
       0,   459,   460,   461,   462,   463,   464,   465,   466,   467,
       0,     0,     0,     0,     0,   137,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   126,   668,    66,     0,    67,    68,    69,    70,    71,
      72,    73,    74,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   468,     0,     0,     0,     0,    78,     0,     0,
       0,   214,     0,   469,     0,   470,   471,   669,     0,   950,
      84,    85,     0,     0,     0,     0,   473,   474,   475,   476,
     477,   478,   479,   480,   481,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     951,   508,   509,   510,   511,   512,   513,   514,   515,   516,
       0,   517,   518,   519,   520,   521,   952,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   458,     0,
     459,   460,   461,   462,   463,   464,   465,   466,   467,     0,
       0,     0,    78,     0,     0,     0,     0,     0,     0,   263,
     953,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,     0,   287,     0,     0,     0,     0,
       0,   468,     0,     0,     0,   288,     0,     0,     0,     0,
       0,     0,   469,     0,   470,   471,     0,     0,   950,     0,
       0,     0,     0,     0,     0,   473,   474,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   951,
     508,   509,   510,   511,   512,   513,   514,   515,   516,     0,
     517,   518,   519,   520,   521,   952,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   260,   261,   262,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     0,   263,   982,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,     0,   287,   260,   261,   262,     0,     0,
       0,     0,     0,     0,   288,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   263,     0,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,     0,   287,   260,   261,   262,     0,     0,     0,     0,
       0,     0,   288,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   263,     0,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,     0,
     287,   260,   261,   262,     0,     0,     0,     0,     0,     0,
     288,     0,   635,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   263,     0,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,     0,   287,   260,
     261,   262,     0,     0,     0,     0,     0,     0,   288,     0,
     653,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     263,     0,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,     0,   287,   260,   261,   262,
       0,     0,     0,     0,     0,     0,   288,     0,   657,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   263,   866,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,     0,   287,   260,   261,   262,     0,     0,
       0,     0,     0,     0,   288,     0,   726,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   263,     0,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,     0,   287,     0,   260,   261,   262,     0,     0,     0,
       0,     0,   288,     0,   727,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   263,     0,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
       0,   287,   260,   261,   262,     0,     0,     0,     0,     0,
     867,   288,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   263,     0,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,     0,   287,
     260,   261,   262,     0,     0,     0,     0,     0,   289,   288,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   263,     0,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,     0,   287,   260,   261,
     262,     0,     0,     0,     0,     0,   396,   288,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   263,
       0,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,     0,   287,   260,   261,   262,     0,
       0,     0,     0,     0,   565,   288,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   263,     0,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,     0,   287,   260,   261,   262,     0,     0,     0,
       0,     0,   567,   288,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   263,     0,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
       0,   287,   260,   261,   262,     0,     0,     0,     0,     0,
     574,   288,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   263,     0,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,     0,   287,
     260,   261,   262,     0,     0,     0,     0,     0,   577,   288,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   263,     0,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,     0,   287,   260,   261,
     262,     0,     0,     0,     0,     0,   582,   288,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   263,
       0,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,     0,   287,   260,   261,   262,     0,
       0,     0,     0,     0,   583,   288,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   263,     0,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,     0,   287,   260,   261,   262,     0,     0,     0,
       0,     0,   604,   288,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   263,     0,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
       0,   287,   260,   261,   262,     0,     0,     0,     0,     0,
     615,   288,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   263,     0,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,     0,   287,
       0,     0,     0,     0,     0,     0,     0,     0,   711,   288,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   458,   287,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   288,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   712,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,     0,   287,
       0,   468,     0,     0,     0,     0,     0,     0,     0,   288,
       0,     0,   469,     0,   470,   471,     0,     0,   472,     0,
       0,     0,     0,     0,   730,   473,   474,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,   514,   515,   516,     0,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   458,   262,   459,
     460,   461,   462,   463,   464,   465,   466,   467,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   263,     0,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,     0,   287,     0,     0,     0,     0,     0,     0,
     468,     0,     0,   288,     0,     0,     0,     0,     0,     0,
       0,   469,     0,   470,   471,     0,     0,  1001,     0,     0,
       0,     0,     0,     0,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   824,   825,
     826,   827,   828,   829,   513,   514,   515,   516,     0,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   260,   261,   262,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   263,     0,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,     0,   287,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   288,     0,     0,     0,     0,     0,     0,
     260,   261,   262,     0,     0,   406,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   263,   580,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,     0,   287,   260,   261,
     262,     0,     0,     0,     0,     0,     0,   288,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   263,
       0,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,     0,   287,   261,   262,     0,     0,
       0,     0,     0,     0,     0,   288,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   263,     0,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   316,   287,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   288,     0,     0,     0,     0,   263,     0,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,     0,   287,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   288,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,     0,   287,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   288,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,     0,
     287,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     288,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
       0,   287,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   288
};

static const yytype_int16 yycheck[] =
{
       2,     2,    89,   108,    12,   647,    12,     2,     2,   293,
     294,   381,    31,   212,   213,    33,   215,    31,   691,    87,
     853,    14,   855,    30,   129,    33,   185,    33,   722,    54,
     578,    33,    75,    76,    45,    53,    14,   837,    74,    50,
     127,    73,   291,    37,    14,    73,    14,   566,   890,    73,
     118,    48,   674,    73,   144,     0,    73,    73,    74,   656,
      37,    73,   144,   160,    89,    74,    73,    85,    95,    73,
      73,   158,   140,    73,    31,    35,   166,    75,    76,    52,
     155,   163,   724,   160,   166,   160,   780,    30,    89,    75,
      76,    64,   934,   935,    89,   104,   105,    74,   156,   371,
     125,   104,   127,   106,   162,    78,   130,   114,   132,   133,
     109,   110,    56,   710,    74,    74,   188,    76,   160,   741,
     639,   743,    66,   130,    73,   132,   133,   376,   125,   156,
      73,   163,   156,   163,   170,   163,   156,   901,   160,   903,
      48,   835,   766,   415,   163,   160,   163,   163,   162,   156,
     823,   163,   156,   164,   170,   160,   156,   851,   852,   202,
       4,     5,     6,     7,     8,     9,    10,    11,   161,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   225,   161,   732,  1018,   986,   130,   231,   132,
     133,   161,    36,   161,   153,   154,    75,    76,   822,    73,
      44,    45,    48,    73,   202,   404,    50,   456,    74,   117,
     118,   119,   144,   156,   160,   188,   202,   190,    48,    73,
     156,   161,    48,   155,   249,   165,    95,   225,   230,   230,
     994,   163,   856,   231,   166,    79,   209,   160,    82,   225,
     114,   611,    95,    73,    74,   231,    95,  1011,  1012,    73,
     104,   162,   106,   161,   165,  1019,   130,   160,    95,  1023,
      73,    74,   256,   160,   423,   889,   161,    98,    99,   287,
     165,   117,   118,   119,    74,   293,   294,   295,   164,   287,
     166,   287,   156,   355,   114,   111,   297,   156,   114,   115,
     116,   117,   118,   119,   120,   125,    74,   163,    76,    74,
     130,   114,   156,   156,   170,   323,    48,   156,   326,   327,
     160,   155,   399,   157,   987,   161,    48,   130,   329,   156,
     164,   161,   166,   202,    73,   165,   156,   171,   172,   173,
     160,   175,   176,   164,    74,   584,    76,   104,   164,   106,
     170,    69,    70,   156,   160,   363,   225,   160,   350,   350,
      69,    70,   231,   153,   154,   162,    84,   170,   165,   203,
     204,   610,   104,   105,   162,   114,  1008,   165,   212,   213,
     214,   215,   114,    51,   399,   153,   154,   152,   153,   154,
     224,   130,   355,   132,   133,   117,   118,   119,   361,   233,
     160,   169,   115,   116,   162,    73,    74,   165,   399,   160,
     244,    79,   125,   247,   399,   162,   163,   156,   165,   681,
     104,   105,   152,   153,   154,   160,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   692,   288,    98,    99,    74,   720,    76,
      37,   162,   296,   297,   165,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   155,
     669,   539,   316,   745,   542,   747,    48,   749,   546,   728,
     162,   155,   754,   165,   328,   329,    74,   759,    76,   333,
     144,    74,   162,    76,   144,   165,   144,    97,    98,    99,
     659,   155,   346,   662,   155,   155,   549,   706,   160,   163,
     160,   164,   166,   163,   160,   163,   166,   589,   166,   156,
     364,   162,   594,   772,   165,   152,   153,   154,   162,   163,
     144,    49,   104,   105,    66,   734,   155,   580,    87,   144,
     162,   155,   114,   115,   116,   162,   160,   819,    16,   163,
     155,   549,   166,   125,   126,   127,   162,   600,   163,   162,
     404,   166,   406,   549,   408,   153,   154,    83,    84,   413,
     153,   154,    97,    98,    99,    16,   420,   162,   422,   738,
     574,   161,   580,   577,   428,   161,    73,   630,    73,   165,
      73,   167,    48,   163,   580,    52,    53,    54,   606,    56,
     606,   609,   600,   609,   160,   160,   167,   679,   680,    66,
     612,   612,   165,   685,   600,   774,   589,   612,   612,   161,
     168,   594,    73,   165,   667,   167,   160,   160,    31,   222,
      73,   718,   630,   226,   162,   161,   160,    73,   797,   923,
     642,   642,   162,   645,   630,   647,   239,   931,   241,   242,
     243,   165,   162,    74,   165,   111,   815,   165,   114,   115,
     116,   117,   118,   119,   120,   162,   128,   128,   163,   667,
     549,   955,   161,   161,   167,    73,   925,    16,   672,   160,
     164,   667,    73,   691,   756,   691,   758,   165,   937,   160,
     534,   160,   167,   736,   160,   697,   697,    48,   163,   129,
     544,   580,   697,   697,   988,   160,   679,   680,   164,   868,
     163,   161,   685,   167,   161,    16,   722,   711,   160,  1003,
     969,   600,   724,    79,   161,   165,   161,   729,   729,   731,
     731,   160,   576,   167,   578,   579,   161,   160,   736,   165,
     989,   160,   991,   737,   162,   832,   905,   162,   820,   162,
     736,   630,   162,   912,   163,   162,    31,   765,   602,   765,
     111,   162,   764,   114,   115,   116,   117,   118,   119,   120,
     165,   161,   161,   167,   780,   162,   778,   165,   164,   163,
     624,   886,   165,   756,   165,   758,   160,   164,   667,   633,
     165,   163,   161,   637,   164,    31,    37,    35,   800,   800,
     644,    48,    35,   161,   111,   162,   814,   162,   814,   163,
      14,   161,   161,   164,   161,   823,   975,   823,    14,   164,
     979,   164,   981,   163,    14,   669,    48,   157,   160,   835,
     164,   162,   676,   162,    74,   836,    35,    35,   840,   845,
      74,   162,   844,   844,   161,   851,   852,   820,    16,    16,
     163,    74,   163,    48,   163,   699,    95,   736,   155,   861,
     861,   112,   706,  1022,   858,    95,   860,   114,   115,   116,
     117,   118,   119,   120,   876,   876,   162,   162,   155,   881,
      16,   162,   160,   986,   890,   161,    52,   679,   732,   111,
     734,   758,   114,   115,   116,   117,   118,   119,   120,   190,
     756,   361,   904,   174,   600,   860,    95,   736,   916,   865,
     916,   913,   913,   778,   810,   923,   111,   923,   835,   114,
     115,   116,   117,   118,   119,   120,   832,   718,   934,   935,
     932,   637,    48,    49,    50,    51,    52,    53,    54,   363,
      56,   333,   164,   945,   945,   947,   947,   955,   348,   955,
      66,    50,    51,    52,    53,    54,   158,    56,   366,   803,
     104,   287,   106,   955,   326,   978,   810,    66,   812,   164,
     114,   115,   116,   117,   118,   119,   965,   968,   320,   987,
     294,   987,   602,    -1,    -1,    -1,   408,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   996,   996,   998,   998,  1000,  1000,
      -1,    -1,    -1,    -1,    -1,    -1,  1008,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      56,    -1,  1024,  1024,    -1,    -1,   870,    -1,    -1,   873,
      66,     9,    10,    11,    -1,    -1,    -1,     3,    -1,     5,
       6,     7,     8,    -1,    -1,    -1,    12,    13,    -1,    15,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    56,    -1,
      -1,    -1,    48,    -1,    50,    51,    -1,    -1,    66,    55,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    67,    -1,    -1,    -1,    71,    72,    73,    74,    75,
      -1,    77,    -1,    -1,    80,    81,    82,    83,   962,    85,
      86,    87,   966,    89,    -1,    91,    -1,    93,    -1,   973,
      96,    -1,    -1,    -1,   100,   101,   102,   103,   104,   105,
     106,   107,   108,    -1,    -1,   111,    -1,   113,   114,   115,
     116,   995,    -1,    -1,    -1,   121,   122,   123,   124,   125,
     126,   127,    -1,    -1,   130,   131,   132,    -1,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,    -1,     3,
      -1,     5,     6,     7,     8,   151,   164,    -1,    12,    13,
     156,    15,    -1,    -1,   160,    -1,   162,   163,   164,    -1,
     166,    -1,   168,   169,   170,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    -1,    -1,
      -1,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    -1,    77,    -1,    -1,    80,    81,    82,    83,
      -1,    85,    86,    87,    -1,    89,    -1,    91,    -1,    93,
      -1,    -1,    96,    -1,    -1,    -1,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,    -1,   111,    -1,   113,
     114,   115,   116,    -1,    -1,    -1,    -1,   121,   122,   123,
     124,   125,   126,   127,    -1,    -1,   130,   131,   132,    -1,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
      -1,     3,    -1,     5,     6,     7,     8,   151,    -1,    -1,
      12,    13,   156,    15,    -1,    -1,   160,    -1,   162,   163,
     164,    -1,   166,    -1,   168,   169,   170,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      -1,    -1,    -1,    55,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    67,    -1,    -1,    -1,    71,
      72,    73,    74,    75,    -1,    77,    -1,    -1,    80,    81,
      82,    83,    -1,    85,    86,    87,    -1,    89,    -1,    91,
      -1,    93,    -1,    -1,    96,    -1,    -1,    -1,   100,   101,
     102,   103,   104,   105,   106,   107,   108,    -1,    -1,   111,
      -1,   113,   114,   115,   116,    -1,    -1,    -1,    -1,   121,
     122,   123,   124,   125,   126,   127,    -1,    -1,   130,   131,
     132,    -1,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,    -1,     3,    -1,     5,     6,     7,     8,   151,
      -1,    -1,    12,    13,   156,    15,    -1,    -1,   160,    -1,
     162,   163,    -1,    -1,   166,    -1,   168,   169,   170,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    -1,    -1,    -1,    55,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    67,    -1,    -1,
      -1,    71,    72,    73,    74,    75,    -1,    77,    -1,    -1,
      80,    81,    82,    83,    -1,    85,    86,    87,    -1,    89,
      -1,    91,    -1,    93,    -1,    -1,    96,    -1,    -1,    -1,
     100,   101,   102,   103,   104,   105,    -1,   107,   108,    -1,
      -1,    -1,    -1,   113,   114,   115,   116,    -1,    -1,    -1,
      -1,   121,   122,   123,   124,   125,   126,   127,    -1,    -1,
     130,   131,   132,    -1,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,    -1,     3,    -1,     5,     6,     7,
       8,   151,    -1,    -1,    12,    13,   156,    15,    -1,    -1,
     160,    -1,   162,   163,   164,    -1,   166,    -1,   168,   169,
     170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    -1,    -1,    -1,    55,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    67,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,    77,
      -1,    -1,    80,    81,    82,    83,    -1,    85,    86,    87,
      -1,    89,    -1,    91,    -1,    93,    -1,    -1,    96,    -1,
      -1,    -1,   100,   101,   102,   103,   104,   105,    -1,   107,
     108,    -1,    -1,    -1,    -1,   113,   114,   115,   116,    -1,
      -1,    -1,    -1,   121,   122,   123,   124,   125,   126,   127,
      -1,    -1,   130,   131,   132,    -1,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,    -1,     3,    -1,     5,
       6,     7,     8,   151,    -1,    -1,    12,    13,   156,    15,
      -1,    -1,   160,    -1,   162,   163,   164,    -1,   166,    -1,
     168,   169,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    -1,    -1,    -1,    55,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    67,    -1,    -1,    -1,    71,    72,    73,    74,    75,
      -1,    77,    -1,    -1,    80,    81,    82,    83,    84,    85,
      86,    87,    -1,    89,    -1,    91,    -1,    93,    -1,    -1,
      96,    -1,    -1,    -1,   100,   101,   102,   103,   104,   105,
      -1,   107,   108,    -1,    -1,    -1,    -1,   113,   114,   115,
     116,    -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,
     126,   127,    -1,    -1,   130,   131,   132,    -1,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,    -1,     3,
      -1,     5,     6,     7,     8,   151,    -1,    -1,    12,    13,
     156,    15,    -1,    -1,   160,    -1,   162,   163,    -1,    -1,
     166,    -1,   168,   169,   170,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    -1,    -1,
      -1,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    -1,    77,    -1,    -1,    80,    81,    82,    83,
      -1,    85,    86,    87,    88,    89,    -1,    91,    -1,    93,
      -1,    -1,    96,    -1,    -1,    -1,   100,   101,   102,   103,
     104,   105,    -1,   107,   108,    -1,    -1,    -1,    -1,   113,
     114,   115,   116,    -1,    -1,    -1,    -1,   121,   122,   123,
     124,   125,   126,   127,    -1,    -1,   130,   131,   132,    -1,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
      -1,     3,    -1,     5,     6,     7,     8,   151,    -1,    -1,
      12,    13,   156,    15,    -1,    -1,   160,    -1,   162,   163,
      -1,    -1,   166,    -1,   168,   169,   170,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      -1,    -1,    -1,    55,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    67,    -1,    -1,    -1,    71,
      72,    73,    74,    75,    -1,    77,    -1,    -1,    80,    81,
      82,    83,    -1,    85,    86,    87,    -1,    89,    -1,    91,
      -1,    93,    94,    -1,    96,    -1,    -1,    -1,   100,   101,
     102,   103,   104,   105,    -1,   107,   108,    -1,    -1,    -1,
      -1,   113,   114,   115,   116,    -1,    -1,    -1,    -1,   121,
     122,   123,   124,   125,   126,   127,    -1,    -1,   130,   131,
     132,    -1,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,    -1,     3,    -1,     5,     6,     7,     8,   151,
      -1,    -1,    12,    13,   156,    15,    -1,    -1,   160,    -1,
     162,   163,    -1,    -1,   166,    -1,   168,   169,   170,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    -1,    -1,    -1,    55,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    67,    -1,    -1,
      -1,    71,    72,    73,    74,    75,    -1,    77,    -1,    -1,
      80,    81,    82,    83,    -1,    85,    86,    87,    -1,    89,
      -1,    91,    92,    93,    -1,    -1,    96,    -1,    -1,    -1,
     100,   101,   102,   103,   104,   105,    -1,   107,   108,    -1,
      -1,    -1,    -1,   113,   114,   115,   116,    -1,    -1,    -1,
      -1,   121,   122,   123,   124,   125,   126,   127,    -1,    -1,
     130,   131,   132,    -1,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,    -1,     3,    -1,     5,     6,     7,
       8,   151,    -1,    -1,    12,    13,   156,    15,    -1,    -1,
     160,    -1,   162,   163,    -1,    -1,   166,    -1,   168,   169,
     170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    -1,    -1,    -1,    55,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    67,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,    77,
      -1,    -1,    80,    81,    82,    83,    -1,    85,    86,    87,
      -1,    89,    -1,    91,    -1,    93,    -1,    -1,    96,    -1,
      -1,    -1,   100,   101,   102,   103,   104,   105,    -1,   107,
     108,    -1,    -1,    -1,    -1,   113,   114,   115,   116,    -1,
      -1,    -1,    -1,   121,   122,   123,   124,   125,   126,   127,
      -1,    -1,   130,   131,   132,    -1,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,    -1,     3,    -1,     5,
       6,     7,     8,   151,    -1,    -1,    12,    13,   156,    15,
      -1,    -1,   160,    -1,   162,   163,   164,    -1,   166,    -1,
     168,   169,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    -1,    -1,    -1,    55,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    67,    -1,    -1,    -1,    71,    72,    73,    74,    75,
      -1,    77,    -1,    -1,    80,    81,    82,    83,    -1,    85,
      86,    87,    -1,    89,    90,    91,    -1,    93,    -1,    -1,
      96,    -1,    -1,    -1,   100,   101,   102,   103,   104,   105,
      -1,   107,   108,    -1,    -1,    -1,    -1,   113,   114,   115,
     116,    -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,
     126,   127,    -1,    -1,   130,   131,   132,    -1,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,    -1,     3,
      -1,     5,     6,     7,     8,   151,    -1,    -1,    12,    13,
     156,    15,    -1,    -1,   160,    -1,   162,   163,    -1,    -1,
     166,    -1,   168,   169,   170,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    -1,    -1,
      -1,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    -1,    77,    -1,    -1,    80,    81,    82,    83,
      -1,    85,    86,    87,    -1,    89,    -1,    91,    -1,    93,
      -1,    -1,    96,    -1,    -1,    -1,   100,   101,   102,   103,
     104,   105,    -1,   107,   108,    -1,    -1,    -1,    -1,   113,
     114,   115,   116,    -1,    -1,    -1,    -1,   121,   122,   123,
     124,   125,   126,   127,    -1,    -1,   130,   131,   132,    -1,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
      -1,     3,    -1,     5,     6,     7,     8,   151,    -1,    -1,
      12,    13,   156,    15,    -1,    -1,   160,    -1,   162,   163,
     164,    -1,   166,    -1,   168,   169,   170,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      -1,    -1,    -1,    55,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    67,    -1,    -1,    -1,    71,
      72,    73,    74,    75,    -1,    77,    -1,    -1,    80,    81,
      82,    83,    -1,    85,    86,    87,    -1,    89,    -1,    91,
      -1,    93,    -1,    -1,    96,    -1,    -1,    -1,   100,   101,
     102,   103,   104,   105,    -1,   107,   108,    -1,    -1,    -1,
      -1,   113,   114,   115,   116,    -1,    -1,    -1,    -1,   121,
     122,   123,   124,   125,   126,   127,    -1,    -1,   130,   131,
     132,    -1,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,    -1,     3,    -1,     5,     6,     7,     8,   151,
      -1,    -1,    12,    13,   156,    15,    -1,    -1,   160,    -1,
     162,   163,   164,    -1,   166,    -1,   168,   169,   170,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    -1,    -1,    -1,    55,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    67,    -1,    -1,
      -1,    71,    72,    73,    74,    75,    -1,    77,    -1,    -1,
      80,    81,    82,    83,    -1,    85,    86,    87,    -1,    89,
      -1,    91,    -1,    93,    -1,    -1,    96,    -1,    -1,    -1,
     100,   101,   102,   103,   104,   105,    -1,   107,   108,    -1,
      -1,    -1,    -1,   113,   114,   115,   116,    -1,    -1,    -1,
      -1,   121,   122,   123,   124,   125,   126,   127,    -1,    -1,
     130,   131,   132,    -1,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,    -1,     3,    -1,     5,     6,     7,
       8,   151,    -1,    -1,    12,    13,   156,    15,    -1,    -1,
     160,    -1,   162,   163,   164,    -1,   166,    -1,   168,   169,
     170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    -1,    -1,    -1,    55,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    67,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,    77,
      -1,    -1,    80,    81,    82,    83,    -1,    85,    86,    87,
      -1,    89,    -1,    91,    -1,    93,    -1,    -1,    96,    -1,
      -1,    -1,   100,   101,   102,   103,   104,   105,    -1,   107,
     108,    -1,    -1,    -1,    -1,   113,   114,   115,   116,    -1,
      -1,    -1,    -1,   121,   122,   123,   124,   125,   126,   127,
      -1,    -1,   130,   131,   132,    -1,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,    -1,     3,    -1,     5,
       6,     7,     8,   151,    -1,    -1,    12,    13,   156,    15,
      -1,    -1,   160,    -1,   162,   163,   164,    -1,   166,    -1,
     168,   169,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    -1,    -1,    -1,    55,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    67,    -1,    -1,    -1,    71,    72,    73,    74,    75,
      -1,    77,    -1,    -1,    80,    81,    82,    83,    -1,    85,
      86,    87,    -1,    89,    -1,    91,    -1,    93,    -1,    -1,
      96,    -1,    -1,    -1,   100,   101,   102,   103,   104,   105,
      -1,   107,   108,    -1,    -1,    -1,    -1,   113,   114,   115,
     116,    -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,
     126,   127,    -1,    -1,   130,   131,   132,    -1,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,
     156,    -1,    -1,    -1,   160,    -1,   162,   163,    -1,    -1,
     166,    -1,   168,   169,   170,     3,    -1,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    69,    70,    -1,    -1,    73,    74,    -1,    -1,    -1,
      -1,    -1,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,    -1,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,    -1,     3,    -1,     5,     6,     7,
       8,    -1,    -1,    -1,    12,    13,    -1,    15,   142,   143,
     144,    -1,    -1,    -1,    -1,   163,    -1,    -1,    -1,    -1,
      -1,   155,   170,    31,    -1,    -1,    -1,    -1,    -1,   163,
      -1,    -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    -1,    -1,    -1,    55,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    67,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,    77,
      -1,    -1,    80,    81,    82,    83,    -1,    85,    86,    87,
      -1,    89,    -1,    91,    -1,    93,    -1,    -1,    96,    -1,
      -1,    -1,   100,   101,   102,   103,   104,   105,    -1,   107,
     108,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,   121,   122,   123,    -1,    -1,    -1,    -1,
      -1,    -1,   130,   131,   132,    -1,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,    -1,     3,    -1,     5,
       6,     7,     8,   151,    -1,    -1,    12,    13,   156,    15,
      -1,    -1,   160,    -1,   162,   163,    -1,    -1,   166,    -1,
     168,   169,   170,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    -1,    -1,    -1,    55,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    67,    -1,    -1,    -1,    71,    72,    73,    74,    75,
      -1,    77,    -1,    -1,    80,    81,    82,    83,    -1,    85,
      86,    87,    -1,    89,    -1,    91,    -1,    93,    -1,    -1,
      96,    -1,    -1,    -1,   100,   101,   102,   103,   104,   105,
      -1,   107,   108,    -1,    -1,    -1,    -1,   113,   114,    -1,
      -1,    -1,    -1,    -1,    -1,   121,   122,   123,    -1,    -1,
      -1,    -1,    -1,    -1,   130,   131,   132,    -1,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,    -1,     3,
      -1,     5,     6,     7,     8,   151,    -1,    -1,    12,    13,
     156,    15,    -1,    -1,   160,    -1,   162,   163,    -1,    -1,
     166,    -1,   168,   169,   170,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    -1,    -1,
      -1,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    -1,    77,    -1,    -1,    80,    81,    82,    83,
      -1,    85,    86,    87,    -1,    89,    -1,    91,    -1,    93,
      -1,    -1,    96,    -1,    -1,    -1,   100,   101,   102,   103,
     104,   105,    -1,   107,   108,    -1,    -1,    -1,    -1,   113,
     114,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,
      -1,    -1,    -1,    -1,    -1,    -1,   130,   131,   132,    -1,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
      -1,     3,    -1,     5,     6,     7,     8,   151,    -1,    -1,
      12,    13,   156,    15,    -1,    -1,   160,    -1,   162,   163,
      -1,    -1,   166,    -1,   168,   169,   170,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      -1,    -1,    -1,    55,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    67,    -1,    -1,    -1,    71,
      72,    73,    74,    75,    -1,    77,    -1,    -1,    80,    81,
      82,    83,    -1,    85,    86,    87,    -1,    89,    -1,    91,
      -1,    93,    -1,    -1,    96,    -1,    -1,    -1,   100,   101,
     102,   103,   104,   105,    -1,   107,   108,    -1,    -1,    -1,
      -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,    -1,    -1,    -1,   130,   131,
     132,    -1,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,    -1,     3,    -1,     5,     6,     7,     8,   151,
      -1,    -1,    12,    13,   156,    15,    -1,    -1,   160,    -1,
     162,   163,    -1,    -1,   166,    -1,   168,   169,   170,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    -1,    -1,    -1,    55,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    67,    -1,    -1,
      -1,    71,    72,    73,    74,    75,    -1,    77,    -1,    -1,
      80,    81,    82,    83,    -1,    85,    86,    87,    -1,    89,
      -1,    91,    -1,    93,    -1,    -1,    96,    -1,    -1,    -1,
     100,   101,   102,   103,   104,   105,    -1,   107,   108,    -1,
      -1,    -1,    -1,   113,   114,    -1,    -1,    -1,    -1,    -1,
      -1,   121,   122,   123,    -1,    -1,    -1,    -1,    -1,    -1,
     130,   131,   132,    -1,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,    -1,     3,    -1,     5,     6,     7,
       8,   151,    -1,    -1,    12,    13,   156,    15,    -1,    -1,
     160,    -1,   162,   163,    -1,    -1,   166,    -1,   168,   169,
     170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    -1,    -1,    -1,    55,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    67,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,    77,
      -1,    -1,    80,    81,    82,    83,    -1,    85,    86,    87,
      -1,    89,    -1,    91,    -1,    93,    -1,    -1,    96,    -1,
      -1,    -1,   100,   101,   102,   103,   104,   105,    -1,   107,
     108,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,   121,   122,   123,    -1,    -1,    -1,    -1,
      -1,    -1,   130,   131,   132,    -1,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,    -1,     3,    -1,     5,
       6,     7,     8,   151,    -1,    -1,    12,    13,   156,    15,
      -1,    -1,   160,    -1,   162,   163,    -1,    -1,   166,    -1,
     168,   169,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    -1,    -1,    -1,    55,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    67,    -1,    -1,    -1,    71,    72,    73,    74,    -1,
      -1,    77,    -1,    -1,    80,    81,    82,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,   100,    56,    -1,    -1,   104,   105,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,   123,    -1,    -1,
      -1,    -1,    -1,    -1,   130,   131,   132,    -1,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,
     156,   157,    -1,    -1,   160,    -1,    -1,     9,    10,    11,
     166,    -1,   168,   169,   170,     3,    -1,     5,     6,     7,
       8,    -1,    -1,    -1,    12,    13,    -1,    15,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    66,    -1,    -1,    55,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    67,
      -1,    -1,    -1,    71,    72,    73,    74,    -1,    -1,    77,
      -1,    -1,    80,    81,    82,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,   100,    56,    -1,    -1,   104,   105,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    -1,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,   123,    -1,    -1,    -1,    -1,
      -1,    -1,   130,   131,   132,    -1,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   151,    -1,   167,    -1,    -1,   156,   157,
      -1,    -1,   160,   161,    -1,    -1,    -1,    -1,   166,    -1,
     168,   169,   170,     3,    -1,     5,     6,     7,     8,    -1,
      -1,    -1,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    -1,    -1,    -1,    55,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    67,    -1,   114,
      -1,    71,    72,    73,    74,    -1,    -1,    77,    78,    -1,
      80,    81,    82,    -1,    -1,   130,    -1,   132,    -1,   134,
     135,   136,   137,   138,   139,   140,   141,    -1,    -1,    -1,
     100,    -1,    -1,    -1,   104,   105,    -1,    -1,    -1,    -1,
      -1,   156,    -1,    -1,   114,   160,    -1,    -1,    -1,    -1,
      -1,   166,   122,   123,   169,   170,    -1,    -1,    -1,    -1,
     130,   131,   132,    -1,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,    -1,     3,    -1,     5,     6,     7,
       8,   151,    -1,    -1,    12,    13,   156,    15,    -1,    -1,
     160,    -1,    -1,    -1,    -1,    -1,   166,    -1,   168,   169,
     170,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    -1,    -1,    -1,    55,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    67,
      -1,    -1,    -1,    71,    72,    73,    74,    -1,    -1,    77,
      -1,    -1,    80,    81,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,    -1,    -1,    -1,   104,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,   123,    -1,    -1,    -1,    -1,
      -1,    -1,   130,   131,   132,    -1,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,    -1,     3,    -1,     5,
       6,     7,     8,   151,    -1,    -1,    12,    13,   156,    15,
      -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,   166,    -1,
     168,   169,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    -1,    -1,    -1,    55,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    67,    -1,    -1,    -1,    71,    72,    73,    74,    -1,
      -1,    77,    -1,    -1,    80,    81,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,   104,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,   123,    -1,    -1,
      -1,    -1,    -1,    -1,   130,   131,   132,    -1,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,    -1,     3,
      -1,     5,     6,     7,     8,   151,    -1,    -1,    12,    13,
     156,    15,    -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,
     166,    -1,   168,   169,   170,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    -1,    -1,
      -1,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    -1,    -1,    77,    -1,    -1,    80,    81,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,
     104,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,   123,
      -1,    -1,    -1,    -1,    -1,    -1,   130,   131,   132,    -1,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
      -1,     3,    -1,     5,     6,     7,     8,   151,    -1,    -1,
      12,    13,   156,    15,    -1,    -1,   160,    -1,    -1,    -1,
      -1,    -1,   166,    -1,   168,   169,   170,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      -1,    -1,    -1,    55,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    67,    -1,    -1,    -1,    71,
      72,    73,    74,    -1,    -1,    77,    -1,    -1,    80,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,
      -1,    -1,   104,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,   123,    -1,    -1,    -1,    -1,    -1,    -1,   130,   131,
     132,    -1,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   151,
      -1,    -1,    -1,    -1,   156,   157,    -1,    -1,   160,    -1,
      -1,     9,    10,    11,   166,    -1,   168,   169,   170,     3,
      -1,     5,     6,     7,     8,    -1,    -1,    -1,    12,    13,
      -1,    15,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    66,    -1,
      -1,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    -1,    -1,    77,    -1,    -1,    80,    81,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,   100,    -1,    -1,    -1,
     104,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,   123,
      -1,    -1,    -1,    -1,    -1,    -1,   130,   131,   132,    -1,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
      -1,     3,    -1,     5,     6,     7,     8,   151,    -1,    -1,
      12,    13,   156,    15,    -1,    -1,   160,    -1,    -1,    -1,
      -1,    -1,   166,    -1,   168,   169,   170,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      -1,    -1,    -1,    55,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    67,    -1,    -1,    -1,    71,
      72,    73,    74,    -1,    -1,    77,    -1,    -1,    80,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,
      -1,    -1,   104,   105,    -1,    -1,    -1,    -1,    37,    -1,
      -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,   123,    -1,    -1,    -1,    -1,    -1,    -1,   130,   131,
     132,    -1,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,    -1,    -1,    73,    74,    -1,    -1,    77,   151,
      -1,    -1,    -1,    -1,   156,    -1,    -1,    -1,   160,    -1,
      -1,    -1,    -1,    -1,   166,    -1,   168,   169,   170,     3,
      -1,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   130,   131,   132,    -1,   134,   135,   136,   137,   138,
     139,   140,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    -1,    -1,    -1,    -1,   156,    -1,    -1,
      -1,   160,    -1,    67,    -1,    69,    70,   166,    -1,    73,
     169,   170,    -1,    -1,    -1,    -1,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
      -1,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,     3,    -1,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      -1,    -1,   156,    -1,    -1,    -1,    -1,    -1,    -1,    30,
     164,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    69,    70,    -1,    -1,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,    -1,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   156,    -1,    -1,    -1,    -1,    -1,    -1,    30,   164,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    56,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    56,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      56,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,   164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    56,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
     164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    56,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,   164,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    56,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    -1,   164,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    56,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    66,    -1,   164,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    56,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
     162,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    56,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,   162,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    56,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,   161,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    56,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,   161,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    56,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,   161,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    56,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
     161,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    56,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,   161,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    56,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,   161,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    56,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,   161,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    56,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,   161,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    56,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
     161,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,    66,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     3,    56,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   161,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    56,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    67,    -1,    69,    70,    -1,    -1,    73,    -1,
      -1,    -1,    -1,    -1,   161,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,    -1,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,     3,    11,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    69,    70,    -1,    -1,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,    -1,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
       9,    10,    11,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    95,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    56,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    56,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    14,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   172,   176,     0,     3,     5,     6,     7,     8,    12,
      13,    15,    48,    50,    51,    55,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    67,    71,    72,    73,    74,
      75,    77,    80,    81,    82,    83,    85,    86,    87,    89,
      91,    93,    96,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   111,   113,   114,   115,   116,   121,   122,   123,
     124,   125,   126,   127,   130,   131,   132,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   151,   156,   160,
     162,   163,   166,   168,   169,   170,   177,   178,   180,   181,
     182,   183,   199,   207,   210,   213,   214,   215,   217,   229,
     235,   236,   237,   238,   286,   287,   288,   289,   290,   298,
     299,   304,   305,   306,   307,   309,   310,   311,   312,   313,
     314,   315,   316,   327,    73,   114,   130,   181,   287,   290,
     287,   287,   287,   287,   287,   287,   287,   114,   178,   179,
     299,   287,   287,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   287,    31,   160,   125,   160,   181,   284,
     299,   300,   315,   317,   160,   301,   160,   280,   281,   287,
     199,   160,   160,   160,   160,   160,   160,   287,   308,   308,
      73,    73,   196,   279,   308,   163,   104,   106,   156,   177,
     186,   188,   192,   194,   195,   255,   256,   315,    74,   257,
     258,   288,   160,   160,   160,   160,   212,   216,   218,   156,
     177,   185,   160,   160,   160,   166,   304,   306,   307,   314,
     314,    74,    76,   152,   153,   154,   324,   325,   177,   287,
     197,    37,   131,   157,   287,   320,   321,   322,   323,    76,
     302,   324,    76,   324,   163,   315,   156,   160,   252,   114,
     180,   182,   288,   125,   214,    69,    70,    69,    70,    84,
       9,    10,    11,    30,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    56,    66,   162,
      37,   294,   294,   155,   155,   144,   163,   166,   252,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,   142,   143,   294,    14,    49,   252,   287,
     285,   287,   284,   155,   252,   303,   144,   155,   163,   166,
     308,   287,   162,   165,    87,   287,   282,   283,   287,   287,
     196,   287,   287,   162,   162,   162,    16,   162,   165,   162,
     197,   177,   194,    95,   156,   156,   177,   187,   192,   162,
     162,   165,   162,   165,    16,   162,   165,   205,   206,   314,
     287,   328,   329,   287,   161,    73,    73,    73,   177,   162,
     184,   163,   320,   320,   287,   320,   144,   166,   152,   325,
      78,   287,   314,    76,   152,   325,   161,   124,   164,   181,
     182,   198,   199,   314,   160,   287,    14,   167,   165,   168,
     169,   287,    73,   157,   161,   253,   254,   287,   288,   211,
     160,   199,   160,    31,   162,   287,   287,   287,    31,   287,
     287,   287,   287,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   300,   287,   291,    73,   291,     3,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    56,    67,
      69,    70,    73,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   163,   173,   174,   175,   315,   318,
     175,   315,   318,    73,   163,   315,   319,   287,   308,    37,
     287,   287,   287,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   287,   287,   161,   303,   161,   315,   319,
     315,   287,   308,   161,   161,   281,   160,   161,   162,   165,
      95,   161,   161,   161,   287,   279,   164,   156,    73,   163,
     177,   156,   162,   162,   156,   177,   195,   256,   287,   258,
     165,   189,   165,   189,   161,   162,   128,   219,   291,   128,
     220,   163,   176,   161,   161,   161,   167,    73,    51,    73,
      74,    79,   326,   164,   166,   164,   164,   160,   182,   320,
      37,   131,   287,    16,   321,   164,   287,   165,   189,    73,
     287,   287,   197,   287,    31,   160,   291,   160,   287,   252,
     252,   287,   252,   164,   167,   314,   219,   164,   167,    31,
     199,   287,    31,   199,   234,   282,   287,    37,   131,   166,
     222,   314,   200,    31,   163,   226,   163,   291,   201,   163,
     186,   190,   193,   194,   156,   163,   206,   161,   329,   161,
     299,   129,   221,   163,   262,   299,   291,   176,   164,    16,
      79,   167,   287,   161,   161,   314,   160,   287,   254,   161,
     219,   161,   161,    84,   287,   117,   118,   119,   181,   239,
     240,   241,   242,   243,   160,   239,   164,   164,   221,   197,
     161,   197,   162,   314,   160,   320,    14,   161,    31,   199,
     225,   162,   227,   162,   227,    99,   230,   231,   232,   233,
     287,   109,   110,   204,   190,   194,   165,   189,   163,   191,
     194,   162,   262,   291,   259,   165,   163,   164,   287,   167,
     162,   320,   221,   199,    31,   162,   243,   161,   165,   189,
      30,   132,   133,   178,   244,   248,   249,   250,   239,   161,
     291,   162,    88,   282,   320,   167,   222,    31,   199,   224,
     197,   227,    97,    98,    99,   227,   164,   165,   189,   164,
     165,   189,   165,   189,   160,   163,   189,   193,   164,   191,
     165,   189,   163,   111,   114,   115,   116,   117,   118,   119,
     120,   164,   181,   260,   261,   271,   272,   273,   274,   299,
     259,   164,   161,   291,   197,    31,   251,   241,   249,    37,
     208,    35,    35,   161,   111,   295,   163,   162,   161,   161,
     161,   197,    94,    97,   162,   287,    31,   162,   228,   164,
      14,   232,   287,    14,   202,   299,   197,   164,   189,   194,
     164,   259,   262,   260,   244,   106,   290,   274,   164,   163,
      30,   114,   245,   246,   247,   249,    14,   157,   209,   249,
     249,   251,   160,   251,   259,    31,   199,   223,   224,    92,
     162,   162,   228,   197,   287,   287,    35,    74,   203,   164,
     164,   164,   162,   163,   263,    74,   275,   276,   175,   277,
     278,   294,   259,   246,    35,    35,   292,    74,   292,    37,
      74,   296,   297,   292,   164,   197,   162,   197,   299,   161,
      73,   114,   130,   164,   175,   264,   265,   266,   267,   268,
     269,   299,    16,   291,   162,   165,    16,   162,   165,   175,
     164,   246,   246,   293,   291,   163,    74,   161,   165,   163,
      90,   163,   164,   265,   162,   162,    95,   112,   155,   287,
     276,   287,   278,   291,   287,    16,   197,   297,   197,   162,
     197,    73,   173,   274,   262,   175,   291,   291,   160,   292,
     287,   164,   164,   164,   175,   239,   292,   292,   161,   251,
     292,   162,   163,   270,   197,   292,   164
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   171,   172,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   174,   174,   174,   174,   174,   174,   174,   175,
     175,   176,   176,   177,   177,   178,   178,   178,   179,   179,
     180,   181,   181,   182,   182,   182,   182,   183,   183,   183,
     183,   183,   184,   183,   185,   183,   183,   183,   183,   183,
     183,   186,   186,   187,   187,   188,   188,   189,   189,   190,
     190,   191,   191,   192,   192,   193,   193,   194,   194,   195,
     195,   196,   196,   197,   197,   198,   198,   198,   198,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   200,   199,   199,
     199,   199,   199,   201,   201,   202,   202,   203,   203,   204,
     204,   205,   205,   206,   207,   208,   208,   209,   209,   211,
     210,   212,   210,   213,   213,   214,   214,   216,   215,   218,
     217,   219,   219,   220,   220,   221,   221,   222,   222,   222,
     222,   223,   223,   224,   224,   225,   225,   226,   226,   226,
     226,   227,   227,   227,   228,   228,   229,   230,   230,   231,
     231,   232,   232,   233,   233,   234,   234,   235,   235,   236,
     236,   237,   237,   238,   238,   239,   239,   240,   240,   241,
     241,   242,   242,   242,   242,   243,   243,   244,   244,   245,
     245,   245,   246,   246,   247,   247,   248,   248,   248,   249,
     249,   249,   250,   250,   251,   251,   252,   252,   253,   253,
     254,   254,   255,   255,   256,   257,   257,   258,   258,   259,
     259,   260,   260,   260,   261,   261,   261,   262,   262,   263,
     263,   263,   264,   264,   265,   265,   266,   267,   267,   267,
     267,   268,   268,   269,   270,   270,   271,   271,   272,   272,
     273,   273,   274,   274,   274,   274,   274,   274,   275,   275,
     276,   276,   277,   277,   278,   279,   280,   280,   281,   282,
     282,   283,   283,   285,   284,   286,   286,   286,   287,   287,
     287,   287,   287,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   287,   287,   287,   287,   287,   287,   287,
     288,   288,   289,   290,   291,   292,   293,   294,   294,   295,
     295,   296,   296,   297,   297,   298,   298,   298,   298,   299,
     299,   300,   300,   300,   301,   301,   302,   302,   302,   303,
     303,   304,   304,   304,   304,   305,   305,   305,   305,   305,
     305,   305,   305,   306,   306,   306,   306,   306,   306,   306,
     306,   306,   307,   307,   308,   308,   309,   310,   310,   310,
     310,   311,   311,   312,   312,   312,   313,   313,   313,   313,
     313,   314,   314,   314,   315,   315,   315,   316,   316,   317,
     317,   317,   317,   317,   317,   318,   318,   318,   319,   319,
     319,   320,   321,   321,   322,   322,   323,   323,   323,   323,
     323,   323,   323,   324,   324,   324,   324,   325,   325,   325,
     325,   325,   325,   325,   326,   326,   326,   326,   327,   327,
     327,   327,   327,   327,   327,   328,   328,   329
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
       1,     2,     0,     1,     3,     1,     3,     2,     1,     2,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     2,
       4,     3,     0,     6,     0,     5,     3,     4,     3,     4,
       3,     1,     1,     6,     7,     6,     7,     0,     1,     3,
       1,     3,     1,     3,     1,     1,     2,     1,     3,     1,
       2,     3,     1,     2,     0,     1,     1,     2,     4,     3,
       1,     1,     5,     7,     9,     5,     3,     3,     3,     3,
       3,     3,     1,     2,     6,     7,     9,     0,     6,     1,
       6,     3,     2,     0,     9,     1,     3,     0,     1,     0,
       4,     1,     3,     1,    13,     0,     1,     0,     1,     0,
      10,     0,     9,     1,     2,     1,     1,     0,     7,     0,
       8,     0,     2,     0,     2,     0,     2,     1,     2,     4,
       3,     1,     4,     1,     4,     1,     4,     3,     4,     4,
       5,     0,     5,     4,     1,     1,     7,     0,     2,     1,
       3,     4,     4,     1,     3,     1,     4,     5,     6,     1,
       3,     6,     7,     3,     6,     2,     0,     1,     3,     2,
       1,     0,     1,     1,     1,     6,     8,     0,     1,     1,
       2,     1,     1,     1,     3,     3,     1,     2,     1,     1,
       1,     1,     3,     3,     0,     2,     2,     4,     1,     3,
       1,     2,     3,     1,     1,     3,     1,     1,     3,     2,
       0,     4,     4,    12,     1,     2,     3,     1,     3,     1,
       2,     3,     1,     2,     2,     2,     3,     3,     3,     4,
       3,     1,     1,     3,     1,     3,     1,     1,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       2,     4,     3,     1,     4,     4,     3,     1,     1,     0,
       1,     3,     1,     0,     9,     3,     2,     3,     1,     6,
       5,     3,     4,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     5,     4,     3,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     3,     2,
       1,     2,     4,     2,     2,     1,     2,     2,     3,     1,
      13,    12,     1,     1,     0,     0,     0,     0,     1,     0,
       4,     3,     1,     1,     2,     2,     4,     4,     2,     1,
       1,     1,     1,     3,     0,     3,     0,     1,     1,     0,
       1,     4,     3,     1,     3,     1,     1,     3,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     0,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     3,     1,     1,     4,     4,     4,
       1,     1,     1,     3,     1,     4,     2,     3,     3,     1,
       4,     4,     3,     3,     3,     1,     3,     1,     1,     3,
       1,     1,     0,     1,     3,     1,     3,     1,     4,     2,
       2,     6,     4,     2,     2,     1,     2,     1,     4,     3,
       3,     3,     6,     3,     1,     1,     2,     1,     5,     4,
       2,     2,     4,     2,     2,     1,     3,     1
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

    case 74: /* "variable"  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 75: /* T_INLINE_HTML  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 76: /* "string content"  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 77: /* "quoted string"  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 78: /* "variable name"  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 79: /* "number"  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 175: /* identifier  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 176: /* top_statement_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 177: /* namespace_name  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 178: /* name  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 179: /* attribute_decl  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 180: /* attribute  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 181: /* attributes  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 182: /* attributed_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 183: /* top_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 187: /* group_use_declaration  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 188: /* mixed_group_use_declaration  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 190: /* inline_use_declarations  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 191: /* unprefixed_use_declarations  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 192: /* use_declarations  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 193: /* inline_use_declaration  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 194: /* unprefixed_use_declaration  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 195: /* use_declaration  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 196: /* const_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 197: /* inner_statement_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 198: /* inner_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 199: /* statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 201: /* catch_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 202: /* catch_name_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 203: /* optional_variable  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 204: /* finally_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 205: /* unset_variables  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 206: /* unset_variable  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 207: /* function_declaration_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 210: /* class_declaration_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 215: /* trait_declaration_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 217: /* interface_declaration_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 219: /* extends_from  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 220: /* interface_extends_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 221: /* implements_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 222: /* foreach_variable  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 223: /* for_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 224: /* foreach_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 225: /* declare_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 226: /* switch_case_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 227: /* case_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 229: /* match  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 230: /* match_arm_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 231: /* non_empty_match_arm_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 232: /* match_arm  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 233: /* match_arm_cond_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 234: /* while_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 235: /* if_stmt_without_else  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 236: /* if_stmt  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 237: /* alt_if_stmt_without_else  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 238: /* alt_if_stmt  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 239: /* parameter_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 240: /* non_empty_parameter_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 241: /* attributed_parameter  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 243: /* parameter  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 244: /* optional_type_without_static  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 245: /* type_expr  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 246: /* type  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 247: /* union_type  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 248: /* type_expr_without_static  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 249: /* type_without_static  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 250: /* union_type_without_static  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 251: /* return_type  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 252: /* argument_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 253: /* non_empty_argument_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 254: /* argument  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 255: /* global_var_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 256: /* global_var  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 257: /* static_var_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 258: /* static_var  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 259: /* class_statement_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 260: /* attributed_class_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 261: /* class_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 262: /* class_name_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 263: /* trait_adaptations  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 264: /* trait_adaptation_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 265: /* trait_adaptation  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 266: /* trait_precedence  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 267: /* trait_alias  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 268: /* trait_method_reference  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 269: /* absolute_trait_method_reference  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 270: /* method_body  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 275: /* property_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 276: /* property  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 277: /* class_const_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 278: /* class_const_decl  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 279: /* const_decl  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 280: /* echo_expr_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 281: /* echo_expr  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 282: /* for_exprs  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 283: /* non_empty_for_exprs  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 284: /* anonymous_class  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 286: /* new_expr  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 287: /* expr  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 288: /* inline_function  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 291: /* backup_doc_comment  */

      { if (((*yyvaluep).str)) zend_string_release_ex(((*yyvaluep).str), 0); }

        break;

    case 295: /* lexical_vars  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 296: /* lexical_var_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 297: /* lexical_var  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 298: /* function_call  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 299: /* class_name  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 300: /* class_name_reference  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 301: /* exit_expr  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 302: /* backticks_expr  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 303: /* ctor_arguments  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 304: /* dereferencable_scalar  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 305: /* scalar  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 306: /* constant  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 307: /* class_constant  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 308: /* optional_expr  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 309: /* variable_class_name  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 310: /* fully_dereferencable  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 311: /* array_object_dereferencable  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 312: /* callable_expr  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 313: /* callable_variable  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 314: /* variable  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 315: /* simple_variable  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 316: /* static_member  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 317: /* new_variable  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 318: /* member_name  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 319: /* property_name  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 320: /* array_pair_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 321: /* possible_array_pair  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 322: /* non_empty_array_pair_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 323: /* array_pair  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 324: /* encaps_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 325: /* encaps_var  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 326: /* encaps_var_offset  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 327: /* internal_functions_in_yacc  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 328: /* isset_variables  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 329: /* isset_variable  */

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

    { (yyval.ast) = zend_ast_append_str((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 85:

    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_NAME_NOT_FQ; }

    break;

  case 86:

    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_NAME_RELATIVE; }

    break;

  case 87:

    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_NAME_FQ; }

    break;

  case 88:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ATTRIBUTE, (yyvsp[0].ast), NULL); }

    break;

  case 89:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ATTRIBUTE, (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 90:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 91:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ATTRIBUTE_LIST, (yyvsp[0].ast)); }

    break;

  case 92:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 93:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 94:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 95:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 96:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 97:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 98:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 99:

    { (yyval.ast) = zend_ast_with_attributes((yyvsp[0].ast), (yyvsp[-1].ast)); }

    break;

  case 100:

    { (yyval.ast) = zend_ast_create(ZEND_AST_HALT_COMPILER,
			      zend_ast_create_zval_from_long(zend_get_scanned_file_offset()));
			  zend_stop_lexing(); }

    break;

  case 101:

    { (yyval.ast) = zend_ast_create(ZEND_AST_NAMESPACE, (yyvsp[-1].ast), NULL);
			  RESET_DOC_COMMENT(); }

    break;

  case 102:

    { RESET_DOC_COMMENT(); }

    break;

  case 103:

    { (yyval.ast) = zend_ast_create(ZEND_AST_NAMESPACE, (yyvsp[-4].ast), (yyvsp[-1].ast)); }

    break;

  case 104:

    { RESET_DOC_COMMENT(); }

    break;

  case 105:

    { (yyval.ast) = zend_ast_create(ZEND_AST_NAMESPACE, NULL, (yyvsp[-1].ast)); }

    break;

  case 106:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 107:

    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = (yyvsp[-2].num); }

    break;

  case 108:

    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_SYMBOL_CLASS; }

    break;

  case 109:

    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = (yyvsp[-2].num); }

    break;

  case 110:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 111:

    { (yyval.num) = ZEND_SYMBOL_FUNCTION; }

    break;

  case 112:

    { (yyval.num) = ZEND_SYMBOL_CONST; }

    break;

  case 113:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[-5].ast), (yyvsp[-2].ast)); }

    break;

  case 114:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[-5].ast), (yyvsp[-2].ast)); }

    break;

  case 115:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[-5].ast), (yyvsp[-2].ast));}

    break;

  case 116:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[-5].ast), (yyvsp[-2].ast)); }

    break;

  case 119:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 120:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_USE, (yyvsp[0].ast)); }

    break;

  case 121:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 122:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_USE, (yyvsp[0].ast)); }

    break;

  case 123:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 124:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_USE, (yyvsp[0].ast)); }

    break;

  case 125:

    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_SYMBOL_CLASS; }

    break;

  case 126:

    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = (yyvsp[-1].num); }

    break;

  case 127:

    { (yyval.ast) = zend_ast_create(ZEND_AST_USE_ELEM, (yyvsp[0].ast), NULL); }

    break;

  case 128:

    { (yyval.ast) = zend_ast_create(ZEND_AST_USE_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 129:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 130:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 131:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 132:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_CONST_DECL, (yyvsp[0].ast)); }

    break;

  case 133:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 134:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_STMT_LIST); }

    break;

  case 135:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 136:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 137:

    { (yyval.ast) = zend_ast_with_attributes((yyvsp[0].ast), (yyvsp[-1].ast)); }

    break;

  case 138:

    { (yyval.ast) = NULL; zend_throw_exception(zend_ce_compile_error,
			      "__HALT_COMPILER() can only be used from the outermost scope", 0); YYERROR; }

    break;

  case 139:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 140:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 141:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 142:

    { (yyval.ast) = zend_ast_create(ZEND_AST_WHILE, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 143:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DO_WHILE, (yyvsp[-5].ast), (yyvsp[-2].ast)); }

    break;

  case 144:

    { (yyval.ast) = zend_ast_create(ZEND_AST_FOR, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 145:

    { (yyval.ast) = zend_ast_create(ZEND_AST_SWITCH, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 146:

    { (yyval.ast) = zend_ast_create(ZEND_AST_BREAK, (yyvsp[-1].ast)); }

    break;

  case 147:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CONTINUE, (yyvsp[-1].ast)); }

    break;

  case 148:

    { (yyval.ast) = zend_ast_create(ZEND_AST_RETURN, (yyvsp[-1].ast)); }

    break;

  case 149:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 150:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 151:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 152:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ECHO, (yyvsp[0].ast)); }

    break;

  case 153:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 154:

    { (yyval.ast) = (yyvsp[-3].ast); }

    break;

  case 155:

    { (yyval.ast) = zend_ast_create(ZEND_AST_FOREACH, (yyvsp[-4].ast), (yyvsp[-2].ast), NULL, (yyvsp[0].ast)); }

    break;

  case 156:

    { (yyval.ast) = zend_ast_create(ZEND_AST_FOREACH, (yyvsp[-6].ast), (yyvsp[-2].ast), (yyvsp[-4].ast), (yyvsp[0].ast)); }

    break;

  case 157:

    { if (!zend_handle_encoding_declaration((yyvsp[-1].ast))) { YYERROR; } }

    break;

  case 158:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DECLARE, (yyvsp[-3].ast), (yyvsp[0].ast)); }

    break;

  case 159:

    { (yyval.ast) = NULL; }

    break;

  case 160:

    { (yyval.ast) = zend_ast_create(ZEND_AST_TRY, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 161:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GOTO, (yyvsp[-1].ast)); }

    break;

  case 162:

    { (yyval.ast) = zend_ast_create(ZEND_AST_LABEL, (yyvsp[-1].ast)); }

    break;

  case 163:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_CATCH_LIST); }

    break;

  case 164:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-8].ast), zend_ast_create(ZEND_AST_CATCH, (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast))); }

    break;

  case 165:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_NAME_LIST, (yyvsp[0].ast)); }

    break;

  case 166:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 167:

    { (yyval.ast) = NULL; }

    break;

  case 168:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 169:

    { (yyval.ast) = NULL; }

    break;

  case 170:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 171:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }

    break;

  case 172:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 173:

    { (yyval.ast) = zend_ast_create(ZEND_AST_UNSET, (yyvsp[0].ast)); }

    break;

  case 174:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_FUNC_DECL, (yyvsp[-11].num) | (yyvsp[0].num), (yyvsp[-12].num), (yyvsp[-9].str),
		      zend_ast_get_str((yyvsp[-10].ast)), (yyvsp[-7].ast), NULL, (yyvsp[-2].ast), (yyvsp[-5].ast), NULL); CG(extra_fn_flags) = (yyvsp[-4].num); }

    break;

  case 175:

    { (yyval.num) = 0; }

    break;

  case 176:

    { (yyval.num) = ZEND_PARAM_REF; }

    break;

  case 177:

    { (yyval.num) = 0; }

    break;

  case 178:

    { (yyval.num) = ZEND_PARAM_VARIADIC; }

    break;

  case 179:

    { (yyval.num) = CG(zend_lineno); }

    break;

  case 180:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, (yyvsp[-9].num), (yyvsp[-7].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-6].ast)), (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast), NULL, NULL); }

    break;

  case 181:

    { (yyval.num) = CG(zend_lineno); }

    break;

  case 182:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, 0, (yyvsp[-7].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-6].ast)), (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast), NULL, NULL); }

    break;

  case 183:

    { (yyval.num) = (yyvsp[0].num); }

    break;

  case 184:

    { (yyval.num) = zend_add_class_modifier((yyvsp[-1].num), (yyvsp[0].num)); if (!(yyval.num)) { YYERROR; } }

    break;

  case 185:

    { (yyval.num) = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; }

    break;

  case 186:

    { (yyval.num) = ZEND_ACC_FINAL; }

    break;

  case 187:

    { (yyval.num) = CG(zend_lineno); }

    break;

  case 188:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, ZEND_ACC_TRAIT, (yyvsp[-5].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-4].ast)), NULL, NULL, (yyvsp[-1].ast), NULL, NULL); }

    break;

  case 189:

    { (yyval.num) = CG(zend_lineno); }

    break;

  case 190:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, ZEND_ACC_INTERFACE, (yyvsp[-6].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-5].ast)), NULL, (yyvsp[-4].ast), (yyvsp[-1].ast), NULL, NULL); }

    break;

  case 191:

    { (yyval.ast) = NULL; }

    break;

  case 192:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 193:

    { (yyval.ast) = NULL; }

    break;

  case 194:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 195:

    { (yyval.ast) = NULL; }

    break;

  case 196:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 197:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 198:

    { (yyval.ast) = zend_ast_create(ZEND_AST_REF, (yyvsp[0].ast)); }

    break;

  case 199:

    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_ARRAY_SYNTAX_LIST; }

    break;

  case 200:

    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_ARRAY_SYNTAX_SHORT; }

    break;

  case 201:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 202:

    { (yyval.ast) = (yyvsp[-2].ast); }

    break;

  case 203:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 204:

    { (yyval.ast) = (yyvsp[-2].ast); }

    break;

  case 205:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 206:

    { (yyval.ast) = (yyvsp[-2].ast); }

    break;

  case 207:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 208:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 209:

    { (yyval.ast) = (yyvsp[-2].ast); }

    break;

  case 210:

    { (yyval.ast) = (yyvsp[-2].ast); }

    break;

  case 211:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_SWITCH_LIST); }

    break;

  case 212:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-4].ast), zend_ast_create(ZEND_AST_SWITCH_CASE, (yyvsp[-2].ast), (yyvsp[0].ast))); }

    break;

  case 213:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-3].ast), zend_ast_create(ZEND_AST_SWITCH_CASE, NULL, (yyvsp[0].ast))); }

    break;

  case 216:

    { (yyval.ast) = zend_ast_create(ZEND_AST_MATCH, (yyvsp[-4].ast), (yyvsp[-1].ast)); }

    break;

  case 217:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_MATCH_ARM_LIST); }

    break;

  case 218:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 219:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_MATCH_ARM_LIST, (yyvsp[0].ast)); }

    break;

  case 220:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 221:

    { (yyval.ast) = zend_ast_create(ZEND_AST_MATCH_ARM, (yyvsp[-3].ast), (yyvsp[0].ast)); }

    break;

  case 222:

    { (yyval.ast) = zend_ast_create(ZEND_AST_MATCH_ARM, NULL, (yyvsp[0].ast)); }

    break;

  case 223:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_EXPR_LIST, (yyvsp[0].ast)); }

    break;

  case 224:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 225:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 226:

    { (yyval.ast) = (yyvsp[-2].ast); }

    break;

  case 227:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_IF,
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast))); }

    break;

  case 228:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-5].ast),
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast))); }

    break;

  case 229:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 230:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), zend_ast_create(ZEND_AST_IF_ELEM, NULL, (yyvsp[0].ast))); }

    break;

  case 231:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_IF,
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-3].ast), (yyvsp[0].ast))); }

    break;

  case 232:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-6].ast),
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-3].ast), (yyvsp[0].ast))); }

    break;

  case 233:

    { (yyval.ast) = (yyvsp[-2].ast); }

    break;

  case 234:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-5].ast),
			      zend_ast_create(ZEND_AST_IF_ELEM, NULL, (yyvsp[-2].ast))); }

    break;

  case 235:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 236:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_PARAM_LIST); }

    break;

  case 237:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_PARAM_LIST, (yyvsp[0].ast)); }

    break;

  case 238:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 239:

    { (yyval.ast) = zend_ast_with_attributes((yyvsp[0].ast), (yyvsp[-1].ast)); }

    break;

  case 240:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 241:

    { (yyval.num) = 0; }

    break;

  case 242:

    { (yyval.num) = ZEND_ACC_PUBLIC; }

    break;

  case 243:

    { (yyval.num) = ZEND_ACC_PROTECTED; }

    break;

  case 244:

    { (yyval.num) = ZEND_ACC_PRIVATE; }

    break;

  case 245:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_PARAM, (yyvsp[-5].num) | (yyvsp[-3].num) | (yyvsp[-2].num), (yyvsp[-4].ast), (yyvsp[-1].ast), NULL,
					NULL, (yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL); }

    break;

  case 246:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_PARAM, (yyvsp[-7].num) | (yyvsp[-5].num) | (yyvsp[-4].num), (yyvsp[-6].ast), (yyvsp[-3].ast), (yyvsp[0].ast),
					NULL, (yyvsp[-2].str) ? zend_ast_create_zval_from_str((yyvsp[-2].str)) : NULL); }

    break;

  case 247:

    { (yyval.ast) = NULL; }

    break;

  case 248:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 249:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 250:

    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr |= ZEND_TYPE_NULLABLE; }

    break;

  case 251:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 252:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 253:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TYPE, IS_STATIC); }

    break;

  case 254:

    { (yyval.ast) = zend_ast_create_list(2, ZEND_AST_TYPE_UNION, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 255:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 256:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 257:

    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr |= ZEND_TYPE_NULLABLE; }

    break;

  case 258:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 259:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TYPE, IS_ARRAY); }

    break;

  case 260:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TYPE, IS_CALLABLE); }

    break;

  case 261:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 262:

    { (yyval.ast) = zend_ast_create_list(2, ZEND_AST_TYPE_UNION, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 263:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 264:

    { (yyval.ast) = NULL; }

    break;

  case 265:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 266:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_ARG_LIST); }

    break;

  case 267:

    { (yyval.ast) = (yyvsp[-2].ast); }

    break;

  case 268:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ARG_LIST, (yyvsp[0].ast)); }

    break;

  case 269:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 270:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 271:

    { (yyval.ast) = zend_ast_create(ZEND_AST_UNPACK, (yyvsp[0].ast)); }

    break;

  case 272:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 273:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }

    break;

  case 274:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GLOBAL, zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast))); }

    break;

  case 275:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 276:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }

    break;

  case 277:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC, (yyvsp[0].ast), NULL); }

    break;

  case 278:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 279:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 280:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_STMT_LIST); }

    break;

  case 281:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP_GROUP, (yyvsp[-2].ast), (yyvsp[-1].ast), NULL);
			  (yyval.ast)->attr = (yyvsp[-3].num); }

    break;

  case 282:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CLASS_CONST_GROUP, (yyvsp[-1].ast), NULL);
			  (yyval.ast)->attr = (yyvsp[-3].num); }

    break;

  case 283:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_METHOD, (yyvsp[-9].num) | (yyvsp[-11].num) | (yyvsp[0].num), (yyvsp[-10].num), (yyvsp[-7].str),
				  zend_ast_get_str((yyvsp[-8].ast)), (yyvsp[-5].ast), NULL, (yyvsp[-1].ast), (yyvsp[-3].ast), NULL); CG(extra_fn_flags) = (yyvsp[-2].num); }

    break;

  case 284:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 285:

    { (yyval.ast) = zend_ast_with_attributes((yyvsp[0].ast), (yyvsp[-1].ast)); }

    break;

  case 286:

    { (yyval.ast) = zend_ast_create(ZEND_AST_USE_TRAIT, (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 287:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_NAME_LIST, (yyvsp[0].ast)); }

    break;

  case 288:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 289:

    { (yyval.ast) = NULL; }

    break;

  case 290:

    { (yyval.ast) = NULL; }

    break;

  case 291:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 292:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_TRAIT_ADAPTATIONS, (yyvsp[0].ast)); }

    break;

  case 293:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 294:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 295:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 296:

    { (yyval.ast) = zend_ast_create(ZEND_AST_TRAIT_PRECEDENCE, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 297:

    { (yyval.ast) = zend_ast_create(ZEND_AST_TRAIT_ALIAS, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 298:

    { zval zv;
			  if (zend_lex_tstring(&zv, (yyvsp[0].ident)) == FAILURE) { YYABORT; }
			  (yyval.ast) = zend_ast_create(ZEND_AST_TRAIT_ALIAS, (yyvsp[-2].ast), zend_ast_create_zval(&zv)); }

    break;

  case 299:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TRAIT_ALIAS, (yyvsp[-1].num), (yyvsp[-3].ast), (yyvsp[0].ast)); }

    break;

  case 300:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TRAIT_ALIAS, (yyvsp[0].num), (yyvsp[-2].ast), NULL); }

    break;

  case 301:

    { (yyval.ast) = zend_ast_create(ZEND_AST_METHOD_REFERENCE, NULL, (yyvsp[0].ast)); }

    break;

  case 302:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 303:

    { (yyval.ast) = zend_ast_create(ZEND_AST_METHOD_REFERENCE, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 304:

    { (yyval.ast) = NULL; }

    break;

  case 305:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 306:

    { (yyval.num) = (yyvsp[0].num); }

    break;

  case 307:

    { (yyval.num) = ZEND_ACC_PUBLIC; }

    break;

  case 308:

    { (yyval.num) = ZEND_ACC_PUBLIC; }

    break;

  case 309:

    { (yyval.num) = (yyvsp[0].num); if (!((yyval.num) & ZEND_ACC_PPP_MASK)) { (yyval.num) |= ZEND_ACC_PUBLIC; } }

    break;

  case 310:

    { (yyval.num) = (yyvsp[0].num); }

    break;

  case 311:

    { (yyval.num) = zend_add_member_modifier((yyvsp[-1].num), (yyvsp[0].num)); if (!(yyval.num)) { YYERROR; } }

    break;

  case 312:

    { (yyval.num) = ZEND_ACC_PUBLIC; }

    break;

  case 313:

    { (yyval.num) = ZEND_ACC_PROTECTED; }

    break;

  case 314:

    { (yyval.num) = ZEND_ACC_PRIVATE; }

    break;

  case 315:

    { (yyval.num) = ZEND_ACC_STATIC; }

    break;

  case 316:

    { (yyval.num) = ZEND_ACC_ABSTRACT; }

    break;

  case 317:

    { (yyval.num) = ZEND_ACC_FINAL; }

    break;

  case 318:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 319:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_PROP_DECL, (yyvsp[0].ast)); }

    break;

  case 320:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP_ELEM, (yyvsp[-1].ast), NULL, ((yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL)); }

    break;

  case 321:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP_ELEM, (yyvsp[-3].ast), (yyvsp[-1].ast), ((yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL)); }

    break;

  case 322:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 323:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_CLASS_CONST_DECL, (yyvsp[0].ast)); }

    break;

  case 324:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CONST_ELEM, (yyvsp[-3].ast), (yyvsp[-1].ast), ((yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL)); }

    break;

  case 325:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CONST_ELEM, (yyvsp[-3].ast), (yyvsp[-1].ast), ((yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL)); }

    break;

  case 326:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 327:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }

    break;

  case 328:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ECHO, (yyvsp[0].ast)); }

    break;

  case 329:

    { (yyval.ast) = NULL; }

    break;

  case 330:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 331:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 332:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_EXPR_LIST, (yyvsp[0].ast)); }

    break;

  case 333:

    { (yyval.num) = CG(zend_lineno); }

    break;

  case 334:

    {
			zend_ast *decl = zend_ast_create_decl(
				ZEND_AST_CLASS, ZEND_ACC_ANON_CLASS, (yyvsp[-7].num), (yyvsp[-3].str), NULL,
				(yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast), NULL, NULL);
			(yyval.ast) = zend_ast_create(ZEND_AST_NEW, decl, (yyvsp[-6].ast));
		}

    break;

  case 335:

    { (yyval.ast) = zend_ast_create(ZEND_AST_NEW, (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 336:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 337:

    { zend_ast_with_attributes((yyvsp[0].ast)->child[0], (yyvsp[-1].ast)); (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 338:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 339:

    { (yyvsp[-3].ast)->attr = ZEND_ARRAY_SYNTAX_LIST; (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN, (yyvsp[-3].ast), (yyvsp[0].ast)); }

    break;

  case 340:

    { (yyvsp[-3].ast)->attr = ZEND_ARRAY_SYNTAX_SHORT; (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN, (yyvsp[-3].ast), (yyvsp[0].ast)); }

    break;

  case 341:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 342:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN_REF, (yyvsp[-3].ast), (yyvsp[0].ast)); }

    break;

  case 343:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CLONE, (yyvsp[0].ast)); }

    break;

  case 344:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ADD, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 345:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_SUB, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 346:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_MUL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 347:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_POW, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 348:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_DIV, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 349:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_CONCAT, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 350:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_MOD, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 351:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_BW_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 352:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_BW_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 353:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_BW_XOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 354:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_SL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 355:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_SR, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 356:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN_COALESCE, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 357:

    { (yyval.ast) = zend_ast_create(ZEND_AST_POST_INC, (yyvsp[-1].ast)); }

    break;

  case 358:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PRE_INC, (yyvsp[0].ast)); }

    break;

  case 359:

    { (yyval.ast) = zend_ast_create(ZEND_AST_POST_DEC, (yyvsp[-1].ast)); }

    break;

  case 360:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PRE_DEC, (yyvsp[0].ast)); }

    break;

  case 361:

    { (yyval.ast) = zend_ast_create(ZEND_AST_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 362:

    { (yyval.ast) = zend_ast_create(ZEND_AST_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 363:

    { (yyval.ast) = zend_ast_create(ZEND_AST_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 364:

    { (yyval.ast) = zend_ast_create(ZEND_AST_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 365:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BOOL_XOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 366:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 367:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 368:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_XOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 369:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_CONCAT, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 370:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_ADD, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 371:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_SUB, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 372:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_MUL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 373:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_POW, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 374:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_DIV, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 375:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_MOD, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 376:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_SL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 377:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_SR, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 378:

    { (yyval.ast) = zend_ast_create(ZEND_AST_UNARY_PLUS, (yyvsp[0].ast)); }

    break;

  case 379:

    { (yyval.ast) = zend_ast_create(ZEND_AST_UNARY_MINUS, (yyvsp[0].ast)); }

    break;

  case 380:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_UNARY_OP, ZEND_BOOL_NOT, (yyvsp[0].ast)); }

    break;

  case 381:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_UNARY_OP, ZEND_BW_NOT, (yyvsp[0].ast)); }

    break;

  case 382:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_IDENTICAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 383:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_NOT_IDENTICAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 384:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 385:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_NOT_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 386:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_SMALLER, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 387:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_SMALLER_OR_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 388:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GREATER, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 389:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GREATER_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 390:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_SPACESHIP, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 391:

    { (yyval.ast) = zend_ast_create(ZEND_AST_INSTANCEOF, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 392:

    {
			(yyval.ast) = (yyvsp[-1].ast);
			if ((yyval.ast)->kind == ZEND_AST_CONDITIONAL) (yyval.ast)->attr = ZEND_PARENTHESIZED_CONDITIONAL;
		}

    break;

  case 393:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 394:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CONDITIONAL, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 395:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CONDITIONAL, (yyvsp[-3].ast), NULL, (yyvsp[0].ast)); }

    break;

  case 396:

    { (yyval.ast) = zend_ast_create(ZEND_AST_COALESCE, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 397:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 398:

    { (yyval.ast) = zend_ast_create_cast(IS_LONG, (yyvsp[0].ast)); }

    break;

  case 399:

    { (yyval.ast) = zend_ast_create_cast(IS_DOUBLE, (yyvsp[0].ast)); }

    break;

  case 400:

    { (yyval.ast) = zend_ast_create_cast(IS_STRING, (yyvsp[0].ast)); }

    break;

  case 401:

    { (yyval.ast) = zend_ast_create_cast(IS_ARRAY, (yyvsp[0].ast)); }

    break;

  case 402:

    { (yyval.ast) = zend_ast_create_cast(IS_OBJECT, (yyvsp[0].ast)); }

    break;

  case 403:

    { (yyval.ast) = zend_ast_create_cast(_IS_BOOL, (yyvsp[0].ast)); }

    break;

  case 404:

    { (yyval.ast) = zend_ast_create_cast(IS_NULL, (yyvsp[0].ast)); }

    break;

  case 405:

    { (yyval.ast) = zend_ast_create(ZEND_AST_EXIT, (yyvsp[0].ast)); }

    break;

  case 406:

    { (yyval.ast) = zend_ast_create(ZEND_AST_SILENCE, (yyvsp[0].ast)); }

    break;

  case 407:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 408:

    { (yyval.ast) = zend_ast_create(ZEND_AST_SHELL_EXEC, (yyvsp[-1].ast)); }

    break;

  case 409:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PRINT, (yyvsp[0].ast)); }

    break;

  case 410:

    { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD, NULL, NULL); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; }

    break;

  case 411:

    { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD, (yyvsp[0].ast), NULL); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; }

    break;

  case 412:

    { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD, (yyvsp[0].ast), (yyvsp[-2].ast)); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; }

    break;

  case 413:

    { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD_FROM, (yyvsp[0].ast)); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; }

    break;

  case 414:

    { (yyval.ast) = zend_ast_create(ZEND_AST_THROW, (yyvsp[0].ast)); }

    break;

  case 415:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 416:

    { (yyval.ast) = zend_ast_with_attributes((yyvsp[0].ast), (yyvsp[-1].ast)); }

    break;

  case 417:

    { (yyval.ast) = (yyvsp[0].ast); ((zend_ast_decl *) (yyval.ast))->flags |= ZEND_ACC_STATIC; }

    break;

  case 418:

    { (yyval.ast) = zend_ast_with_attributes((yyvsp[0].ast), (yyvsp[-2].ast)); ((zend_ast_decl *) (yyval.ast))->flags |= ZEND_ACC_STATIC; }

    break;

  case 419:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 420:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLOSURE, (yyvsp[-11].num) | (yyvsp[0].num), (yyvsp[-12].num), (yyvsp[-10].str),
				  zend_string_init("{closure}", sizeof("{closure}") - 1, 0),
				  (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-2].ast), (yyvsp[-5].ast), NULL); CG(extra_fn_flags) = (yyvsp[-4].num); }

    break;

  case 421:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_ARROW_FUNC, (yyvsp[-10].num) | (yyvsp[0].num), (yyvsp[-11].num), (yyvsp[-9].str),
				  zend_string_init("{closure}", sizeof("{closure}") - 1, 0), (yyvsp[-7].ast), NULL,
				  zend_ast_create(ZEND_AST_RETURN, (yyvsp[-1].ast)), (yyvsp[-5].ast), NULL);
				  ((zend_ast_decl *) (yyval.ast))->lex_pos = (yyvsp[-2].ptr);
				  CG(extra_fn_flags) = (yyvsp[-3].num); }

    break;

  case 422:

    { (yyval.num) = CG(zend_lineno); }

    break;

  case 423:

    { (yyval.num) = CG(zend_lineno); }

    break;

  case 424:

    { (yyval.str) = CG(doc_comment); CG(doc_comment) = NULL; }

    break;

  case 425:

    { (yyval.num) = CG(extra_fn_flags); CG(extra_fn_flags) = 0; }

    break;

  case 426:

    { (yyval.ptr) = LANG_SCNG(yy_text); }

    break;

  case 427:

    { (yyval.num) = 0; }

    break;

  case 428:

    { (yyval.num) = ZEND_ACC_RETURN_REFERENCE; }

    break;

  case 429:

    { (yyval.ast) = NULL; }

    break;

  case 430:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 431:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 432:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_CLOSURE_USES, (yyvsp[0].ast)); }

    break;

  case 433:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 434:

    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_BIND_REF; }

    break;

  case 435:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CALL, (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 436:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_CALL, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 437:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_CALL, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 438:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CALL, (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 439:

    { zval zv; ZVAL_INTERNED_STR(&zv, ZSTR_KNOWN(ZEND_STR_STATIC));
			  (yyval.ast) = zend_ast_create_zval_ex(&zv, ZEND_NAME_NOT_FQ); }

    break;

  case 440:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 441:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 442:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 443:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 444:

    { (yyval.ast) = NULL; }

    break;

  case 445:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 446:

    { (yyval.ast) = zend_ast_create_zval_from_str(ZSTR_EMPTY_ALLOC()); }

    break;

  case 447:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 448:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 449:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_ARG_LIST); }

    break;

  case 450:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 451:

    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_ARRAY_SYNTAX_LONG; }

    break;

  case 452:

    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_ARRAY_SYNTAX_SHORT; }

    break;

  case 453:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 454:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 455:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 456:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 457:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 458:

    { (yyval.ast) = zend_ast_create_zval_from_str(ZSTR_EMPTY_ALLOC()); }

    break;

  case 459:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 460:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 461:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 462:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 463:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CONST, (yyvsp[0].ast)); }

    break;

  case 464:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_LINE); }

    break;

  case 465:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_FILE); }

    break;

  case 466:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_DIR); }

    break;

  case 467:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_TRAIT_C); }

    break;

  case 468:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_METHOD_C); }

    break;

  case 469:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_FUNC_C); }

    break;

  case 470:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_NS_C); }

    break;

  case 471:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_CLASS_C); }

    break;

  case 472:

    { (yyval.ast) = zend_ast_create_class_const_or_name((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 473:

    { (yyval.ast) = zend_ast_create_class_const_or_name((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 474:

    { (yyval.ast) = NULL; }

    break;

  case 475:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 476:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 477:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 478:

    { (yyval.ast) = (yyvsp[-1].ast); }

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

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 483:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 484:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 485:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 486:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }

    break;

  case 487:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[-3].ast), (yyvsp[-1].ast)); }

    break;

  case 488:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_DIM, ZEND_DIM_ALTERNATIVE_SYNTAX, (yyvsp[-3].ast), (yyvsp[-1].ast)); }

    break;

  case 489:

    { (yyval.ast) = zend_ast_create(ZEND_AST_METHOD_CALL, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 490:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 491:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 492:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 493:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 494:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 495:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 496:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }

    break;

  case 497:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 498:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 499:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }

    break;

  case 500:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[-3].ast), (yyvsp[-1].ast)); }

    break;

  case 501:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_DIM, ZEND_DIM_ALTERNATIVE_SYNTAX, (yyvsp[-3].ast), (yyvsp[-1].ast)); }

    break;

  case 502:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 503:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 504:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 505:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 506:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 507:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }

    break;

  case 508:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 509:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 510:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }

    break;

  case 511:

    { /* allow single trailing comma */ (yyval.ast) = zend_ast_list_rtrim((yyvsp[0].ast)); }

    break;

  case 512:

    { (yyval.ast) = NULL; }

    break;

  case 513:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 514:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 515:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ARRAY, (yyvsp[0].ast)); }

    break;

  case 516:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[0].ast), (yyvsp[-2].ast)); }

    break;

  case 517:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[0].ast), NULL); }

    break;

  case 518:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_ARRAY_ELEM, 1, (yyvsp[0].ast), (yyvsp[-3].ast)); }

    break;

  case 519:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_ARRAY_ELEM, 1, (yyvsp[0].ast), NULL); }

    break;

  case 520:

    { (yyval.ast) = zend_ast_create(ZEND_AST_UNPACK, (yyvsp[0].ast)); }

    break;

  case 521:

    { (yyvsp[-1].ast)->attr = ZEND_ARRAY_SYNTAX_LIST;
			  (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[-1].ast), (yyvsp[-5].ast)); }

    break;

  case 522:

    { (yyvsp[-1].ast)->attr = ZEND_ARRAY_SYNTAX_LIST;
			  (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[-1].ast), NULL); }

    break;

  case 523:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 524:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 525:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ENCAPS_LIST, (yyvsp[0].ast)); }

    break;

  case 526:

    { (yyval.ast) = zend_ast_create_list(2, ZEND_AST_ENCAPS_LIST, (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 527:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }

    break;

  case 528:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[-3].ast)), (yyvsp[-1].ast)); }

    break;

  case 529:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[-2].ast)), (yyvsp[0].ast)); }

    break;

  case 530:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[-1].ast)); }

    break;

  case 531:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[-1].ast)); }

    break;

  case 532:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[-4].ast)), (yyvsp[-2].ast)); }

    break;

  case 533:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 534:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 535:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 536:

    { (yyval.ast) = zend_negate_num_string((yyvsp[0].ast)); }

    break;

  case 537:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }

    break;

  case 538:

    { (yyval.ast) = (yyvsp[-2].ast); }

    break;

  case 539:

    { (yyval.ast) = zend_ast_create(ZEND_AST_EMPTY, (yyvsp[-1].ast)); }

    break;

  case 540:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_INCLUDE, (yyvsp[0].ast)); }

    break;

  case 541:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_INCLUDE_ONCE, (yyvsp[0].ast)); }

    break;

  case 542:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_EVAL, (yyvsp[-1].ast)); }

    break;

  case 543:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_REQUIRE, (yyvsp[0].ast)); }

    break;

  case 544:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_REQUIRE_ONCE, (yyvsp[0].ast)); }

    break;

  case 545:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 546:

    { (yyval.ast) = zend_ast_create(ZEND_AST_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 547:

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
