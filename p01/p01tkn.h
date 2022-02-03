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

#include <map>
//This is for when the program should be exiting
#ifndef YYERRCODE
#define YYERRCODE 256
#endif

#define AND 257
#define ARRAY 258
#define BEGAN 259
#define DIV 260
#define DO 261
#define DOWNTO 262
#define ELSE 263
#define END 264
#define FOR 265
#define FUNCTION 266
#define IF 267
#define MOD 268
#define NOT 269
#define OF 270
#define OR 271
#define PROCEDURE 272
#define PROGRAM 273
#define REPEAT 274
#define THEN 275
#define TO 276
#define UNTIL 277
#define VAR 278
#define WHILE 279
#define EQU 280
#define NEQ 281
#define LES 282
#define LEQ 283
#define GRT 284
#define GEQ 285
#define PLUS 286
#define MINUS 287
#define STAR 288
#define SLASH 289
#define ASSIGN 290
#define LPAREN 291
#define RPAREN 292
#define LBRACKET 293
#define RBRACKET 294
#define COLON 295
#define SEMICOLON 296
#define COMMA 297
#define PERIOD 298
#define RANGE 299
#define ID 302
#define INTLIT 303
#define CHRLIT 305
#define REALIT 304
#define ERROR 309

const map<int, string> tokenMap = {
	{AND, "AND"},
	{ARRAY, "ARRAY"},
	{BEGAN, "BEGAN"},
	{DIV, "DIV"},
	{DO, "DO"},
	{DOWNTO, "DOWNTO"},
	{ELSE, "ELSE"},
	{END, "END"},
	{FOR, "FOR"},
	{FUNCTION, "FUNCTION"},
	{IF, "IF"},
	{MOD, "MOD"},
	{NOT, "NOT"},
	{OF, "OF"},
	{OR, "OR"},
	{PROCEDURE, "PROCEDURE"},
	{PROGRAM, "PROGRAM"},
	{REPEAT, "REPEAT"},
	{THEN, "THEN"},
	{TO, "TO"},
	{UNTIL, "UNTIL"},
	{VAR, "VAR"},
	{WHILE, "WHILE"},

	{EQU, "EQU"},
	{NEQ, "NEQ"},
	{LES, "LES"},
	{LEQ, "LEQ"},
	{GRT, "GRT"},
	{GEQ, "GEQ"},
	{PLUS, "PLUS"},
	{MINUS, "MINUS"},
	{STAR, "STAR"},
	{SLASH, "SLASH"},
	{ASSIGN, "ASSIGN"},
	{LPAREN, "LPAREN"},
	{RPAREN, "RPAREN"},
	{LBRACKET, "LBRACKET"},
	{RBRACKET, "RBRACKET"},
	{COLON, "COLON"},
	{SEMICOLON, "SEMICOLON"},
	{COMMA, "COMMA"},
	{PERIOD, "PERIOD"},
	{RANGE, "RANGE"},
	
	{ID, "ID"},
	{INTLIT, "INTLIT"},
	{CHRLIT, "CHRLIT"},
	{REALIT, "REALIT"},
	{ERROR, "ERROR"},
};