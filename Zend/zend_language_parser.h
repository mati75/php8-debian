/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
