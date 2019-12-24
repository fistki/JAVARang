/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2006, 2009-2010 Free Software
   Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */


/**
 * Introduction to Compiler Design by Prof. Yi Ping You, spring 2012
 * Project 3 YACC sample
 * Last Modification : 2012/06/14 12:18
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "header.h"
#include "symtab.h"
#include "semcheck.h"

//#include "test.h"

int yydebug;

extern int linenum;		/* declared in lex.l */
extern FILE *yyin;		/* declared by lex */

extern char *yytext;		/* declared by lex */
extern char buf[256];		/* declared in lex.l */
FILE *out;
int i;
int scope = 0;
int varcount=0;
int Opt_D = 1;			/* symbol table dump option */
char fileName[256];
char* LocalItem[1000];
int ItemScope[1000];
SEMTYPE ItemType[1000];
char* ExprStack[1000];
int StackCount=0;
int LocalCount=0;
struct SymTable *symbolTable;	// main symbol table
int lCount=0;
int lC[20];
int lCtop=0;
__BOOLEAN paramError;			// indicate is parameter have any error?

struct PType *funcReturn;		// record function's return type, used at 'return statement' production rule
int dumpEStack(const char*);
void superfree(char**);



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ARRAY = 258,
     BEG = 259,
     BOOLEAN = 260,
     DEF = 261,
     DO = 262,
     ELSE = 263,
     END = 264,
     FALSE = 265,
     FOR = 266,
     INTEGER = 267,
     IF = 268,
     OF = 269,
     PRINT = 270,
     READ = 271,
     REAL = 272,
     RETURN = 273,
     STRING = 274,
     THEN = 275,
     TO = 276,
     TRUE = 277,
     VAR = 278,
     WHILE = 279,
     OP_ADD = 280,
     OP_SUB = 281,
     OP_MUL = 282,
     OP_DIV = 283,
     OP_MOD = 284,
     OP_ASSIGN = 285,
     OP_EQ = 286,
     OP_NE = 287,
     OP_GT = 288,
     OP_LT = 289,
     OP_GE = 290,
     OP_LE = 291,
     OP_AND = 292,
     OP_OR = 293,
     OP_NOT = 294,
     MK_COMMA = 295,
     MK_COLON = 296,
     MK_SEMICOLON = 297,
     MK_LPAREN = 298,
     MK_RPAREN = 299,
     MK_LB = 300,
     MK_RB = 301,
     ID = 302,
     INT_CONST = 303,
     FLOAT_CONST = 304,
     SCIENTIFIC = 305,
     STR_CONST = 306
   };
