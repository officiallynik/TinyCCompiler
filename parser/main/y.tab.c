/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     INTEGER_LITERAL = 259,
     STRING_LITERAL = 260,
     CHAR_LITERAL = 261,
     AND = 262,
     OR = 263,
     LESSTHANEQUAL = 264,
     GREATERTHANEQUAL = 265,
     EQ = 266,
     NEQ = 267,
     AMPERSAND = 268,
     MULEQ = 269,
     DIVEQ = 270,
     MODEQ = 271,
     PLUSEQ = 272,
     MINUSEQ = 273,
     INCREMENT = 274,
     DECREMENT = 275,
     SHORT = 276,
     INT = 277,
     LONG = 278,
     LONG_LONG = 279,
     SIGNED = 280,
     UNSIGNED = 281,
     CONST = 282,
     CHAR = 283,
     BOOLEAN = 284,
     VOID = 285,
     IF = 286,
     FOR = 287,
     WHILE = 288,
     CONTINUE = 289,
     BREAK = 290,
     RETURN = 291,
     CASE = 292,
     DEFAULT = 293,
     DO = 294,
     ELSE = 295,
     SWITCH = 296,
     STAR = 297,
     ADDITION = 298,
     MINUS = 299,
     NEGATION = 300,
     EXCLAIMATION = 301,
     DIVISION = 302,
     MODULO = 303,
     SHIFTLEFT = 304,
     SHIFTRIGHT = 305,
     LESSTHAN = 306,
     GREATERTHAN = 307,
     BITXOR = 308,
     BITOR = 309,
     QUESTION = 310,
     ASSIGN = 311,
     SHIFTLEQ = 312,
     SHIFTREQ = 313,
     BITANDEQ = 314,
     BITXOREQ = 315,
     BITOREQ = 316,
     HASH = 317,
     TRUE = 318,
     FALSE = 319,
     PRINTF = 320,
     SCANF = 321,
     GETS = 322,
     PUTS = 323,
     SIZEOF = 324,
     LOOP = 325,
     SUM = 326,
     MAX = 327,
     MIN = 328,
     COMMA = 329,
     FULL_STOP = 330,
     OPEN_SQUARE = 331,
     CLOSE_SQUARE = 332,
     COLON = 333,
     UMINUS = 334,
     LOWER_THAN_ELSE = 335
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define INTEGER_LITERAL 259
#define STRING_LITERAL 260
#define CHAR_LITERAL 261
#define AND 262
#define OR 263
#define LESSTHANEQUAL 264
#define GREATERTHANEQUAL 265
#define EQ 266
#define NEQ 267
#define AMPERSAND 268
#define MULEQ 269
#define DIVEQ 270
#define MODEQ 271
#define PLUSEQ 272
#define MINUSEQ 273
#define INCREMENT 274
#define DECREMENT 275
#define SHORT 276
#define INT 277
#define LONG 278
#define LONG_LONG 279
#define SIGNED 280
#define UNSIGNED 281
#define CONST 282
#define CHAR 283
#define BOOLEAN 284
#define VOID 285
#define IF 286
#define FOR 287
#define WHILE 288
#define CONTINUE 289
#define BREAK 290
#define RETURN 291
#define CASE 292
#define DEFAULT 293
#define DO 294
#define ELSE 295
#define SWITCH 296
#define STAR 297
#define ADDITION 298
#define MINUS 299
#define NEGATION 300
#define EXCLAIMATION 301
#define DIVISION 302
#define MODULO 303
#define SHIFTLEFT 304
#define SHIFTRIGHT 305
#define LESSTHAN 306
#define GREATERTHAN 307
#define BITXOR 308
#define BITOR 309
#define QUESTION 310
#define ASSIGN 311
#define SHIFTLEQ 312
#define SHIFTREQ 313
#define BITANDEQ 314
#define BITXOREQ 315
#define BITOREQ 316
#define HASH 317
#define TRUE 318
#define FALSE 319
#define PRINTF 320
#define SCANF 321
#define GETS 322
#define PUTS 323
#define SIZEOF 324
#define LOOP 325
#define SUM 326
#define MAX 327
#define MIN 328
#define COMMA 329
#define FULL_STOP 330
#define OPEN_SQUARE 331
#define CLOSE_SQUARE 332
#define COLON 333
#define UMINUS 334
#define LOWER_THAN_ELSE 335




