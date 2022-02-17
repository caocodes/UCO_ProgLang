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
    PROGRAM = 258,
    SEMICOLON = 259,
    PERIOD = 260,
    LPAREN = 261,
    RPAREN = 262,
    ID = 263,
    COMMA = 264,
    COLON = 265,
    VAR = 266,
    ARRAY = 267,
    LBRACKET = 268,
    RBRACKET = 269,
    INTLIT = 270,
    DOUBLEPERIOD = 271,
    OF = 272,
    FUNCTION = 273,
    PROCEDURE = 274,
    BEGAN = 275,
    END = 276,
    ASSIGN = 277,
    IF = 278,
    THEN = 279,
    ELSE = 280,
    WHILE = 281,
    DO = 282,
    REPEAT = 283,
    UNTIL = 284,
    FOR = 285,
    TO = 286,
    DOWNTO = 287,
    EQUAL = 288,
    DIAMOND = 289,
    LESSTHAN = 290,
    LESSTHANEQUAL = 291,
    GREATERTHAN = 292,
    GREATERTHANEQUAL = 293,
    PLUS = 294,
    MINUS = 295,
    OR = 296,
    STAR = 297,
    SLASH = 298,
    DIV = 299,
    MOD = 300,
    AND = 301,
    NOT = 302,
    REALIT = 303,
    CHRLIT = 304,
    ERROR = 305
  };
#endif
/* Tokens.  */
#define PROGRAM 258
#define SEMICOLON 259
#define PERIOD 260
#define LPAREN 261
#define RPAREN 262
#define ID 263
#define COMMA 264
#define COLON 265
#define VAR 266
#define ARRAY 267
#define LBRACKET 268
#define RBRACKET 269
#define INTLIT 270
#define DOUBLEPERIOD 271
#define OF 272
#define FUNCTION 273
#define PROCEDURE 274
#define BEGAN 275
#define END 276
#define ASSIGN 277
#define IF 278
#define THEN 279
#define ELSE 280
#define WHILE 281
#define DO 282
#define REPEAT 283
#define UNTIL 284
#define FOR 285
#define TO 286
#define DOWNTO 287
#define EQUAL 288
#define DIAMOND 289
#define LESSTHAN 290
#define LESSTHANEQUAL 291
#define GREATERTHAN 292
#define GREATERTHANEQUAL 293
#define PLUS 294
#define MINUS 295
#define OR 296
#define STAR 297
#define SLASH 298
#define DIV 299
#define MOD 300
#define AND 301
#define NOT 302
#define REALIT 303
#define CHRLIT 304
#define ERROR 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 35 "p02par.y" /* yacc.c:1909  */

    string* token;

#line 158 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
