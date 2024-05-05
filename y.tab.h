/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TK_NUM = 258,
    TK_REAL = 259,
    TK_CHAR = 260,
    TK_STRING = 261,
    TK_MAIN = 262,
    TK_ID = 263,
    TK_TIPO_INT = 264,
    TK_TIPO_FLOAT = 265,
    TK_TIPO_BOOL = 266,
    TK_TIPO_CHAR = 267,
    TK_TIPO_STRING = 268,
    TK_MAIOR_IGUAL = 269,
    TK_DOIS_PTS_IGUAL = 270,
    TK_MENOR_IGUAL = 271,
    TK_IGUAL_IGUAL = 272,
    TK_DIFERENTE = 273,
    TK_MAIS_MAIS = 274,
    TK_MENOS_MENOS = 275,
    TK_OU = 276,
    TK_E = 277,
    TK_FUNC = 278,
    TK_RETURN = 279,
    TK_TIPO_VOID = 280,
    TK_INCREMENT = 281,
    TK_FIM = 282,
    TK_ERROR = 283,
    TK_COMENTARIO = 284,
    TK_TRUE = 285,
    TK_FALSE = 286,
    TK_PRINTLN = 287,
    TK_PRINT = 288,
    TK_SCAN = 289,
    TK_IF = 290,
    TK_ELSE = 291,
    TK_ELSE_IF = 292,
    TK_WHILE = 293,
    TK_FOR = 294,
    TK_DO = 295,
    TK_BREAK = 296,
    TK_CONTINUE = 297,
    TK_POW = 298,
    TK_SQRT = 299
  };
#endif
/* Tokens.  */
#define TK_NUM 258
#define TK_REAL 259
#define TK_CHAR 260
#define TK_STRING 261
#define TK_MAIN 262
#define TK_ID 263
#define TK_TIPO_INT 264
#define TK_TIPO_FLOAT 265
#define TK_TIPO_BOOL 266
#define TK_TIPO_CHAR 267
#define TK_TIPO_STRING 268
#define TK_MAIOR_IGUAL 269
#define TK_DOIS_PTS_IGUAL 270
#define TK_MENOR_IGUAL 271
#define TK_IGUAL_IGUAL 272
#define TK_DIFERENTE 273
#define TK_MAIS_MAIS 274
#define TK_MENOS_MENOS 275
#define TK_OU 276
#define TK_E 277
#define TK_FUNC 278
#define TK_RETURN 279
#define TK_TIPO_VOID 280
#define TK_INCREMENT 281
#define TK_FIM 282
#define TK_ERROR 283
#define TK_COMENTARIO 284
#define TK_TRUE 285
#define TK_FALSE 286
#define TK_PRINTLN 287
#define TK_PRINT 288
#define TK_SCAN 289
#define TK_IF 290
#define TK_ELSE 291
#define TK_ELSE_IF 292
#define TK_WHILE 293
#define TK_FOR 294
#define TK_DO 295
#define TK_BREAK 296
#define TK_CONTINUE 297
#define TK_POW 298
#define TK_SQRT 299

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