#endif
/* Tokens.  */
#define ARRAY 258
#define BEG 259
#define BOOLEAN 260
#define DEF 261
#define DO 262
#define ELSE 263
#define END 264
#define FALSE 265
#define FOR 266
#define INTEGER 267
#define IF 268
#define OF 269
#define PRINT 270
#define READ 271
#define REAL 272
#define RETURN 273
#define STRING 274
#define THEN 275
#define TO 276
#define TRUE 277
#define VAR 278
#define WHILE 279
#define OP_ADD 280
#define OP_SUB 281
#define OP_MUL 282
#define OP_DIV 283
#define OP_MOD 284
#define OP_ASSIGN 285
#define OP_EQ 286
#define OP_NE 287
#define OP_GT 288
#define OP_LT 289
#define OP_GE 290
#define OP_LE 291
#define OP_AND 292
#define OP_OR 293
#define OP_NOT 294
#define MK_COMMA 295
#define MK_COLON 296
#define MK_SEMICOLON 297
#define MK_LPAREN 298
#define MK_RPAREN 299
#define MK_LB 300
#define MK_RB 301
#define ID 302
#define INT_CONST 303
#define FLOAT_CONST 304
#define SCIENTIFIC 305
#define STR_CONST 306




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{


	int intVal;
	float realVal;
	//__BOOLEAN booleanVal;
	char *lexeme;
	struct idNode_sem *id;
	//SEMTYPE type;
	struct ConstAttr *constVal;
	struct PType *ptype;
	struct param_sem *par;
	struct expr_sem *exprs;
	/*struct var_ref_sem *varRef; */
	struct expr_sem_node *exprNode;



} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   193

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  112
/* YYNRULES -- Number of states.  */
#define YYNSTATES  197

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,    11,    12,    17,    19,    20,    23,
      25,    31,    37,    43,    45,    48,    50,    53,    55,    58,
      60,    62,    64,    66,    67,    70,    72,    73,    74,    86,
      88,    89,    93,    95,    99,   103,   105,   108,   109,   111,
     113,   115,   117,   119,   121,   128,   130,   133,   135,   137,
     139,   141,   143,   145,   147,   148,   154,   156,   157,   160,
     162,   167,   171,   175,   181,   182,   192,   199,   201,   202,
     210,   212,   213,   214,   227,   229,   233,   235,   236,   240,
     242,   246,   248,   252,   254,   257,   259,   263,   265,   267,
     269,   271,   273,   275,   277,   281,   283,   285,   287,   291,
     293,   295,   297,   299,   301,   304,   308,   313,   318,   324,
     326,   328,   331
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      53,     0,    -1,    -1,    47,    54,    42,    55,     9,    47,
      -1,    -1,    57,    61,    56,    76,    -1,    58,    -1,    -1,
      58,    59,    -1,    59,    -1,    23,    69,    41,    72,    42,
      -1,    23,    69,    41,    73,    42,    -1,    23,    69,    41,
      60,    42,    -1,    48,    -1,    26,    48,    -1,    49,    -1,
      26,    49,    -1,    50,    -1,    26,    50,    -1,    51,    -1,
      22,    -1,    10,    -1,    62,    -1,    -1,    62,    63,    -1,
      63,    -1,    -1,    -1,    47,    43,    66,    64,    44,    70,
      65,    42,    76,     9,    47,    -1,    67,    -1,    -1,    67,
      42,    68,    -1,    68,    -1,    69,    41,    71,    -1,    69,
      40,    47,    -1,    47,    -1,    41,    72,    -1,    -1,    72,
      -1,    73,    -1,    12,    -1,    17,    -1,     5,    -1,    19,
      -1,     3,    74,    21,    74,    14,    71,    -1,    48,    -1,
      26,    48,    -1,    76,    -1,    80,    -1,    82,    -1,    85,
      -1,    88,    -1,    92,    -1,    81,    -1,    -1,    77,     4,
      57,    78,     9,    -1,    79,    -1,    -1,    79,    75,    -1,
      75,    -1,   105,    30,    95,    42,    -1,    15,    95,    42,
      -1,    16,    95,    42,    -1,    47,    43,    93,    44,    42,
      -1,    -1,    13,    84,    20,    78,     8,    83,    78,     9,
      13,    -1,    13,    84,    20,    78,     9,    13,    -1,    95,
      -1,    -1,    24,    87,     7,    78,    86,     9,     7,    -1,
      95,    -1,    -1,    -1,    11,    47,    89,    30,    91,    21,
      91,    90,     7,    78,     9,     7,    -1,    48,    -1,    18,
      95,    42,    -1,    94,    -1,    -1,    94,    40,    95,    -1,
      95,    -1,    95,    38,    96,    -1,    96,    -1,    96,    37,
      97,    -1,    97,    -1,    39,    97,    -1,    98,    -1,   100,
      99,   100,    -1,   100,    -1,    34,    -1,    36,    -1,    31,
      -1,    35,    -1,    33,    -1,    32,    -1,   100,   101,   102,
      -1,   102,    -1,    25,    -1,    26,    -1,   102,   103,   104,
      -1,   104,    -1,    27,    -1,    28,    -1,    29,    -1,   105,
      -1,    26,   105,    -1,    43,    95,    44,    -1,    26,    43,
      95,    44,    -1,    47,    43,    93,    44,    -1,    26,    47,
      43,    93,    44,    -1,    60,    -1,    47,    -1,   105,   106,
      -1,    45,    95,    46,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    85,    85,    84,   120,   120,   134,   135,   138,   139,
     142,   176,   192,   210,   215,   220,   225,   230,   235,   240,
     244,   249,   256,   257,   260,   261,   265,   277,   264,   345,
     346,   349,   354,   357,   364,   369,   372,   373,   375,   376,
     379,   380,   381,   382,   385,   393,   394,   397,   398,   399,
     400,   401,   402,   403,   407,   407,   423,   424,   427,   428,
     431,   593,   700,   768,   809,   806,   819,   827,   836,   835,
     843,   853,   860,   852,   934,   937,   958,   959,   962,   969,
     975,   992,   995,  1013,  1016,  1023,  1026,  1079,  1082,  1083,
    1084,  1085,  1086,  1087,  1090,  1140,  1143,  1144,  1147,  1209,
    1212,  1213,  1214,  1217,  1308,  1396,  1401,  1415,  1461,  1467,
    1516,  1520,  1527
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ARRAY", "BEG", "BOOLEAN", "DEF", "DO",
  "ELSE", "END", "FALSE", "FOR", "INTEGER", "IF", "OF", "PRINT", "READ",
  "REAL", "RETURN", "STRING", "THEN", "TO", "TRUE", "VAR", "WHILE",
  "OP_ADD", "OP_SUB", "OP_MUL", "OP_DIV", "OP_MOD", "OP_ASSIGN", "OP_EQ",
  "OP_NE", "OP_GT", "OP_LT", "OP_GE", "OP_LE", "OP_AND", "OP_OR", "OP_NOT",
  "MK_COMMA", "MK_COLON", "MK_SEMICOLON", "MK_LPAREN", "MK_RPAREN",
  "MK_LB", "MK_RB", "ID", "INT_CONST", "FLOAT_CONST", "SCIENTIFIC",
  "STR_CONST", "$accept", "program", "$@1", "program_body", "$@2",
  "opt_decl_list", "decl_list", "decl", "literal_const",
  "opt_func_decl_list", "func_decl_list", "func_decl", "$@3", "$@4",
  "opt_param_list", "param_list", "param", "id_list", "ret_type", "type",
  "scalar_type", "array_type", "array_index", "stmt", "compound_stmt",
  "$@5", "opt_stmt_list", "stmt_list", "simple_stmt", "proc_call_stmt",
  "cond_stmt", "$@6", "condition", "while_stmt", "$@7", "condition_while",
  "for_stmt", "$@8", "$@9", "loop_param", "return_stmt",
  "opt_boolean_expr_list", "boolean_expr_list", "boolean_expr",
  "boolean_term", "boolean_factor", "relop_expr", "rel_op", "expr",
  "add_op", "term", "mul_op", "factor", "var_ref", "dim", 0
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
     305,   306
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    54,    53,    56,    55,    57,    57,    58,    58,
      59,    59,    59,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    61,    61,    62,    62,    64,    65,    63,    66,
      66,    67,    67,    68,    69,    69,    70,    70,    71,    71,
      72,    72,    72,    72,    73,    74,    74,    75,    75,    75,
      75,    75,    75,    75,    77,    76,    78,    78,    79,    79,
      80,    80,    80,    81,    83,    82,    82,    84,    86,    85,
      87,    89,    90,    88,    91,    92,    93,    93,    94,    94,
      95,    95,    96,    96,    97,    97,    98,    98,    99,    99,
      99,    99,    99,    99,   100,   100,   101,   101,   102,   102,
     103,   103,   103,   104,   104,   104,   104,   104,   104,   104,
     105,   105,   106
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     6,     0,     4,     1,     0,     2,     1,
       5,     5,     5,     1,     2,     1,     2,     1,     2,     1,
       1,     1,     1,     0,     2,     1,     0,     0,    11,     1,
       0,     3,     1,     3,     3,     1,     2,     0,     1,     1,
       1,     1,     1,     1,     6,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     0,     5,     1,     0,     2,     1,
       4,     3,     3,     5,     0,     9,     6,     1,     0,     7,
       1,     0,     0,    12,     1,     3,     1,     0,     3,     1,
       3,     1,     3,     1,     2,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     2,     3,     4,     4,     5,     1,
       1,     2,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     0,     0,     1,     7,     0,     0,    23,     6,
       9,    35,     0,     0,     0,     4,    22,    25,     8,     0,
       0,     3,    30,    54,    24,    34,     0,    42,    21,    40,
      41,    43,    20,     0,    13,    15,    17,    19,     0,     0,
       0,    26,    29,    32,     0,     5,     0,     0,    45,     0,
      14,    16,    18,    12,    10,    11,     0,     0,     0,     7,
      46,     0,    37,    31,    33,    38,    39,    54,     0,     0,
      27,     0,     0,     0,     0,     0,     0,   110,    59,    47,
       0,    56,    48,    53,    49,    50,    51,    52,     0,     0,
      36,     0,    71,     0,     0,     0,   110,   109,     0,    67,
      81,    83,    85,    87,    95,    99,   103,     0,     0,     0,
       0,    70,    77,    55,    58,     0,     0,   111,    44,    54,
       0,     0,   110,   104,    84,     0,    77,    57,     0,     0,
      96,    97,    90,    93,    92,    88,    91,    89,     0,     0,
     100,   101,   102,     0,    61,    62,    75,    54,     0,    76,
      79,     0,     0,     0,     0,     0,    77,   105,     0,     0,
      80,    82,    86,    94,    98,    68,     0,     0,    60,   112,
       0,    74,     0,   106,     0,   107,    64,     0,     0,    63,
      78,    28,     0,   108,    54,    66,     0,    72,     0,    69,
       0,     0,    54,    65,     0,     0,    73
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     7,    23,     8,     9,    10,    97,    15,
      16,    17,    56,    91,    41,    42,    43,    44,    70,    64,
      65,    66,    49,    78,    79,    46,    80,    81,    82,    83,
      84,   184,    98,    85,   178,   110,    86,   120,   190,   172,
      87,   148,   149,   150,   100,   101,   102,   138,   103,   139,
     104,   143,   105,   106,   117
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -126
static const yytype_int16 yypact[] =
{
     -28,  -126,    34,     2,  -126,    38,    16,    64,    22,    38,
    -126,  -126,    10,    35,    46,  -126,    22,  -126,  -126,    44,
       6,  -126,    16,  -126,  -126,  -126,   -13,  -126,  -126,  -126,
    -126,  -126,  -126,    81,  -126,  -126,  -126,  -126,    66,    73,
      76,  -126,    90,  -126,    60,  -126,   119,    96,  -126,   125,
    -126,  -126,  -126,  -126,  -126,  -126,   103,    16,   107,    38,
    -126,   -13,   108,  -126,  -126,  -126,  -126,    98,   136,    59,
    -126,   101,    36,    36,    36,    36,    36,   109,  -126,  -126,
     142,    25,  -126,  -126,  -126,  -126,  -126,  -126,   -15,   107,
    -126,   111,  -126,    45,    36,    36,   113,  -126,   135,   116,
     120,  -126,  -126,   102,   112,  -126,   114,   -21,   -18,    -5,
     151,   116,    36,  -126,  -126,    36,    36,  -126,  -126,  -126,
     130,    36,   118,   114,  -126,    30,    36,    25,    36,    36,
    -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,    55,    55,
    -126,  -126,  -126,    55,  -126,  -126,  -126,    98,   121,   122,
     116,    28,    -7,   154,   123,    52,    36,  -126,   124,   134,
     120,  -126,    95,   112,  -126,  -126,   127,    36,  -126,  -126,
     117,  -126,   145,  -126,   126,  -126,  -126,   159,   158,  -126,
     116,  -126,   123,  -126,    98,  -126,   166,  -126,   165,  -126,
     168,   163,    98,  -126,   169,   170,  -126
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -126,  -126,  -126,  -126,  -126,   128,  -126,   171,   161,  -126,
    -126,   167,  -126,  -126,  -126,  -126,   129,   173,  -126,    93,
     -17,   164,   131,   104,   -22,  -126,  -125,  -126,  -126,  -126,
    -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,     7,
    -126,  -114,  -126,   -68,    62,   -84,  -126,  -126,    50,  -126,
      54,  -126,    48,   -67,  -126
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -58
static const yytype_int16 yytable[] =
{
      88,    45,   159,    39,    99,   107,   108,   109,   111,    26,
     124,    27,   158,    47,    88,   115,    28,   128,    29,     1,
     128,   144,   165,    30,   145,    31,   123,   125,    32,   -54,
     116,   128,    33,   128,     4,    48,    71,   146,    72,   169,
      73,    74,   174,    75,     5,   161,    28,   151,   152,    76,
      19,    20,    90,   155,    34,    35,    36,    37,    32,   188,
      88,     6,    93,    11,    27,    28,   128,   194,   128,    14,
     168,    29,    77,    13,   157,    94,    30,    32,    31,    95,
      88,    93,    21,    96,    34,    35,    36,    37,   121,    22,
     128,    25,   122,    50,    51,    52,   173,   153,    95,   180,
      19,    58,    96,    34,    35,    36,    37,   -57,    53,    71,
      26,    72,    27,    73,    74,    54,    75,    88,    55,    29,
     130,   131,    76,    59,    30,    88,    31,   130,   131,    50,
      51,    52,    57,   132,   133,   134,   135,   136,   137,   140,
     141,   142,   176,   177,    60,    77,    61,    62,    92,    69,
      89,   113,   112,   119,   128,   127,   126,   129,   147,   116,
     154,   156,   167,   170,   181,   166,   182,   186,   175,   179,
     183,   171,   185,   189,   191,   192,   193,   196,   195,    12,
      18,    38,   118,    24,    40,   114,    63,    67,   162,   187,
     160,   164,    68,   163
};

static const yytype_uint8 yycheck[] =
{
      67,    23,   127,    20,    72,    73,    74,    75,    76,     3,
      94,     5,   126,    26,    81,    30,    10,    38,    12,    47,
      38,    42,   147,    17,    42,    19,    93,    95,    22,     4,
      45,    38,    26,    38,     0,    48,    11,    42,    13,    46,
      15,    16,   156,    18,    42,   129,    10,   115,   116,    24,
      40,    41,    69,   121,    48,    49,    50,    51,    22,   184,
     127,    23,    26,    47,     5,    10,    38,   192,    38,    47,
      42,    12,    47,     9,    44,    39,    17,    22,    19,    43,
     147,    26,    47,    47,    48,    49,    50,    51,    43,    43,
      38,    47,    47,    48,    49,    50,    44,   119,    43,   167,
      40,    41,    47,    48,    49,    50,    51,     9,    42,    11,
       3,    13,     5,    15,    16,    42,    18,   184,    42,    12,
      25,    26,    24,     4,    17,   192,    19,    25,    26,    48,
      49,    50,    42,    31,    32,    33,    34,    35,    36,    27,
      28,    29,     8,     9,    48,    47,    21,    44,    47,    41,
      14,     9,    43,    42,    38,    20,    43,    37,     7,    45,
      30,    43,    40,     9,    47,    44,    21,     9,    44,    42,
      44,    48,    13,     7,     9,     7,    13,     7,     9,     6,
       9,    20,    89,    16,    20,    81,    57,    59,   138,   182,
     128,   143,    61,   139
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    47,    53,    54,     0,    42,    23,    55,    57,    58,
      59,    47,    69,     9,    47,    61,    62,    63,    59,    40,
      41,    47,    43,    56,    63,    47,     3,     5,    10,    12,
      17,    19,    22,    26,    48,    49,    50,    51,    60,    72,
      73,    66,    67,    68,    69,    76,    77,    26,    48,    74,
      48,    49,    50,    42,    42,    42,    64,    42,    41,     4,
      48,    21,    44,    68,    71,    72,    73,    57,    74,    41,
      70,    11,    13,    15,    16,    18,    24,    47,    75,    76,
      78,    79,    80,    81,    82,    85,    88,    92,   105,    14,
      72,    65,    47,    26,    39,    43,    47,    60,    84,    95,
      96,    97,    98,   100,   102,   104,   105,    95,    95,    95,
      87,    95,    43,     9,    75,    30,    45,   106,    71,    42,
      89,    43,    47,   105,    97,    95,    43,    20,    38,    37,
      25,    26,    31,    32,    33,    34,    35,    36,    99,   101,
      27,    28,    29,   103,    42,    42,    42,     7,    93,    94,
      95,    95,    95,    76,    30,    95,    43,    44,    93,    78,
      96,    97,   100,   102,   104,    78,    44,    40,    42,    46,
       9,    48,    91,    44,    93,    44,     8,     9,    86,    42,
      95,    47,    21,    44,    83,    13,     9,    91,    78,     7,
      90,     9,     7,    13,    78,     9,     7
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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
        case 2:

    {
				char b[30];
				strcat(b,fileName);
				strcat(b,".j");
				out=fopen(b,"w");
		//	if(ExprStack[StackCount]==NULL)ExprStack[StackCount]=(char*)malloc(sizeof(char)*10000);
			  struct PType *pType = createPType( VOID_t );
			  struct SymNode *newNode = createProgramNode( (yyvsp[(1) - (1)].lexeme), scope, pType );
			  insertTab( symbolTable, newNode );
			  
			  if( strcmp(fileName,(yyvsp[(1) - (1)].lexeme)) ) {
				fprintf( stdout, "<Error> found in Line %d: program beginning ID inconsist with file name  \n", linenum );
			  }
			  fprintf(out,"; %s.j \n",(yyvsp[(1) - (1)].lexeme));
			  fprintf(out,".class public %s \n",(yyvsp[(1) - (1)].lexeme));
			  fprintf(out,".super java/lang/Object\n");
			  fprintf(out,".field public static _sc Ljava/util/Scanner;\n");

			}
    break;

  case 3:

    {
			  if( strcmp((yyvsp[(1) - (6)].lexeme), (yyvsp[(6) - (6)].lexeme)) ) { fprintf( stdout, "<Error> found in Line %d: %s", linenum,"Program end ID inconsist with the beginning ID  \n"); }
			  if( strcmp(fileName,(yyvsp[(6) - (6)].lexeme)) ) {
				 fprintf( stdout, "<Error> found in Line %d: program end ID inconsist with file name  \n", linenum );
			  }
			  // dump symbol table
			  if( Opt_D == 1 )
				printSymTable( symbolTable, scope );
				fprintf(out,"return \n\
.end method");
			}
    break;

  case 4:

    {
fprintf(out,".method public static main([Ljava/lang/String;)V\n\
.limit stack 100\n\
.limit locals 100 \n\
new java/util/Scanner \n\
dup \n\
getstatic java/lang/System/in Ljava/io/InputStream; \n\
invokespecial java/util/Scanner/<init>(Ljava/io/InputStream;)V \n\
putstatic %s/_sc Ljava/util/Scanner; \n ",fileName);
								
								}
    break;

  case 10:

    {
			  // insert into symbol table
			  struct idNode_sem *ptr;
			  struct SymNode *newNode;
			  for( ptr=(yyvsp[(2) - (5)].id) ; ptr!=0 ; ptr=(ptr->next) ) {
			  	if( verifyRedeclaration( symbolTable, ptr->value, scope ) ==__FALSE ) { }
				else {
					newNode = createVarNode( ptr->value, scope, (yyvsp[(4) - (5)].ptype) );
					insertTab( symbolTable, newNode );
					//fprintf(out,"[%d haha]\n",scope);
					if(scope==0)
					{
							if((yyvsp[(4) - (5)].ptype)->type==INTEGER_t)
										{fprintf(out,".field public static %s I\n",ptr->value);}
						else if(BOOLEAN_t==(yyvsp[(4) - (5)].ptype)->type)
										{fprintf(out,".field public static %s Z\n",ptr->value);}
						else if(REAL_t==(yyvsp[(4) - (5)].ptype)->type)
										{fprintf(out,".field public static %s F\n",ptr->value);}
					}
					else
					{
					//	fprintf(stdout,"[local %s]",ptr->value);
						LocalItem[++LocalCount]=(char*)calloc(40,sizeof(char));
						//for(int i=0;i<1000;i++)tmp[i]=0;
						ItemScope[LocalCount]=scope;
						ItemType[LocalCount]=(yyvsp[(4) - (5)].ptype)->type;
						strcpy(LocalItem[LocalCount],ptr->value);
						//fprintf(stdout,"[%d\t%s]\n",LocalCount,LocalItem[LocalCount-1]);
					}
				}
			  }
			  deleteIdList( (yyvsp[(2) - (5)].id) );
			}
    break;

  case 11:

    {
			  verifyArrayType( (yyvsp[(2) - (5)].id), (yyvsp[(4) - (5)].ptype) );
			  // insert into symbol table
			  struct idNode_sem *ptr;
			  struct SymNode *newNode;
			  for( ptr=(yyvsp[(2) - (5)].id) ; ptr!=0 ; ptr=(ptr->next) ) {
			  	if( (yyvsp[(4) - (5)].ptype)->isError == __TRUE ) { }
				else if( verifyRedeclaration( symbolTable, ptr->value, scope ) ==__FALSE ) { }
				else {
					newNode = createVarNode( ptr->value, scope, (yyvsp[(4) - (5)].ptype) );
					insertTab( symbolTable, newNode );
				}
			  }
			  deleteIdList( (yyvsp[(2) - (5)].id) );
			}
    break;

  case 12:

    {
			  struct PType *pType = createPType( (yyvsp[(4) - (5)].constVal)->category );
			  // insert constants into symbol table
			  struct idNode_sem *ptr;
			  struct SymNode *newNode;
			  for( ptr=(yyvsp[(2) - (5)].id) ; ptr!=0 ; ptr=(ptr->next) ) {
			  	if( verifyRedeclaration( symbolTable, ptr->value, scope ) ==__FALSE ) { }
				else {
					newNode = createConstNode( ptr->value, scope, pType, (yyvsp[(4) - (5)].constVal) );
					insertTab( symbolTable, newNode );
				}
			  }
			  
			  deleteIdList( (yyvsp[(2) - (5)].id) );
			}
    break;

  case 13:

    {
			  int tmp = (yyvsp[(1) - (1)].intVal);
			  (yyval.constVal) = createConstAttr( INTEGER_t, &tmp );
			}
    break;

  case 14:

    {
			  int tmp = -(yyvsp[(2) - (2)].intVal);
			  (yyval.constVal) = createConstAttr( INTEGER_t, &tmp );
			}
    break;

  case 15:

    {
			  float tmp = (yyvsp[(1) - (1)].realVal);
			  (yyval.constVal) = createConstAttr( REAL_t, &tmp );
			}
    break;

  case 16:

    {
			  float tmp = -(yyvsp[(2) - (2)].realVal);
			  (yyval.constVal) = createConstAttr( REAL_t, &tmp );
			}
    break;

  case 17:

    {
			  float tmp = (yyvsp[(1) - (1)].realVal);
			  (yyval.constVal) = createConstAttr( REAL_t, &tmp );
			}
    break;

  case 18:

    {
			  float tmp = -(yyvsp[(2) - (2)].realVal);
			  (yyval.constVal) = createConstAttr( REAL_t, &tmp );
			}
    break;

  case 19:

    {
			  (yyval.constVal) = createConstAttr( STRING_t, (yyvsp[(1) - (1)].lexeme) );
			}
    break;

  case 20:

    {
			  SEMTYPE tmp = __TRUE;
			  (yyval.constVal) = createConstAttr( BOOLEAN_t, &tmp );
			}
    break;

  case 21:

    {
			  SEMTYPE tmp = __FALSE;
			  (yyval.constVal) = createConstAttr( BOOLEAN_t, &tmp );
			}
    break;

  case 26:

    {
			  // check and insert parameters into symbol table
			  paramError = insertParamIntoSymTable( symbolTable, (yyvsp[(3) - (3)].par), scope+1 );
			  //fprintf(out,"");
			  								/*struct idNode_sem*ptr;
											for(ptr=$1;ptr->next!=NULL;ptr=ptr->next)
											{
												LocalItem[++LocalCount]=(char*)calloc(40,sizeof(char));
												ItemScope[LocalCount]=scope;
											}*/
			}
    break;

  case 27:

    {
			  // check and insert function into symbol table
			  if( paramError == __TRUE ) {
			  	printf("--- param(s) with several fault!! ---\n");
			  } else {
				insertFuncIntoSymTable( symbolTable, (yyvsp[(1) - (6)].lexeme), (yyvsp[(3) - (6)].par), (yyvsp[(6) - (6)].ptype), scope );
			  }
			  funcReturn = (yyvsp[(6) - (6)].ptype);
				fprintf(out,".method public static %s(",(yyvsp[(1) - (6)].lexeme));
				char*ptmp=calloc(100,sizeof(char));
				//strcat(ptmp);
				struct param_sem* list;
				//fprintf(out,"[: )]\n");fflush(out);
				for(list=(yyvsp[(3) - (6)].par);list!=NULL;list=list->next)
				{
				//fprintf(out,"[! %d]",list->pType->type);fflush(out);
					struct idNode_sem*ptr;
					for(ptr=list->idlist;ptr!=NULL;ptr=ptr->next)
					{
						if(LocalCount==0)LocalCount=-1;
						LocalItem[++LocalCount]=(char*)calloc(40,sizeof(char));
						ItemScope[LocalCount]=scope;
						strcpy(LocalItem[LocalCount],ptr->value);
						//fprintf(out,"[inhere %d]\n",list->pType->type);fflush(out);
						switch(list->pType->type)
						{
							case INTEGER_t: fprintf(out,"I"); break;
							case BOOLEAN_t: fprintf(out,"Z"); break;
							case REAL_t:    fprintf(out,"F"); break;
							//default:	fprintf(out,"?");
						}
					}		
				}
				fprintf(out,")");
				char rettp;
				switch((yyvsp[(6) - (6)].ptype)->type)
				{
							case INTEGER_t: fprintf(out,"I\n"); break;
							case BOOLEAN_t: fprintf(out,"Z\n"); break;
							case REAL_t:    fprintf(out,"F\n"); break;
							case VOID_t:	fprintf(out,"V\n"); break;				
				
				}
			  
			   fprintf(out,".limit stack 100\n");
			   fprintf(out,".limit locals 100\n"); 
 
			}
    break;

  case 28:

    {
			  if( strcmp((yyvsp[(1) - (11)].lexeme),(yyvsp[(11) - (11)].lexeme)) ) {
				fprintf( stdout, "<Error> found in Line %d: the end of the functionName mismatch  \n", linenum );
			  }
			  funcReturn = 0;
			  	switch((yyvsp[(6) - (11)].ptype)->type)
				{
							case INTEGER_t: fprintf(out,"ireturn \n"); break;
							case BOOLEAN_t: fprintf(out,"ireturn \n"); break;
							case REAL_t:    fprintf(out,"freturn \n"); break;
							case VOID_t:	fprintf(out,"return \n"); break;				
				
				}
			  fprintf(out,".end method \n");
			}
    break;

  case 29:

    { (yyval.par) = (yyvsp[(1) - (1)].par); }
    break;

  case 30:

    { (yyval.par) = 0; }
    break;

  case 31:

    {
			  param_sem_addParam( (yyvsp[(1) - (3)].par), (yyvsp[(3) - (3)].par) );
			  (yyval.par) = (yyvsp[(1) - (3)].par);
			}
    break;

  case 32:

    { (yyval.par) = (yyvsp[(1) - (1)].par); }
    break;

  case 33:

    { (yyval.par) = createParam( (yyvsp[(1) - (3)].id), (yyvsp[(3) - (3)].ptype) ); 
											
											
											
										}
    break;

  case 34:

    {
			  idlist_addNode( (yyvsp[(1) - (3)].id), (yyvsp[(3) - (3)].lexeme) );
			  (yyval.id) = (yyvsp[(1) - (3)].id);
			}
    break;

  case 35:

    { (yyval.id) = createIdList((yyvsp[(1) - (1)].lexeme)); }
    break;

  case 36:

    { (yyval.ptype) = (yyvsp[(2) - (2)].ptype); }
    break;

  case 37:

    { (yyval.ptype) = createPType( VOID_t ); }
    break;

  case 38:

    { (yyval.ptype) = (yyvsp[(1) - (1)].ptype); }
    break;

  case 39:

    { (yyval.ptype) = (yyvsp[(1) - (1)].ptype); }
    break;

  case 40:

    { (yyval.ptype) = createPType( INTEGER_t ); }
    break;

  case 41:

    { (yyval.ptype) = createPType( REAL_t ); }
    break;

  case 42:

    { (yyval.ptype) = createPType( BOOLEAN_t ); }
    break;

  case 43:

    { (yyval.ptype) = createPType( STRING_t ); }
    break;

  case 44:

    {
				verifyArrayDim( (yyvsp[(6) - (6)].ptype), (yyvsp[(2) - (6)].intVal), (yyvsp[(4) - (6)].intVal) );
				increaseArrayDim( (yyvsp[(6) - (6)].ptype), (yyvsp[(2) - (6)].intVal), (yyvsp[(4) - (6)].intVal) );
				(yyval.ptype) = (yyvsp[(6) - (6)].ptype);
			}
    break;

  case 45:

    { (yyval.intVal) = (yyvsp[(1) - (1)].intVal); }
    break;

  case 46:

    { (yyval.intVal) = -(yyvsp[(2) - (2)].intVal); }
    break;

  case 54:

    { 
			  scope++;
			}
    break;

  case 55:

    { 
			  // print contents of current scope
			  if( Opt_D == 1 )
			  	printSymTable( symbolTable, scope );
			  deleteScope( symbolTable, scope );	// leave this scope, delete...
			  scope--; 
			}
    break;

  case 60:

    {
			  // check if LHS exists
			  __BOOLEAN flagLHS = verifyExistence( symbolTable, (yyvsp[(1) - (4)].exprs), scope, __TRUE );
			  // id RHS is not dereferenced, check and deference
			  __BOOLEAN flagRHS = __TRUE;
			  if( (yyvsp[(3) - (4)].exprs)->isDeref == __FALSE ) {
				//flagRHS = verifyExistence( symbolTable, $3, scope, __FALSE );
				flagRHS = verifyAndDerefenced( symbolTable, (yyvsp[(3) - (4)].exprs), scope, __FALSE );	
			  }
			  // if both LHS and RHS are exists, verify their type
			  if( flagLHS==__TRUE && flagRHS==__TRUE )
				verifyAssignmentTypeMatch( (yyvsp[(1) - (4)].exprs), (yyvsp[(3) - (4)].exprs) );
				fprintf(out,"%s",ExprStack[--StackCount]);
				superfree(&ExprStack[StackCount]);
			 /* if($3->varRef!=0)
			  {
			  //fprintf(out,"[haha]\n");fflush(out);
			  		struct expr_sem*v=$3;
					int shoot=0;
					struct SymNode*glo=0;
					if(glo=lookupSymbol(symbolTable, v->varRef->id, 0, __TRUE ),glo!=0)
					{
						//fprintf(out,"typ=%d  %s\n",glo->type->type,glo->name);fflush(out);
						if(glo->type->type==INTEGER_t)
 						{
 							fprintf(out,"getstatic %s/%s I\n",fileName,glo->name);
																	
 						}
 						else if(glo->type->type==BOOLEAN_t)
 						{
 							fprintf(out,"getstatic %s/%s I\n",fileName,glo->name);
																
 						}
 						else if(glo->type->type==REAL_t)
 						{
							fprintf(out,"getstatic %s/%s F\n",fileName,glo->name);
 						}								
 					}
 					else
 					{
 						for(i=LocalCount;i>0;i--)
 						{
 								
 								if(v->varRef!=0 && v->varRef->id!=0 && ItemScope[i]<=scope && strcmp(v->varRef->id,LocalItem[i])==0)
 								{
 									shoot=i;
 									break;
 								}
 						}
 						
 						if(shoot!=0)
 						{
 							if(v->pType->type==INTEGER_t)
 							{
 								fprintf(out,"iload %d\n",shoot);
 							}	
 								else if(v->pType->type==BOOLEAN_t)
 							{
 								fprintf(out,"iload %d\n",shoot);
																
 							}
 							else if(v->pType->type==REAL_t)
 							{
									fprintf(out,"fload %d\n",shoot);
 																
 							}			
						}	
					}

			  
			  }
			  else
			  {

														//fprintf(out,";[const]\n");fflush(out);
						if($3->pType->type==STRING_t)
						{
															//fprintf(stdout,"[%d]",$2->pType->type);
							fprintf(out,"ldc \"%s\"\n",$3->pType->strv);
							//fprintf(out,"invokevirtual java/io/PrintStream/print(Ljava/lang/String;)V \n");
						}
						else if($3->pType->type==INTEGER_t)
						{
							fprintf(out,"ldc %d\n",$3->pType->value);
							//fprintf(out,"invokevirtual java/io/PrintStream/print(I)V \n");	
						}
						else if($3->pType->type==BOOLEAN_t)
						{
							if($3->pType->value.booleanVal ==__TRUE)
							{
								fprintf(out,"iconst_1\n");
							}
							else
							{
								fprintf(out,"iconst_0\n");
							}
							//fprintf(out,"ldc %d\n",$2->pType->value);
							//fprintf(out,"invokevirtual java/io/PrintStream/print(Z)V \n");
						}
						else if($3->pType->type==REAL_t)
 						{
							fprintf(out,"ldc %f\n",$3->pType->value);
 							//fprintf(out,"invokevirtual java/io/PrintStream/print(F)V \n");
 						}
			  }*/
			  
			  
			  
					struct expr_sem*v=(yyvsp[(1) - (4)].exprs);
					int shoot=-1;
 					for(i=LocalCount;i>=0;i--)
 					{
 							if( LocalItem[i]!=0 &&ItemScope[i]<=scope && strcmp(v->varRef->id,LocalItem[i])==0)
 							{
 								shoot=i;
 								break;
 							}

 					}
 					if(shoot!=-1)
 					{
 						if(v->pType->type==INTEGER_t)
 						{
 							fprintf(out,"istore %d\n",shoot);
 						}	
 						else if(v->pType->type==BOOLEAN_t)
 						{
 							fprintf(out,"istore %d\n",shoot);
															
 						}
 						else if(v->pType->type==REAL_t)
 						{
								fprintf(out,"fstore %d\n",shoot);
 															
 						}
 															//fprintf(out,";[finish]\n");fflush(out);
					}	
					else
					{
						struct SymNode*glo;
						if(glo=lookupSymbol(symbolTable, v->varRef->id, 0, __TRUE ),glo!=0)
						{
							if(glo->type->type==INTEGER_t)
 							{
 								fprintf(out,"putstatic %s/%s I\n",fileName,glo->name);
 																	
 							}
 							else if(glo->type->type==BOOLEAN_t)
 							{
 								fprintf(out,"putstatic %s/%s I\n",fileName,glo->name);
																	
 							}
 							else if(glo->type->type==REAL_t)
 							{
								fprintf(out,"putstatic %s/%s F\n",fileName,glo->name);
 							}				
 							//fprintf(stdout,"glo=%d\n",glo->category);					
 						}
					}										
				//	superfree(&ExprStack[--StackCount]);
			}
    break;

  case 61:

    { verifyScalarExpr( (yyvsp[(2) - (3)].exprs), "print" ); 
												//struct expr_sem *expr=$2;
												//fprintf(out,";[vref= %s]",)
												dumpEStack("print");
												fprintf(out,"getstatic java/lang/System/out Ljava/io/PrintStream; \n");
												fprintf(out,"%s",ExprStack[--StackCount]);
												superfree(&ExprStack[StackCount]);
												switch((yyvsp[(2) - (3)].exprs)->pType->type)
												{
													case STRING_t:
														fprintf(out,"invokevirtual java/io/PrintStream/print(Ljava/lang/String;)V \n");	break;
													case INTEGER_t:
														fprintf(out,"invokevirtual java/io/PrintStream/print(I)V \n");	break;
													case BOOLEAN_t:
														fprintf(out,"invokevirtual java/io/PrintStream/print(Z)V \n");	break;
													case REAL_t:
														fprintf(out,"invokevirtual java/io/PrintStream/print(F)V \n");	break;
							
												}
													/*if($2->varRef==NULL)
													{
														//fprintf(out,";[const]\n");fflush(out);
														if($2->pType->type==STRING_t)
														{
															//fprintf(stdout,"[%d]",$2->pType->type);
															fprintf(out,"ldc \"%s\"\n",$2->pType->strv);
															fprintf(out,"invokevirtual java/io/PrintStream/print(Ljava/lang/String;)V \n");
														}
														else if($2->pType->type==INTEGER_t)
														{
															fprintf(out,"ldc %d\n",$2->pType->value);
															fprintf(out,"invokevirtual java/io/PrintStream/print(I)V \n");	
														}
														else if($2->pType->type==BOOLEAN_t)
														{
															fprintf(out,"ldc %d\n",$2->pType->value);
															fprintf(out,"invokevirtual java/io/PrintStream/print(Z)V \n");
														}
														else if($2->pType->type==REAL_t)
 														{
															fprintf(out,"ldc %f\n",$2->pType->value);
 															fprintf(out,"invokevirtual java/io/PrintStream/print(F)V \n");
 														}
													}
													
													
													else
													{
			
														//fprintf(out,";[local]\n");fflush(out);
														int shoot=0;
 														for(i=LocalCount;i>0;i--)
 														{
 															if(ItemScope[i]<=scope && strcmp($2->varRef->id,LocalItem[i])==0)
 															{
 																shoot=i;
 																break;
 															}	
 															else
 															{
 																//fprintf(out,";[not match! %s\t%s]\n",$2->varRef->id,LocalItem[i]);fflush(out);
 															}
 														}
 														if(shoot!=0)
 														{
 															if($2->pType->type==INTEGER_t)
 															{
 																fprintf(out,"iload %d\n",shoot);
 																fprintf(out,"invokevirtual java/io/PrintStream/print(I)V \n");
 															}
 															else if($2->pType->type==BOOLEAN_t)
 															{
 																fprintf(out,"iload %d\n",shoot);
																fprintf(out,"invokevirtual java/io/PrintStream/print(Z)V \n");
 															}
 															else if($2->pType->type==REAL_t)
 															{
																fprintf(out,"fload %d\n",shoot);
 																fprintf(out,"invokevirtual java/io/PrintStream/print(F)V \n");
 															}
 															//fprintf(out,";[finish]\n");fflush(out);
														}	
														else
														{
															struct SymNode*glo;
															if(glo=lookupSymbol(symbolTable, $2->varRef->id, 0, __TRUE ),glo!=0)
															{
																if(glo->type->type==INTEGER_t)
 																{
 																	fprintf(out,"getstatic %s/%s I\n",fileName,glo->name);
 																	fprintf(out,"invokevirtual java/io/PrintStream/print(I)V \n");
 																}
 																else if(glo->type->type==BOOLEAN_t)
 																{
 																	fprintf(out,"getstatic %s/%s I\n",fileName,glo->name);
																	fprintf(out,"invokevirtual java/io/PrintStream/print(Z)V \n");
 																}
 																else if(glo->type->type==REAL_t)
 																{
																	fprintf(out,"getstatic %s/%s F\n",fileName,glo->name);
 																	fprintf(out,"invokevirtual java/io/PrintStream/print(F)V \n");
 																}
															}
														}											
													}*/
												
												}
    break;

  case 62:

    { verifyScalarExpr( (yyvsp[(2) - (3)].exprs), "read" ); 
 												dumpEStack("read");
 												int shoot=-1;
 												for(i=LocalCount;i>=0;i--)
 												{
 													if(LocalItem[i]!=0 && ItemScope[i]<=scope && strcmp((yyvsp[(2) - (3)].exprs)->varRef->id,LocalItem[i])==0)
 													{
 														shoot=i;
 														break;
 													}
 												
 												}
 													fprintf(out,"; invoke java.util.Scanner.nextXXX() \n");
													fprintf(out,"getstatic %s/_sc Ljava/util/Scanner; \n",fileName);
													//fprintf(out,"beforepass! %d\n",StackCount);fflush(out);
													superfree(&ExprStack[--StackCount]);
	
													//fprintf(out,"pass! %d\n",StackCount);fflush(out);
 												if(shoot==-1)
 												{
 													struct SymNode*glo;
													if(glo=lookupSymbol(symbolTable, (yyvsp[(2) - (3)].exprs)->varRef->id, 0, __TRUE ),glo!=0)
													{
														if(glo->type->type==INTEGER_t)
 														{
 															fprintf(out,"invokevirtual java/util/Scanner/nextInt()I\n");
 															fprintf(out,"putstatic %s/%s I\n",fileName,glo->name);
 																	
 														}
 														else if(glo->type->type==BOOLEAN_t)
 														{
 															fprintf(out,"invokevirtual java/util/Scanner/nextBoolean()Z\n");
 															fprintf(out,"putstatic %s/%s I\n",fileName,glo->name);
																	
 														}
 														else if(glo->type->type==REAL_t)
 														{
 															fprintf(out,"invokevirtual java/util/Scanner/nextFloat()F \n");
															fprintf(out,"putstatic %s/%s F\n",fileName,glo->name);
 														}				
 														//fprintf(stdout,"glo=%d\n",glo->category);					
 													}
 												}
 												else
 												{

 													if((yyvsp[(2) - (3)].exprs)->pType->type==INTEGER_t)
 													{
 														fprintf(out,"invokevirtual java/util/Scanner/nextInt()I\n");
 														fprintf(out,"istore %d\n",shoot);
 													}
 													else if((yyvsp[(2) - (3)].exprs)->pType->type==BOOLEAN_t)
 													{
 														fprintf(out,"invokevirtual java/util/Scanner/nextBoolean()Z\n");
														fprintf(out,"istore %d\n",shoot);
 													}
 													else if((yyvsp[(2) - (3)].exprs)->pType->type==REAL_t)
 													{
 														fprintf(out,"invokevirtual java/util/Scanner/nextFloat()F \n");
 														fprintf(out,"fstore %d\n",shoot);
 													}
 													
 												}
 												
 												dumpEStack("endread");
 												}
    break;

  case 63:

    {
			struct expr_sem*ret;
			  ret=verifyFuncInvoke( (yyvsp[(1) - (5)].lexeme), (yyvsp[(3) - (5)].exprs), symbolTable, scope );

				int count=0;
				 struct expr_sem*ha;
				for(ha=(yyvsp[(3) - (5)].exprs);ha!=NULL;ha=ha->next)count++;
				
				for(i=count;i>0;i--)
				{
					fprintf(out,"%s",ExprStack[StackCount-i]);
					superfree(&ExprStack[StackCount-i]);
				}
				StackCount-=count;
				
				fprintf(out,"invokestatic %s/%s(",fileName,(yyvsp[(1) - (5)].lexeme));
				struct expr_sem*t;
				for(t=(yyvsp[(3) - (5)].exprs);t!=NULL;t=t->next)
				{
					switch(t->pType->type)
						{
							case INTEGER_t: fprintf(out,"I"); break;
							case BOOLEAN_t: fprintf(out,"Z"); break;
							case REAL_t:    fprintf(out,"F"); break;
							//default:	fprintf(out,"?");
						}
				}
				switch(ret->pType->type)
						{
							case INTEGER_t: fprintf(out,")I\n"); break;
							case BOOLEAN_t: fprintf(out,")Z\n"); break;
							case REAL_t:    fprintf(out,")F\n"); break;
							case VOID_t:    fprintf(out,")V\n"); break;
						}
			}
    break;

  case 64:

    {
			  	fprintf(out,"goto Lexit_%d\n",lC[lCtop]);
			  	fprintf(out,"Lfalse_%d:\n",lC[lCtop]);
			  }
    break;

  case 65:

    {
			  		fprintf(out,"Lexit_%d:\n",lC[lCtop]);
			  		lCtop--;
			  }
    break;

  case 66:

    {								  		
		  		fprintf(out,"Lfalse_%d:\n",lC[lCtop]);
			  			lCtop--;	  		
			}
    break;

  case 67:

    { verifyBooleanExpr( (yyvsp[(1) - (1)].exprs), "if" ); 
								lC[++lCtop]=lCount++;
								fprintf(out,"%s",ExprStack[--StackCount]);
								fprintf(out,"ifeq Lfalse_%d\n",lC[lCtop]);								
								superfree(&ExprStack[StackCount]);
								}
    break;

  case 68:

    {
			  		fprintf(out,"goto Lbegin_%d \n Lexit_%d:\n",lC[lCtop],lC[lCtop]);
			  		lCtop--;
			  		}
    break;

  case 70:

    { verifyBooleanExpr( (yyvsp[(1) - (1)].exprs), "while" ); 
									lC[++lCtop]=lCount++;
									fprintf(out,"Lbegin_%d:\n",lC[lCtop]);  
									fprintf(out,"%s",ExprStack[--StackCount]);
									superfree(&ExprStack[StackCount]);
									fprintf(out,"ifeq Lexit_%d\n",lC[lCtop]);
									}
    break;

  case 71:

    { 
			  insertLoopVarIntoTable( symbolTable, (yyvsp[(2) - (2)].lexeme) );
			  LocalItem[++LocalCount]=(char*)calloc(40,sizeof(char));
			  ItemScope[LocalCount]=scope;
			  strcpy(LocalItem[LocalCount],(yyvsp[(2) - (2)].lexeme));
			}
    break;

  case 72:

    {
			  verifyLoopParam( (yyvsp[(5) - (7)].intVal), (yyvsp[(7) - (7)].intVal) );
			  lC[++lCtop]=lCount++;
			  fprintf(out,"ldc %d\n",(yyvsp[(5) - (7)].intVal));
			  int shoot=-1;
			   			for(i=LocalCount;i>=0;i--)
 						{
 								
 								if( LocalItem[i]!=0 && ItemScope[i]==scope && strcmp((yyvsp[(2) - (7)].lexeme),LocalItem[i])==0)
 								{
 									shoot=i;
 									break;
 								}
 						}
 						
 						if(shoot!=-1)
 						{

 								fprintf(out,"istore %d\n",shoot);														
						}
				//lC[lCtop]
				fprintf(out,"Lbegin_%d:\n",lC[lCtop]);
						if(shoot!=-1)
 						{

 								fprintf(out,"iload %d\n",shoot); 															
						}
/*
	ifle Ltrue_4 
	iconst_0 
	goto Lfalse_4 
Ltrue_4: 
	iconst_1 
Lfalse_4: 
	ifeq Lexit_3 
*/
				fprintf(out,"i2f\n");
				fprintf(out,"ldc %d\n",(yyvsp[(7) - (7)].intVal));
				fprintf(out,"i2f\n");
				fprintf(out,"fcmpl\n");
			  	fprintf(out,"ifle Ltrue_%d\n",lC[lCtop]);
			  	fprintf(out,"iconst_0 \n");
			  	fprintf(out,"goto Lfalse_%d\n",lC[lCtop]);
			  	fprintf(out,"Ltrue_%d:\n",lC[lCtop]);
			  	fprintf(out,"iconst_1\n",lC[lCtop]);
			  	fprintf(out,"Lfalse_%d:\n",lC[lCtop]);
			  	fprintf(out,"ifeq Lexit_%d\n",lC[lCtop]);
			}
    break;

  case 73:

    {
			  popLoopVar( symbolTable );
			  			int shoot=-1;
			  			  for(i=LocalCount;i>=0;i--)
 						{
 								
 								if( LocalItem[i]!=0 &&ItemScope[i]==scope && strcmp((yyvsp[(2) - (12)].lexeme),LocalItem[i])==0)
 								{
 									shoot=i;
 									break;
 								}
 						}
 						if(shoot!=-1)fprintf(out,"iload %d\n",shoot);
 						fprintf(out,"ldc 1\n");
 						fprintf(out,"iadd\n");
 						fprintf(out,"istore %d\n",shoot);
 						fprintf(out,"goto Lbegin_%d\n",lC[lCtop]);
 						fprintf(out,"Lexit_%d:\n",lC[lCtop]);
 						lCtop--;

			}
    break;

  case 74:

    { (yyval.intVal) = (yyvsp[(1) - (1)].intVal); }
    break;

  case 75:

    {
			  verifyReturnStatement( (yyvsp[(2) - (3)].exprs), funcReturn );
			  fprintf(out,"%s",ExprStack[--StackCount]);
			  superfree(&ExprStack[StackCount]);
			  switch((yyvsp[(2) - (3)].exprs)->pType->type)
			  {
			  
			  	case INTEGER_t:
			  		fprintf(out,"ireturn\n");
			  		break;
			  	case BOOLEAN_t:
			  		fprintf(out,"ireturn\n");
			  		break;
			  	case REAL_t:
			  		fprintf(out,"freturn\n");
			  		break;
			  }
			}
    break;

  case 76:

    { (yyval.exprs) = (yyvsp[(1) - (1)].exprs); }
    break;

  case 77:

    { (yyval.exprs) = 0; }
    break;

  case 78:

    {
			  struct expr_sem *exprPtr;
			  for( exprPtr=(yyvsp[(1) - (3)].exprs) ; (exprPtr->next)!=0 ; exprPtr=(exprPtr->next) );
			  exprPtr->next = (yyvsp[(3) - (3)].exprs);
			  (yyval.exprs) = (yyvsp[(1) - (3)].exprs);
			}
    break;

  case 79:

    {
			  (yyval.exprs) = (yyvsp[(1) - (1)].exprs);
			}
    break;

  case 80:

    {
			  verifyAndOrOp( (yyvsp[(1) - (3)].exprs), OR_t, (yyvsp[(3) - (3)].exprs) );
			  (yyval.exprs) = (yyvsp[(1) - (3)].exprs);
			  	char* tmp=(char*)calloc(1000,sizeof(char));
				int ChangeType=0;

				strcat(tmp,ExprStack[StackCount-2]);

				strcat(tmp,ExprStack[StackCount-1]);

				strcat(tmp,"ior\n");
				superfree(&ExprStack[--StackCount]);
				superfree(&ExprStack[--StackCount]);
				ExprStack[StackCount]=tmp;
				StackCount++;
			}
    break;

  case 81:

    { (yyval.exprs) = (yyvsp[(1) - (1)].exprs); }
    break;

  case 82:

    {
			  verifyAndOrOp( (yyvsp[(1) - (3)].exprs), AND_t, (yyvsp[(3) - (3)].exprs) );
			  (yyval.exprs) = (yyvsp[(1) - (3)].exprs);
				char* tmp=(char*)calloc(1000,sizeof(char));
				int ChangeType=0;

				strcat(tmp,ExprStack[StackCount-2]);

				strcat(tmp,ExprStack[StackCount-1]);

				strcat(tmp,"iand\n");
				superfree(&ExprStack[--StackCount]);
				superfree(&ExprStack[--StackCount]);
				ExprStack[StackCount]=tmp;
				StackCount++;
			  
			}
    break;

  case 83:

    { (yyval.exprs) = (yyvsp[(1) - (1)].exprs); }
    break;

  case 84:

    {
			  verifyUnaryNOT( (yyvsp[(2) - (2)].exprs) );
			  (yyval.exprs) = (yyvsp[(2) - (2)].exprs);
			  strcat(ExprStack[StackCount-1],"ldc 0\n");
			  strcat(ExprStack[StackCount-1],"ixor\n");
			}
    break;

  case 85:

    { (yyval.exprs) = (yyvsp[(1) - (1)].exprs); }
    break;

  case 86:

    {
			//fprintf(out,"[relop_expr %d %d]\n",$1->pType->type,$3->pType->type);
				char buf[10];
				int CT_1=0;
				int CT_2=0;
				if(((yyvsp[(3) - (3)].exprs)->pType->type!=REAL_t))
				{
					CT_2=1;
				}
				if(((yyvsp[(1) - (3)].exprs)->pType->type!=REAL_t))
				{
					CT_1=1;
				}

				//itoa(lCount++,buf,10);
			  verifyRelOp( (yyvsp[(1) - (3)].exprs), (yyvsp[(2) - (3)].intVal), (yyvsp[(3) - (3)].exprs) );
			  (yyval.exprs) = (yyvsp[(1) - (3)].exprs);
			  	
			 	char* tmp=(char*)calloc(1000,sizeof(char));
			 	//fprintf(out,"[!%d %d!]\n",$1->pType->type,$3->pType->type);
			  	strcat(tmp,ExprStack[StackCount-2]);
			  	if(CT_1)strcat(tmp,"i2f\n");
				strcat(tmp,ExprStack[StackCount-1]);
				if(CT_2)strcat(tmp,"i2f\n");
				strcat(tmp,"fcmpl \n"); 
				switch((yyvsp[(2) - (3)].intVal))
				{		
					case LT_t:strcat(tmp,"iflt");break;
					case LE_t:strcat(tmp,"ifle");break;
					case EQ_t:strcat(tmp,"ifeq");break;
					case GE_t:strcat(tmp,"ifge");break;
					case GT_t:strcat(tmp,"ifgt");break;
					case NE_t:strcat(tmp,"ifne");break;
				}
				lC[++lCtop]=lCount++;
				strcat(tmp," L1_");
				for(i=0;i<lC[lCtop];i++)strcat(tmp,"fuck");
				strcat(tmp,"\n iconst_0 \n goto L2_");
				for(i=0;i<lC[lCtop];i++)strcat(tmp,"fuck");
				strcat(tmp,"\n L1_");
				for(i=0;i<lC[lCtop];i++)strcat(tmp,"fuck");
				strcat(tmp,":\n iconst_1 \n L2_");
				for(i=0;i<lC[lCtop];i++)strcat(tmp,"fuck");
				strcat(tmp,":\n");
				
				lCtop--;
				superfree(&ExprStack[--StackCount]);
				superfree(&ExprStack[--StackCount]);
				ExprStack[StackCount]=tmp;
				StackCount++;
			  
			}
    break;

  case 87:

    { (yyval.exprs) = (yyvsp[(1) - (1)].exprs); }
    break;

  case 88:

    { (yyval.intVal) = LT_t; }
    break;

  case 89:

    { (yyval.intVal) = LE_t; }
    break;

  case 90:

    { (yyval.intVal) = EQ_t; }
    break;

  case 91:

    { (yyval.intVal) = GE_t; }
    break;

  case 92:

    { (yyval.intVal) = GT_t; }
    break;

  case 93:

    { (yyval.intVal) = NE_t; }
    break;

  case 94:

    {
			  verifyArithmeticOp( (yyvsp[(1) - (3)].exprs), (yyvsp[(2) - (3)].intVal), (yyvsp[(3) - (3)].exprs) );
			  (yyval.exprs) = (yyvsp[(1) - (3)].exprs);
			  
			  	char* tmp=(char*)calloc(1000,sizeof(char));
				int ChangeType=0;
				if(((yyvsp[(1) - (3)].exprs)->pType->type==REAL_t && (yyvsp[(3) - (3)].exprs)->pType->type!=REAL_t))
				{
					ChangeType=2;
				}
				else if(((yyvsp[(1) - (3)].exprs)->pType->type!=REAL_t && (yyvsp[(3) - (3)].exprs)->pType->type==REAL_t))
				{
					ChangeType=1;
				}
				else if(((yyvsp[(1) - (3)].exprs)->pType->type==REAL_t || (yyvsp[(3) - (3)].exprs)->pType->type==REAL_t))
				{
					ChangeType=3;
				}
				strcat(tmp,ExprStack[StackCount-2]);
				//sprintf(tmp,"%s",ExprStack[StackCount-2]);
				if(ChangeType==1)strcat(tmp,"i2f\n");
				strcat(tmp,ExprStack[StackCount-1]);
				//sprintf(tmp,"%s",ExprStack[StackCount-1]);
				if(ChangeType==2)strcat(tmp,"i2f\n");
				if(ChangeType==0)
				{
					switch((yyvsp[(2) - (3)].intVal))
					{
						case ADD_t:
							strcat(tmp,"iadd\n");	break;
						case SUB_t:
							strcat(tmp,"isub\n");	break;
					}
				}
				else
				{
					switch((yyvsp[(2) - (3)].intVal))
					{
						case ADD_t:
							strcat(tmp,"fadd\n");	break;
						case SUB_t:
							strcat(tmp,"fsub\n");	break;
					}
				}
				superfree(&ExprStack[--StackCount]);
				superfree(&ExprStack[--StackCount]);
				ExprStack[StackCount]=tmp;
				StackCount++;
			}
    break;

  case 95:

    { (yyval.exprs) = (yyvsp[(1) - (1)].exprs); }
    break;

  case 96:

    { (yyval.intVal) = ADD_t; }
    break;

  case 97:

    { (yyval.intVal) = SUB_t; }
    break;

  case 98:

    {
				dumpEStack("term");
				char* tmp=(char*)calloc(1000,sizeof(char));
				//for(int i=0;i<1000;i++)tmp[i]=0;
				int ChangeType=0;
				if(((yyvsp[(1) - (3)].exprs)->pType->type==REAL_t && (yyvsp[(3) - (3)].exprs)->pType->type!=REAL_t))
				{
					ChangeType=2;
				}
				else if(((yyvsp[(1) - (3)].exprs)->pType->type!=REAL_t && (yyvsp[(3) - (3)].exprs)->pType->type==REAL_t))
				{
					ChangeType=1;
				}
				else if(((yyvsp[(1) - (3)].exprs)->pType->type==REAL_t || (yyvsp[(3) - (3)].exprs)->pType->type==REAL_t))
				{
					ChangeType=3;
				}
			//	if(StackCount<2)
				strcat(tmp,ExprStack[StackCount-2]);
				if(ChangeType==1)strcat(tmp,"i2f\n");
				strcat(tmp,ExprStack[StackCount-1]);
				if(ChangeType==2)strcat(tmp,"i2f\n");
				if(ChangeType==0)
				{
				 //fprintf(out,"[mul!!]\n");
					switch((yyvsp[(2) - (3)].intVal))
					{
						case MOD_t:
							strcat(tmp,"irem\n");	break;
						case DIV_t:
							strcat(tmp,"idiv\n");	break;
						case MUL_t:
							strcat(tmp,"imul\n");	break;
						
					}
				}
				else
				{
					switch((yyvsp[(2) - (3)].intVal))
					{
						case DIV_t:
							strcat(tmp,"fdiv\n");	break;
						case MUL_t:
							strcat(tmp,"fmul\n");	break;
					}
				
				}
				superfree(&ExprStack[--StackCount]);
				superfree(&ExprStack[--StackCount]);
				ExprStack[StackCount]=tmp;
				StackCount++;
				
			  if( (yyvsp[(2) - (3)].intVal) == MOD_t ) {
				verifyModOp( (yyvsp[(1) - (3)].exprs), (yyvsp[(3) - (3)].exprs) );
				
			  }
			  else {
				verifyArithmeticOp( (yyvsp[(1) - (3)].exprs), (yyvsp[(2) - (3)].intVal), (yyvsp[(3) - (3)].exprs) );
			  }
			  (yyval.exprs) = (yyvsp[(1) - (3)].exprs);
			}
    break;

  case 99:

    { (yyval.exprs) = (yyvsp[(1) - (1)].exprs); }
    break;

  case 100:

    { (yyval.intVal) = MUL_t; }
    break;

  case 101:

    { (yyval.intVal) = DIV_t; }
    break;

  case 102:

    { (yyval.intVal) = MOD_t; }
    break;

  case 103:

    {
			  verifyExistence( symbolTable, (yyvsp[(1) - (1)].exprs), scope, __FALSE );
			  (yyval.exprs) = (yyvsp[(1) - (1)].exprs);
			  (yyval.exprs)->beginningOp = NONE_t;
			 // fprintf(out,"[factor %d %s]\n",$$->pType->type,$$->varRef->id);
			  		struct expr_sem*v=(yyvsp[(1) - (1)].exprs);
					int shoot=-1;
					struct SymNode*glo=0;
					//fprintf(out,";[expr]\n");
					if(ExprStack[StackCount]==NULL)
					{
						ExprStack[StackCount]=(char*)calloc(1000,sizeof(char));
						//for(int i=0;i<1000;i++)tmp[i]=0;
					}
					if(glo=lookupSymbol(symbolTable, v->varRef->id, 0, __TRUE ),glo!=0)
					{
						//fprintf(out,"typ=%d  %s\n",glo->type->type,glo->name);fflush(out);
						//fprintf(out,"typ=%d  %s\n",glo->type->type,glo->name);fflush(out);
						if(glo->category==CONSTANT_t)
						{
						if(glo->type->type==INTEGER_t)
 						{
 							sprintf(ExprStack[StackCount],"ldc %d\n",glo->type->value.integerVal);
 							//strcat(ExprStack[StackCount],"ineg\n");
																	
 						}
 						else if(glo->type->type==BOOLEAN_t)
 						{
 							sprintf(ExprStack[StackCount],"ldc %d\n",glo->type->value.booleanVal);
							//strcat(ExprStack[StackCount],"ineg\n");									
 						}
 						else if(glo->type->type==REAL_t)
 						{
							sprintf(ExprStack[StackCount],"ldc %f\n",glo->type->value.realVal);
							//strcat(ExprStack[StackCount],"fneg\n");
 						}							
						}
						else
						{
						if(glo->type->type==INTEGER_t)
 						{
 							sprintf(ExprStack[StackCount],"getstatic %s/%s I\n",fileName,glo->name);
 							
																	
 						}
 						else if(glo->type->type==BOOLEAN_t)
 						{
 							sprintf(ExprStack[StackCount],"getstatic %s/%s I\n",fileName,glo->name);
																
 						}
 						else if(glo->type->type==REAL_t)
 						{
							sprintf(ExprStack[StackCount],"getstatic %s/%s F\n",fileName,glo->name);
 						}			
 						}					
 					}
 					else
 					{
 						for(i=LocalCount;i>=0;i--)
 						{
 								
 								if( LocalItem[i]!=0 &&v->varRef!=0 && v->varRef->id!=0 && ItemScope[i]<=scope && strcmp(v->varRef->id,LocalItem[i])==0)
 								{
 									shoot=i;
 									break;
 								}
 						}
 						
 						if(shoot!=-1)
 						{
 							if(v->pType->type==INTEGER_t)
 							{
 								sprintf(ExprStack[StackCount],"iload %d\n",shoot);
 							}	
 							else if(v->pType->type==BOOLEAN_t)
 							{
 								sprintf(ExprStack[StackCount],"iload %d\n",shoot);
																
 							}
 							else if(v->pType->type==REAL_t)
 							{
								sprintf(ExprStack[StackCount],"fload %d\n",shoot);
 																
 							}
 															
						}	
					}
					StackCount++;
					 dumpEStack("expr");
			}
    break;

  case 104:

    {
			  if( verifyExistence( symbolTable, (yyvsp[(2) - (2)].exprs), scope, __FALSE ) == __TRUE )
				verifyUnaryMinus( (yyvsp[(2) - (2)].exprs) );
			  (yyval.exprs) = (yyvsp[(2) - (2)].exprs);
			  (yyval.exprs)->beginningOp = SUB_t;
					if(ExprStack[StackCount]==NULL)ExprStack[StackCount]=(char*)calloc(1000,sizeof(char));
					//if(ExprStack[StackCount+1]==NULL)ExprStack[StackCount+1]=(char*)malloc(sizeof(char)*100);
			  		struct expr_sem*v=(yyvsp[(2) - (2)].exprs);
					int shoot=-1;
					struct SymNode*glo=0;
					if(glo=lookupSymbol(symbolTable, v->varRef->id, 0, __TRUE ),glo!=0)
					{
						//fprintf(out,"typ=%d  %s\n",glo->type->type,glo->name);fflush(out);
						if(glo->category==CONSTANT_t)
						{
						if(glo->type->type==INTEGER_t)
 						{
 							sprintf(ExprStack[StackCount],"ldc %d\n",glo->type->value.integerVal);
 							strcat(ExprStack[StackCount],"ineg\n");
																	
 						}
 						else if(glo->type->type==BOOLEAN_t)
 						{
 							sprintf(ExprStack[StackCount],"ldc %d\n",glo->type->value.booleanVal);
							strcat(ExprStack[StackCount],"ineg\n");									
 						}
 						else if(glo->type->type==REAL_t)
 						{
							sprintf(ExprStack[StackCount],"ldc %f\n",glo->type->value.realVal);
							strcat(ExprStack[StackCount],"fneg\n");
 						}							
						}
						else
						{
						if(glo->type->type==INTEGER_t)
 						{
 							sprintf(ExprStack[StackCount],"getstatic %s/%s I\n",fileName,glo->name);
 							strcat(ExprStack[StackCount],"ineg\n");
																	
 						}
 						else if(glo->type->type==BOOLEAN_t)
 						{
 							sprintf(ExprStack[StackCount],"getstatic %s/%s I\n",fileName,glo->name);
							strcat(ExprStack[StackCount],"ineg\n");									
 						}
 						else if(glo->type->type==REAL_t)
 						{
							sprintf(ExprStack[StackCount],"getstatic %s/%s F\n",fileName,glo->name);
							strcat(ExprStack[StackCount],"fneg\n");
 						}		
 						}						
 					}
 					else
 					{
 						for(i=LocalCount;i>=0;i--)
 						{
 								
 								if(LocalItem[i]!=0&&v->varRef!=0 && v->varRef->id!=0 && ItemScope[i]<=scope && strcmp(v->varRef->id,LocalItem[i])==0)
 								{
 									shoot=i;
 									break;
 								}
 						}
 						
 						if(shoot>=0)
 						{
 							if(v->pType->type==INTEGER_t)
 							{
 								sprintf(ExprStack[StackCount],"iload %d\n",shoot);
 								strcat(ExprStack[StackCount],"ineg\n");
 							}	
 							else if(v->pType->type==BOOLEAN_t)
 							{
 								sprintf(ExprStack[StackCount],"iload %d\n",shoot);
								strcat(ExprStack[StackCount],"ineg\n");								
 							}
 							else if(v->pType->type==REAL_t)
 							{
								sprintf(ExprStack[StackCount],"fload %d\n",shoot);
 								strcat(ExprStack[StackCount],"fneg\n");								
 							}
 															
						}	
					}	
					StackCount++;
					  
			}
    break;

  case 105:

    {
			  (yyvsp[(2) - (3)].exprs)->beginningOp = NONE_t;
			  (yyval.exprs) = (yyvsp[(2) - (3)].exprs); 
			}
    break;

  case 106:

    {
			  verifyUnaryMinus( (yyvsp[(3) - (4)].exprs) );
			  (yyval.exprs) = (yyvsp[(3) - (4)].exprs);
			  (yyval.exprs)->beginningOp = SUB_t;
			  if((yyvsp[(3) - (4)].exprs)->pType->type==REAL_t)
			  {
			  	strcat(ExprStack[StackCount-1],"fneg\n");
			  }
			  else
			  {
			  	strcat(ExprStack[StackCount-1],"ineg\n");
			  }
			}
    break;

  case 107:

    {
				struct expr_sem*ret;
			  (yyval.exprs) = verifyFuncInvoke( (yyvsp[(1) - (4)].lexeme), (yyvsp[(3) - (4)].exprs), symbolTable, scope );
			  (yyval.exprs)->beginningOp = NONE_t;
			  ret=(yyval.exprs);
			  //ExprStack[StackCount]=
			  char*tmp=(char*)calloc(1000,sizeof(char));
			  	int count=0;
				 struct expr_sem*ha;
				for(ha=(yyvsp[(3) - (4)].exprs);ha!=NULL;ha=ha->next)count++;
				
				for(i=count;i>0;i--)
				{
				strcat(tmp,ExprStack[StackCount-i]);
					superfree(&ExprStack[StackCount-i]);
				}
				
				strcat(tmp,"invokestatic ");
				strcat(tmp,fileName);
				strcat(tmp,"/");
				strcat(tmp,(yyvsp[(1) - (4)].lexeme));
				strcat(tmp,"(");
				//fprintf(out,"invokestatic %s/%s(",fileName,$1);
				struct expr_sem*t;
				for(t=(yyvsp[(3) - (4)].exprs);t!=NULL;t=t->next)
				{
					switch(t->pType->type)
						{
							case INTEGER_t: strcat(tmp,"I"); break;
							case BOOLEAN_t: strcat(tmp,"Z"); break;
							case REAL_t:    strcat(tmp,"F"); break;
							//default:	fprintf(out,"?");
						}
				}
				switch(ret->pType->type)
				{
							case INTEGER_t: strcat(tmp,")I\n"); break;
							case BOOLEAN_t: strcat(tmp,")Z\n"); break;
							case REAL_t:    strcat(tmp,")F\n"); break;
							case VOID_t:    strcat(tmp,")V\n"); break;
				}
				StackCount-=count;
				ExprStack[StackCount]=tmp;
				StackCount++;
			}
    break;

  case 108:

    {
			  (yyval.exprs) = verifyFuncInvoke( (yyvsp[(2) - (5)].lexeme), (yyvsp[(4) - (5)].exprs), symbolTable, scope );
			  (yyval.exprs)->beginningOp = SUB_t;
			  			  
			}
    break;

  case 109:

    {
			  (yyval.exprs) = (struct expr_sem *)malloc(sizeof(struct expr_sem));
			  (yyval.exprs)->isDeref = __TRUE;
			  (yyval.exprs)->varRef = 0;
			  if(ExprStack[StackCount]==NULL)ExprStack[StackCount]=(char*)calloc(1000,sizeof(char));
			if( ((yyvsp[(1) - (1)].constVal)->category == INTEGER_t) || ((yyvsp[(1) - (1)].constVal)->category == BOOLEAN_t) || ((yyvsp[(1) - (1)].constVal)->category == REAL_t) )
			{	(yyval.exprs)->pType = createPTypeWithValue((yyvsp[(1) - (1)].constVal)->category, &((yyvsp[(1) - (1)].constVal)->value));
			//fprintf(out,";[expr]\n");
			  	if(((yyvsp[(1) - (1)].constVal)->category == INTEGER_t) )
			  		sprintf(ExprStack[StackCount],"ldc %d\n",(yyvsp[(1) - (1)].constVal)->value);
				else if((yyvsp[(1) - (1)].constVal)->category==BOOLEAN_t)
				{
					if((yyvsp[(1) - (1)].constVal)->value.booleanVal ==__TRUE)
					{
						sprintf(ExprStack[StackCount],"iconst_1\n");
					}
					else
					{
						sprintf(ExprStack[StackCount],"iconst_0\n");
					}

				}
			  	else if(((yyvsp[(1) - (1)].constVal)->category == REAL_t))
			  		sprintf(ExprStack[StackCount],"ldc %f\n",(yyvsp[(1) - (1)].constVal)->value.realVal);

			  }
			  else if((yyvsp[(1) - (1)].constVal)->category == STRING_t)
			  {
			  (yyval.exprs)->pType = createPType( (yyvsp[(1) - (1)].constVal)->category );
			(yyval.exprs)->pType->strv=(char*)calloc(1000,sizeof(char));
			strcpy((yyval.exprs)->pType->strv,(yyvsp[(1) - (1)].constVal)->value.stringVal);
			sprintf(ExprStack[StackCount],"ldc \"%s\"\n",(yyval.exprs)->pType->strv);
			  }
			  else 
			  	(yyval.exprs)->pType = createPType( (yyvsp[(1) - (1)].constVal)->category );
			  (yyval.exprs)->next = 0;
			  
			  StackCount++;
			  dumpEStack("const");
			  if( (yyvsp[(1) - (1)].constVal)->hasMinus == __TRUE ) {
			  	(yyval.exprs)->beginningOp = SUB_t;
			  }
			  else {
				(yyval.exprs)->beginningOp = NONE_t;
			  }
			}
    break;

  case 110:

    {
			  (yyval.exprs) = createExprSem( (yyvsp[(1) - (1)].lexeme) );
			}
    break;

  case 111:

    {
			  increaseDim( (yyvsp[(1) - (2)].exprs), (yyvsp[(2) - (2)].intVal) );
			  (yyval.exprs) = (yyvsp[(1) - (2)].exprs);
			}
    break;

  case 112:

    {
			  (yyval.intVal) = verifyArrayIndex( (yyvsp[(2) - (3)].exprs) );
			}
    break;



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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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





int yyerror( char *msg )
{
	fprintf( stderr, "\n|--------------------------------------------------------------------------\n" );
	fprintf( stderr, "| Error found in Line #%d: %s\n", linenum, buf );
	fprintf( stderr, "|\n" );
	fprintf( stderr, "| Unmatched token: %s\n", yytext );
	fprintf( stderr, "|--------------------------------------------------------------------------\n" );
	exit(-1);
}
int dumpEStack(const char* ha)
{
	fprintf(out," ");
	fflush(out);
	return 0;
	fprintf(out,";////////////////////%s/////////////////////%d\n",ha,StackCount);
	for(i=0;i<StackCount;i++)
	{
		
		fprintf(out,"       -------stack %d------\n",i);
		fprintf(out,"%s\n",ExprStack[i]);
		
	}
	fprintf(out,";//////////////////end_%s///////////////////////\n",ha);
	fflush(out);
}
void superfree(char** str)
{
	char *tmp=*str;
	free(tmp);
	*str=0;
}

int yywrap(){
	return 1;
}
