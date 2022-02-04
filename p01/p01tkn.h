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

#define AND 1
#define ARRAY 2
#define BEGIN 3
#define DIV 4
#define DO 5
#define DOWNTO 6
#define ELSE 7
#define END 8
#define FOR 9
#define FUNCTION 10
#define IF 11
#define MOD 12
#define NOT 13
#define OF 14
#define OR 15
#define PROCEDURE 16
#define PROGRAM 17
#define REPEAT 18
#define THEN 19
#define TO 20
#define UNTIL 21
#define VAR 22
#define WHILE 23

#define EQU 24
#define NEQ 25
#define LES 26
#define LEQ 27
#define GRT 28
#define GEQ 29
#define PLUS 30
#define MINUS 31
#define STAR 32
#define SLASH 33
#define ASSIGN 34
#define LPAREN 35
#define RPAREN 36
#define LBRACKET 37
#define RBRACKET 38
#define COLON 39
#define SEMICOLON 40
#define COMMA 41
#define PERIOD 42
#define RANGE 43

#define ID 44
#define INTLIT 45
#define CHRLIT 46
#define REALIT 47
#define ERROR 48

const map<int, string> tokenMap = {
	{AND, "AND"},
	{ARRAY, "ARRAY"},
	{BEGIN, "BEGIN"},
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