/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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
     INTEGER = 266,
     IF = 267,
     OF = 268,
     PRINT = 269,
     READ = 270,
     REAL = 271,
     RETURN = 272,
     STRING = 273,
     THEN = 274,
     TO = 275,
     TRUE = 276,
     VAR = 277,
     WHILE = 278,
     OP_ADD = 279,
     OP_SUB = 280,
     OP_MUL = 281,
     OP_DIV = 282,
     OP_MOD = 283,
     OP_ASSIGN = 284,
     OP_EQ = 285,
     OP_NE = 286,
     OP_GT = 287,
     OP_LT = 288,
     OP_GE = 289,
     OP_LE = 290,
     OP_AND = 291,
     OP_OR = 292,
     OP_NOT = 293,
     MK_COMMA = 294,
     MK_COLON = 295,
     MK_SEMICOLON = 296,
     MK_LPAREN = 297,
     MK_RPAREN = 298,
     MK_LB = 299,
     MK_RB = 300,
     ID = 301,
     INT_CONST = 302,
     FLOAT_CONST = 303,
     SCIENTIFIC = 304,
     STR_CONST = 305
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
#define INTEGER 266
#define IF 267
#define OF 268
#define PRINT 269
#define READ 270
#define REAL 271
#define RETURN 272
#define STRING 273
#define THEN 274
#define TO 275
#define TRUE 276
#define VAR 277
#define WHILE 278
#define OP_ADD 279
#define OP_SUB 280
#define OP_MUL 281
#define OP_DIV 282
#define OP_MOD 283
#define OP_ASSIGN 284
#define OP_EQ 285
#define OP_NE 286
#define OP_GT 287
#define OP_LT 288
#define OP_GE 289
#define OP_LE 290
#define OP_AND 291
#define OP_OR 292
#define OP_NOT 293
#define MK_COMMA 294
#define MK_COLON 295
#define MK_SEMICOLON 296
#define MK_LPAREN 297
#define MK_RPAREN 298
#define MK_LB 299
#define MK_RB 300
#define ID 301
#define INT_CONST 302
#define FLOAT_CONST 303
#define SCIENTIFIC 304
#define STR_CONST 305




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

	struct expr_sem_node *exprNode;



} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


