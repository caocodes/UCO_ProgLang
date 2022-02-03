//--------------------------------------------------------------------
// File p01tkn.h contains the list of preprocessor definitions that define token codes.
//--------------------------------------------------------------------
// Author:	Mr. Cao Truong
// Student ID: *20500231
// E-Mail:	ctruong3@uco.edu
// Course:	CMSC 5023 – Programming Languages
// CRN:		22708, Spring 2022
// Project:	p01
// Due:		February 3, 2022
// Project Account Number: tt035

//This is for when the program should be exiting
#ifndef YYERRCODE
#define YYERRCODE 256
#endif

//Defined tokens starting from 257
#define TOKENSIZE 257
#define AND 258
#define ARRAY 259
#define BEGAN 260
#define DIV 261
#define DO 262
#define DOWNTO 263
#define ELSE 264
#define END 265
#define FOR 266
#define FUNCTION 267
#define IF 268
#define INTEGER 269
#define MOD 270
#define NOT 271
#define OF 272
#define OR 273
#define PROCEDURE 274
#define PROGRAM 275
#define REPEAT 276
#define THEN 277
#define TO 278
#define UNTIL 279
#define VAR 280
#define WHILE 281
#define ID 282
#define INTLIT 283
#define REALIT 284
#define CHRLIT 285
#define EQU 286
#define NEQ 287
#define LES 288
#define LEQ 289
#define GRT 290
#define GEQ 291
#define PLUS 292
#define MINUS 293
#define STAR 294
#define SLASH 295
#define ASSIGN 296
#define LPAREN 297
#define RPAREN 298
#define LBRACKET 299
#define RBRACKET 300
#define LCURLY 301
#define RCURLY 302
#define COLON 303
#define SEMICOLON 304
#define COMMA 305
#define PERIOD 306
#define RANGE 307
#define APOSTROPHE 308
#define ERROR 309
#define TOKENMAX 310