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
    CUP_O = 258,
    CSP_O = 259,
    ENT_O = 260,
    MST_O = 261,
    RTN_O = 262,
    EQU_O = 263,
    NEQ_O = 264,
    GRT_O = 265,
    GEQ_O = 266,
    LES_O = 267,
    LEQ_O = 268,
    ADI_O = 269,
    SBI_O = 270,
    NGI_O = 271,
    MPI_O = 272,
    DVI_O = 273,
    MOD_O = 274,
    ABI_O = 275,
    SQI_O = 276,
    INC_O = 277,
    DEC_O = 278,
    ADR_O = 279,
    SBR_O = 280,
    NGR_O = 281,
    MPR_O = 282,
    DVR_O = 283,
    ABR_O = 284,
    SQR_O = 285,
    IOR_O = 286,
    AND_O = 287,
    XOR_O = 288,
    NOT_O = 289,
    INN_O = 290,
    UNI_O = 291,
    NTR_O = 292,
    DIF_O = 293,
    CMP_O = 294,
    SGS_O = 295,
    UJP_O = 296,
    XJP_O = 297,
    FJP_O = 298,
    TJP_O = 299,
    FLT_O = 300,
    FLO_O = 301,
    TRC_O = 302,
    RND_O = 303,
    CHR_O = 304,
    ORD_O = 305,
    STP_O = 306,
    LDA_O = 307,
    LDC_O = 308,
    LDI_O = 309,
    LVA_O = 310,
    LVB_O = 311,
    LVC_O = 312,
    LVI_O = 313,
    LVR_O = 314,
    LVS_O = 315,
    LVT_O = 316,
    STI_O = 317,
    IXA_O = 318,
    RDB_F = 319,
    RDC_F = 320,
    RDI_F = 321,
    RDR_F = 322,
    RLN_F = 323,
    WRB_F = 324,
    WRC_F = 325,
    WRI_F = 326,
    WRE_F = 327,
    WRF_F = 328,
    WRS_F = 329,
    WRT_F = 330,
    WLN_F = 331,
    SQT_F = 332,
    LN_F = 333,
    EXP_F = 334,
    SP_R = 335,
    EP_R = 336,
    MP_R = 337,
    PC_R = 338,
    NP_R = 339,
    A_T = 340,
    B_T = 341,
    C_T = 342,
    I_T = 343,
    R_T = 344,
    S_T = 345,
    T_T = 346,
    P_T = 347,
    X_T = 348,
    DEFINE = 349,
    LABEL = 350,
    INTLIT = 351,
    REALIT = 352,
    CHRLIT = 353,
    STRLIT = 354,
    ID = 355,
    ERROR = 356
  };
#endif
/* Tokens.  */
#define CUP_O 258
#define CSP_O 259
#define ENT_O 260
#define MST_O 261
#define RTN_O 262
#define EQU_O 263
#define NEQ_O 264
#define GRT_O 265
#define GEQ_O 266
#define LES_O 267
#define LEQ_O 268
#define ADI_O 269
#define SBI_O 270
#define NGI_O 271
#define MPI_O 272
#define DVI_O 273
#define MOD_O 274
#define ABI_O 275
#define SQI_O 276
#define INC_O 277
#define DEC_O 278
#define ADR_O 279
#define SBR_O 280
#define NGR_O 281
#define MPR_O 282
#define DVR_O 283
#define ABR_O 284
#define SQR_O 285
#define IOR_O 286
#define AND_O 287
#define XOR_O 288
#define NOT_O 289
#define INN_O 290
#define UNI_O 291
#define NTR_O 292
#define DIF_O 293
#define CMP_O 294
#define SGS_O 295
#define UJP_O 296
#define XJP_O 297
#define FJP_O 298
#define TJP_O 299
#define FLT_O 300
#define FLO_O 301
#define TRC_O 302
#define RND_O 303
#define CHR_O 304
#define ORD_O 305
#define STP_O 306
#define LDA_O 307
#define LDC_O 308
#define LDI_O 309
#define LVA_O 310
#define LVB_O 311
#define LVC_O 312
#define LVI_O 313
#define LVR_O 314
#define LVS_O 315
#define LVT_O 316
#define STI_O 317
#define IXA_O 318
#define RDB_F 319
#define RDC_F 320
#define RDI_F 321
#define RDR_F 322
#define RLN_F 323
#define WRB_F 324
#define WRC_F 325
#define WRI_F 326
#define WRE_F 327
#define WRF_F 328
#define WRS_F 329
#define WRT_F 330
#define WLN_F 331
#define SQT_F 332
#define LN_F 333
#define EXP_F 334
#define SP_R 335
#define EP_R 336
#define MP_R 337
#define PC_R 338
#define NP_R 339
#define A_T 340
#define B_T 341
#define C_T 342
#define I_T 343
#define R_T 344
#define S_T 345
#define T_T 346
#define P_T 347
#define X_T 348
#define DEFINE 349
#define LABEL 350
#define INTLIT 351
#define REALIT 352
#define CHRLIT 353
#define STRLIT 354
#define ID 355
#define ERROR 356

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 44 "p04par.y" /* yacc.c:1909  */

    string* token;

#line 260 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