/* Copy the first part of user declarations.  */
#line 1 "parser.y"

	#include <bits/stdc++.h>
	#include "symboltable.h"
	#include "lex.yy.c"

	using namespace std;

	void yyerror(char *msg);

	#define SYMBOL_TABLE symbol_table_list[current_scope].symbol_table

  	extern entry_t** constant_table;

	int current_dtype;
	int size;
	table_t symbol_table_list[NUM_TABLES];

	int is_declaration = 0;
	int rhs = 0;
	int old_is_declaration=0;



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 25 "parser.y"
{
	int data_type;
	entry_t* entry;
	string* op;
}
/* Line 193 of yacc.c.  */
#line 285 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 298 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   444

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  98
/* YYNRULES -- Number of states.  */
#define YYNSTATES  161

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   335

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      84,    85,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    83,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    86,     2,    87,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    81,     2,    82,     2,     2,     2,     2,
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
      75,    76,    77,    78,    79,    80
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,     9,    11,    12,    17,    20,
      22,    24,    26,    28,    30,    32,    34,    36,    38,    40,
      42,    44,    46,    49,    52,    55,    59,    60,    61,    71,
      73,    75,    81,    89,    95,    99,   102,   105,   109,   111,
     113,   115,   117,   121,   124,   126,   130,   132,   136,   140,
     144,   148,   152,   156,   160,   164,   167,   169,   171,   173,
     177,   181,   185,   189,   192,   195,   198,   201,   203,   205,
     207,   209,   211,   213,   215,   217,   219,   223,   227,   231,
     235,   239,   243,   246,   248,   250,   252,   254,   256,   258,
     260,   262,   265,   270,   274,   276,   277,   280,   281
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      89,     0,    -1,    89,    90,    -1,    -1,    96,    -1,    91,
      -1,    -1,    81,    92,    89,    82,    -1,    94,    95,    -1,
      95,    -1,    25,    -1,    26,    -1,    22,    -1,    21,    -1,
      23,    -1,    24,    -1,    28,    -1,    29,    -1,   101,    -1,
      97,    -1,   102,    -1,   103,    -1,    36,    83,    -1,    34,
      83,    -1,    35,    83,    -1,    36,   108,    83,    -1,    -1,
      -1,    32,    84,    98,   100,   106,   107,    85,    99,    90,
      -1,   103,    -1,   106,    -1,    31,    84,   107,    85,    90,
      -1,    31,    84,   107,    85,    90,    40,    90,    -1,    33,
      84,   107,    85,    90,    -1,    93,   104,    83,    -1,   104,
      83,    -1,   110,    83,    -1,   104,    74,   105,    -1,   105,
      -1,   109,    -1,   112,    -1,   116,    -1,    93,   107,    83,
      -1,   107,    83,    -1,    83,    -1,   107,    74,   108,    -1,
     108,    -1,   108,    52,   108,    -1,   108,    51,   108,    -1,
     108,    11,   108,    -1,   108,    12,   108,    -1,   108,    10,
     108,    -1,   108,     9,   108,    -1,   108,     7,   108,    -1,
     108,     8,   108,    -1,    46,   108,    -1,   114,    -1,   109,
      -1,   110,    -1,   111,   113,   114,    -1,   111,   113,   116,
      -1,   111,   113,   110,    -1,   110,   113,   110,    -1,   112,
      19,    -1,   112,    20,    -1,    20,   112,    -1,    19,   112,
      -1,   112,    -1,   116,    -1,     3,    -1,    56,    -1,    17,
      -1,    18,    -1,    14,    -1,    15,    -1,    16,    -1,   114,
      43,   114,    -1,   114,    44,   114,    -1,   114,    42,   114,
      -1,   114,    47,   114,    -1,   114,    48,   114,    -1,    84,
     114,    85,    -1,    44,   114,    -1,   112,    -1,   116,    -1,
     115,    -1,   116,    -1,     4,    -1,     6,    -1,    63,    -1,
      64,    -1,   112,   117,    -1,    86,   118,    87,   117,    -1,
      86,   118,    87,    -1,   115,    -1,    -1,   119,   114,    -1,
      -1,   120,   110,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    89,    89,    89,    91,    91,    94,    93,   106,   107,
     110,   111,   114,   115,   116,   117,   118,   119,   126,   128,
     130,   131,   133,   135,   137,   139,   143,   146,   143,   152,
     152,   154,   155,   158,   161,   162,   163,   166,   167,   170,
     171,   172,   176,   177,   178,   181,   182,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   202,
     203,   204,   205,   209,   210,   211,   212,   214,   214,   216,
     243,   244,   245,   246,   247,   248,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   264,   264,   264,
     264,   267,   269,   269,   271,   272,   272,   277,   277
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "INTEGER_LITERAL",
  "STRING_LITERAL", "CHAR_LITERAL", "AND", "OR", "LESSTHANEQUAL",
  "GREATERTHANEQUAL", "EQ", "NEQ", "AMPERSAND", "MULEQ", "DIVEQ", "MODEQ",
  "PLUSEQ", "MINUSEQ", "INCREMENT", "DECREMENT", "SHORT", "INT", "LONG",
  "LONG_LONG", "SIGNED", "UNSIGNED", "CONST", "CHAR", "BOOLEAN", "VOID",
  "IF", "FOR", "WHILE", "CONTINUE", "BREAK", "RETURN", "CASE", "DEFAULT",
  "DO", "ELSE", "SWITCH", "STAR", "ADDITION", "MINUS", "NEGATION",
  "EXCLAIMATION", "DIVISION", "MODULO", "SHIFTLEFT", "SHIFTRIGHT",
  "LESSTHAN", "GREATERTHAN", "BITXOR", "BITOR", "QUESTION", "ASSIGN",
  "SHIFTLEQ", "SHIFTREQ", "BITANDEQ", "BITXOREQ", "BITOREQ", "HASH",
  "TRUE", "FALSE", "PRINTF", "SCANF", "GETS", "PUTS", "SIZEOF", "LOOP",
  "SUM", "MAX", "MIN", "COMMA", "FULL_STOP", "OPEN_SQUARE", "CLOSE_SQUARE",
  "COLON", "UMINUS", "LOWER_THAN_ELSE", "'{'", "'}'", "';'", "'('", "')'",
  "'['", "']'", "$accept", "statements", "stmt", "compound_stmt", "@1",
  "data_type", "sign_specifier", "type_specifier", "single_stmt",
  "for_block", "@2", "@3", "for_declaration", "if_block", "while_block",
  "declaration", "declaration_list", "sub_decl", "expression_stmt",
  "expression", "sub_expr", "assignment_expr", "unary_expr", "lhs",
  "identifier", "assign", "arithmetic_expr", "constant", "array_access",
  "arr", "array_index", "@4", "@5", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   123,   125,    59,    40,    41,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    89,    90,    90,    92,    91,    93,    93,
      94,    94,    95,    95,    95,    95,    95,    95,    96,    96,
      96,    96,    96,    96,    96,    96,    98,    99,    97,   100,
     100,   101,   101,   102,   103,   103,   103,   104,   104,   105,
     105,   105,   106,   106,   106,   107,   107,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   109,
     109,   109,   109,   110,   110,   110,   110,   111,   111,   112,
     113,   113,   113,   113,   113,   113,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   115,   115,   115,
     115,   116,   117,   117,   118,   119,   118,   120,   118
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     1,     1,     0,     4,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     3,     0,     0,     9,     1,
       1,     5,     7,     5,     3,     2,     2,     3,     1,     1,
       1,     1,     3,     2,     1,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     1,     1,     1,     3,
       3,     3,     3,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     4,     3,     1,     0,     2,     0,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,    69,     0,     0,    13,    12,    14,    15,
      10,    11,    16,    17,     0,     0,     0,     0,     0,     0,
       6,     2,     5,     0,     0,     9,     4,    19,    18,    20,
      21,     0,    38,    39,     0,     0,    67,    68,    66,    65,
       0,    26,     0,    23,    24,    87,    88,     0,     0,    89,
      90,    22,     0,     0,    57,    58,    83,    56,    85,    84,
       3,     0,     0,     8,     0,    35,    73,    74,    75,    71,
      72,    70,    36,     0,     0,    63,    64,    95,    91,     0,
      46,     0,     0,    83,    82,    84,    55,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,     0,     0,     0,
       0,     0,     0,    34,    37,    62,     0,    61,    83,    59,
      60,    94,     0,     0,     0,     0,     0,    44,     0,     0,
      29,    30,     0,    57,    58,    83,    84,     0,    81,    53,
      54,    52,    51,    49,    50,    48,    47,    78,    76,    77,
      79,    80,     7,    93,    96,    98,    45,    31,     0,     0,
       0,    43,    33,    92,     0,    42,     0,    32,    27,     0,
      28
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    21,    22,    60,    23,    24,    25,    26,    27,
      81,   159,   119,    28,    29,    30,    31,    32,   121,   122,
      80,    54,    55,    35,    56,    73,    57,    58,    59,    78,
     112,   113,   114
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -80
static const yytype_int16 yypact[] =
{
     -80,   187,   -80,   -80,    35,    35,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -79,   -24,   -23,    36,    37,   232,
     -80,   -80,   -80,    28,   373,   -80,   -80,   -80,   -80,   -80,
     -80,     8,   -80,   -80,   215,    25,   -12,    48,   -80,   -80,
     130,   -80,   130,   -80,   -80,   -80,   -80,    26,   130,   -80,
     -80,   -80,    26,     2,   -80,    25,   358,   356,   -80,   365,
     -80,    61,    25,   -80,    28,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,    28,   250,   -80,   -80,    30,   -80,   -30,
     251,   221,   -10,    -2,   -80,   -80,   -80,   345,   130,   130,
     130,   130,   130,   130,   130,   130,   -80,    26,    26,    26,
      26,    26,   304,   -80,   -80,   -80,     1,   -80,   -18,   356,
     368,   -80,   -11,    26,    28,   130,   328,   -80,   130,   221,
     -80,   -80,    65,    87,   215,   351,     9,   328,   -80,   270,
     145,   -80,   -80,     7,     7,   -80,   -80,   -80,   144,   144,
     -80,   -80,   -80,    -2,   356,   -80,   251,    84,    92,   130,
     130,   -80,   -80,   -80,   328,   -80,    -8,   -80,   -80,   328,
     -80
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -80,    67,    13,   -80,   -80,   -63,   -80,   113,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,    64,    -4,    83,    32,    -7,
      90,    44,    14,   -80,    -1,   128,   245,    88,     5,    34,
     -80,   -80,   -80
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -98
static const yytype_int16 yytable[] =
{
      36,    75,    76,    38,    39,    40,    37,    75,    76,    88,
      89,    90,    91,    92,    93,    34,    90,    91,   118,    61,
      75,    76,    36,   -68,   -68,   -68,   -68,   -68,    37,     3,
      45,     3,    46,    79,    45,    82,    46,    62,     3,    66,
      67,    68,    69,    70,   115,    33,    83,     4,     5,   -97,
     -97,    83,    85,    94,    95,   116,   149,    85,    94,    95,
      41,    42,   -40,    36,   115,   -68,   115,    33,    77,    37,
      47,   -40,   106,   108,    77,   127,   143,   158,    62,   110,
     125,    71,    64,   -41,    77,    96,   126,   105,   107,    49,
      50,    65,   -41,    49,    50,   124,    83,    83,    83,    83,
      83,    36,    85,    85,    85,    85,    85,    37,    33,    53,
      52,   148,    83,   106,    61,    36,    34,   125,    85,    43,
      44,    37,   -41,   126,   154,   123,    36,   102,   145,   147,
      34,   -41,    37,     3,    45,    64,    46,    63,    86,   115,
     152,    34,   148,   156,   103,   120,    33,   104,   151,     4,
       5,   150,    88,    36,    90,    91,    92,    93,    36,    37,
      33,   -39,   123,    74,    37,   111,   115,   157,    34,     0,
     -39,    33,   160,    34,    47,   155,    48,   153,   129,   130,
     131,   132,   133,   134,   135,   136,    97,     2,     0,     0,
       3,   100,   101,    49,    50,     0,    94,    95,    33,     0,
       0,     0,     0,    33,     0,   146,     4,     5,     6,     7,
       8,     9,    10,    11,    52,    12,    13,     0,    14,    15,
      16,    17,    18,    19,     3,    45,     0,    46,     0,    66,
      67,    68,    69,    70,     0,     3,    45,     0,    46,     0,
       4,     5,     6,     7,     8,     9,    10,    11,     0,    12,
      13,     4,     5,     3,    45,     0,    46,     0,    88,    89,
      90,    91,    92,    93,     0,    47,     0,    48,    20,     4,
       5,    71,     0,     0,     0,     0,    47,     0,    48,    90,
      91,    92,    93,     0,    49,    50,     0,     0,     0,     0,
       0,     0,    84,     0,    47,    49,    50,    87,    72,     0,
       0,     0,    94,    95,   117,    52,     0,     3,     0,     0,
       0,     0,     0,    49,    50,    51,    52,     0,     0,   109,
       0,    94,    95,     4,     5,     6,     7,     8,     9,    10,
      11,     3,    12,    13,    52,    14,    15,    16,    17,    18,
      19,     0,   137,   138,   139,   140,   141,     4,     5,     6,
       7,     8,     9,    10,    11,     0,    12,    13,   144,    14,
      15,    16,    17,    18,    19,   -67,   -67,   -67,   -67,   -67,
      75,    76,   -67,   -67,   -67,   -67,   -67,    75,    76,   -68,
     -68,   -68,   -68,   -68,     0,    20,   142,    97,    98,    99,
       0,     0,   100,   101,     6,     7,     8,     9,    97,    98,
      99,    12,    13,   100,   101,     0,     0,   -67,     0,    20,
     -84,   -84,   -84,     0,   -67,   -84,   -84,     0,     0,     0,
       0,   -68,     0,     0,     0,   -40,     0,     0,     0,     0,
     128,     0,     0,     0,   -40,     0,     0,    77,     0,     0,
       0,     0,     0,     0,    77
};

static const yytype_int16 yycheck[] =
{
       1,    19,    20,     4,     5,    84,     1,    19,    20,     7,
       8,     9,    10,    11,    12,     1,     9,    10,    81,    23,
      19,    20,    23,    14,    15,    16,    17,    18,    23,     3,
       4,     3,     6,    40,     4,    42,     6,    23,     3,    14,
      15,    16,    17,    18,    74,     1,    47,    19,    20,    19,
      20,    52,    47,    51,    52,    85,   119,    52,    51,    52,
      84,    84,    74,    64,    74,    56,    74,    23,    86,    64,
      44,    83,    73,    74,    86,    85,    87,    85,    64,    74,
      81,    56,    74,    74,    86,    83,    81,    73,    74,    63,
      64,    83,    83,    63,    64,    81,    97,    98,    99,   100,
     101,   102,    97,    98,    99,   100,   101,   102,    64,    19,
      84,   118,   113,   114,   118,   116,   102,   118,   113,    83,
      83,   116,    74,   118,    40,    81,   127,    60,   114,   116,
     116,    83,   127,     3,     4,    74,     6,    24,    48,    74,
     127,   127,   149,   150,    83,    81,   102,    64,    83,    19,
      20,   119,     7,   154,     9,    10,    11,    12,   159,   154,
     116,    74,   118,    35,   159,    77,    74,   154,   154,    -1,
      83,   127,   159,   159,    44,    83,    46,   143,    88,    89,
      90,    91,    92,    93,    94,    95,    42,     0,    -1,    -1,
       3,    47,    48,    63,    64,    -1,    51,    52,   154,    -1,
      -1,    -1,    -1,   159,    -1,   115,    19,    20,    21,    22,
      23,    24,    25,    26,    84,    28,    29,    -1,    31,    32,
      33,    34,    35,    36,     3,     4,    -1,     6,    -1,    14,
      15,    16,    17,    18,    -1,     3,     4,    -1,     6,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    28,
      29,    19,    20,     3,     4,    -1,     6,    -1,     7,     8,
       9,    10,    11,    12,    -1,    44,    -1,    46,    81,    19,
      20,    56,    -1,    -1,    -1,    -1,    44,    -1,    46,     9,
      10,    11,    12,    -1,    63,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    44,    63,    64,    52,    83,    -1,
      -1,    -1,    51,    52,    83,    84,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    63,    64,    83,    84,    -1,    -1,    74,
      -1,    51,    52,    19,    20,    21,    22,    23,    24,    25,
      26,     3,    28,    29,    84,    31,    32,    33,    34,    35,
      36,    -1,    97,    98,    99,   100,   101,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,    28,    29,   113,    31,
      32,    33,    34,    35,    36,    14,    15,    16,    17,    18,
      19,    20,    14,    15,    16,    17,    18,    19,    20,    14,
      15,    16,    17,    18,    -1,    81,    82,    42,    43,    44,
      -1,    -1,    47,    48,    21,    22,    23,    24,    42,    43,
      44,    28,    29,    47,    48,    -1,    -1,    56,    -1,    81,
      42,    43,    44,    -1,    56,    47,    48,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    86
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    89,     0,     3,    19,    20,    21,    22,    23,    24,
      25,    26,    28,    29,    31,    32,    33,    34,    35,    36,
      81,    90,    91,    93,    94,    95,    96,    97,   101,   102,
     103,   104,   105,   109,   110,   111,   112,   116,   112,   112,
      84,    84,    84,    83,    83,     4,     6,    44,    46,    63,
      64,    83,    84,   108,   109,   110,   112,   114,   115,   116,
      92,   104,   110,    95,    74,    83,    14,    15,    16,    17,
      18,    56,    83,   113,   113,    19,    20,    86,   117,   107,
     108,    98,   107,   112,   114,   116,   108,   114,     7,     8,
       9,    10,    11,    12,    51,    52,    83,    42,    43,    44,
      47,    48,    89,    83,   105,   110,   112,   110,   112,   114,
     116,   115,   118,   119,   120,    74,    85,    83,    93,   100,
     103,   106,   107,   109,   110,   112,   116,    85,    85,   108,
     108,   108,   108,   108,   108,   108,   108,   114,   114,   114,
     114,   114,    82,    87,   114,   110,   108,    90,   107,    93,
     106,    83,    90,   117,    40,    83,   107,    90,    85,    99,
      90
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 6:
#line 94 "parser.y"
    {
						current_scope = create_new_scope();
						
					}
    break;

  case 7:
#line 100 "parser.y"
    {
						current_scope = exit_scope();
					}
    break;

  case 8:
#line 106 "parser.y"
    {is_declaration = 1;}
    break;

  case 9:
#line 107 "parser.y"
    {is_declaration = 1;}
    break;

  case 12:
#line 114 "parser.y"
    {current_dtype = INT;}
    break;

  case 13:
#line 115 "parser.y"
    {current_dtype = SHORT;}
    break;

  case 14:
#line 116 "parser.y"
    {current_dtype = LONG;}
    break;

  case 15:
#line 117 "parser.y"
    {current_dtype = LONG_LONG;}
    break;

  case 16:
#line 118 "parser.y"
    {current_dtype = CHAR;}
    break;

  case 17:
#line 119 "parser.y"
    {current_dtype = BOOLEAN;}
    break;

  case 26:
#line 143 "parser.y"
    {
						current_scope = create_new_scope();
						
				}
    break;

  case 27:
#line 146 "parser.y"
    {
						is_declaration = 0;
						current_scope = exit_scope();
					}
    break;

  case 34:
#line 161 "parser.y"
    {is_declaration = 0;}
    break;

  case 59:
#line 202 "parser.y"
    {rhs = 0;}
    break;

  case 60:
#line 203 "parser.y"
    {rhs = 0;}
    break;

  case 61:
#line 204 "parser.y"
    {rhs = 0;}
    break;

  case 62:
#line 205 "parser.y"
    {rhs = 0;}
    break;

  case 69:
#line 216 "parser.y"
    {
                    if(is_declaration && !rhs)
                    {	
						if(current_dtype == INT){
							size = 4;
						}else if(current_dtype == LONG_LONG){
							size = 8;
						}else if(current_dtype == CHAR){
							size = 1;
						}else if(current_dtype == SHORT){
							size = 1;
						}else if(current_dtype == LONG){
							size = 8;
						}
						(yyvsp[(1) - (1)].entry)=insert(SYMBOL_TABLE,yytext,INT_MAX,current_dtype, size);
						if((yyvsp[(1) - (1)].entry) == NULL) 
							yyerror("Redeclaration of variable");
                    }
                    else
                    {	
						(yyvsp[(1) - (1)].entry)=search_recursive(yytext);
                      	if((yyvsp[(1) - (1)].entry) == NULL) 
					  		yyerror("Variable not declared");
                    }
                }
    break;

  case 70:
#line 243 "parser.y"
    {rhs = 1;}
    break;

  case 71:
#line 244 "parser.y"
    {rhs = 1;}
    break;

  case 72:
#line 245 "parser.y"
    {rhs = 1;}
    break;

  case 73:
#line 246 "parser.y"
    {rhs = 1;}
    break;

  case 74:
#line 247 "parser.y"
    {rhs = 1;}
    break;

  case 75:
#line 248 "parser.y"
    {rhs = 1;}
    break;

  case 95:
#line 272 "parser.y"
    {	old_is_declaration=is_declaration;
				is_declaration=0;
			}
    break;

  case 96:
#line 274 "parser.y"
    {
				is_declaration=old_is_declaration;
				}
    break;

  case 97:
#line 277 "parser.y"
    {	old_is_declaration=is_declaration;
				is_declaration=0;
			
			}
    break;

  case 98:
#line 280 "parser.y"
    {
				is_declaration=old_is_declaration;}
    break;


/* Line 1267 of yacc.c.  */
#line 1900 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 284 "parser.y"


int main(int argc, char *argv[]){
	int i;
	for(i=0; i<NUM_TABLES;i++)
	{
		symbol_table_list[i].symbol_table = NULL;
		symbol_table_list[i].parent = -1;
	}

	constant_table = create_table();
  	symbol_table_list[0].symbol_table = create_table();

    yyin = fopen(argv[1],"r"); 
    	while(!feof(yyin))
		yyparse();
	
	printf("SYMBOL TABLES\n\n");
	display_all();
	printf("CONSTANT TABLE");
	display_constant_table(constant_table);

	fclose(yyin);
	return 0;
}

void yyerror(const char *msg)
{
	printf("Line no: %d Error message: %s Token: %s\n", yylineno, msg, yytext);
	// exit(0);
}

