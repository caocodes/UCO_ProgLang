%{
//--------------------------------------------------------------------
//File p02lex.l contains functions that accept the tokens of a Subset Pascal program.
//-------------------------------------------------------------------
// Author:	Mr. Cao Truong
// Student ID: *20500231
// E-Mail:	ctruong3@uco.edu
// Course:	CMSC 5023 – Programming Languages
// CRN:		22708, Spring 2022
// Project:	p02
// Due:		February 17, 2022
// Project Account Number: tt035
//--------------------------------------------------------------------
// C++ Library Include Files
//--------------------------------------------------------------------
#include <string>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <map>
using namespace std;
//--------------------------------------------------------------------
// Application Includes
//--------------------------------------------------------------------
#include "p02lex.h"
#include "p02tkn.h"

//--------------------------------------------------------------------
//Externals 
//--------------------------------------------------------------------
extern ofstream output;
//--------------------------------------------------------------------
//Global Variables
//--------------------------------------------------------------------
int lineCount = 1;
int columnCount = 1;
map<int, string> tokenMap;
//--------------------------------------------------------------------
//Function prototypes, class fields
//--------------------------------------------------------------------
int tokenMgr(int token);

%}
%%

[ \t]+ {
 columnCount += strlen(yytext);
}

[\n] {
 lineCount++;
 columnCount = 1;
}

'' {
	columnCount += 2;	
}

[{][^}]*[}] {
	for(int i = 0; i < strlen(yytext); i++){
		columnCount++;
		if(yytext[i] == '\n'){
			lineCount++;
			columnCount = 1;
		}
	}
}

[aA][nN][dD] {
	return(tokenMgr(AND));
}

[aA][rR][rR][aA][yY] {
	return(tokenMgr(ARRAY));
}

[bB][eE][gG][iI][nN] {
	return(tokenMgr(BEGAN));
}

[dD][iI][vV] {
	return(tokenMgr(DIV));
}

[dD][oO] {
	return(tokenMgr(DO));
}

[dD][oO][wW][nN][tT][oO] {
	return(tokenMgr(DOWNTO));
}

[eE][lL][sS][eE] {
	return(tokenMgr(ELSE));
}

[eE][nN][dD] {
	return(tokenMgr(END));
}

[fF][oO][rR] {
	return(tokenMgr(FOR));
}

[fF][uU][nN][cC][tT][iI][oO][nN] {
	return(tokenMgr(FUNCTION));
}

[iI][fF] {
	return(tokenMgr(IF));
}

[mM][oO][dD] {
	return(tokenMgr(MOD));
}

[nN][oO][tT] {
	return(tokenMgr(NOT));
}

[oO][fF] {
	return(tokenMgr(OF));
}

[oO][rR] {
	return(tokenMgr(OR));
}

[pP][rR][oO][cC][eE][dD][uU][rR][eE] {
	return(tokenMgr(PROCEDURE));
}

[pP][rR][oO][gG][rR][aA][mM] {
	return(tokenMgr(PROGRAM));
}

[rR][eE][pP][eE][aA][tT] {
	return(tokenMgr(REPEAT));
}

[tT][hH][eE][nN] {
	return(tokenMgr(THEN));
}

[tT][oO] {
	return(tokenMgr(TO));
}

[uU][nN][tT][iI][lL] {
	return(tokenMgr(UNTIL));
}

[vV][aA][rR] {
	return(tokenMgr(VAR));
}

[wW][hH][iI][lL][eE] {
	return(tokenMgr(WHILE));
}

"=" {
	return(tokenMgr(EQU));
}

"<>" {
	return(tokenMgr(NEQ));
}

"<" {
 	return(tokenMgr(LES));
}

"<=" {
 	return(tokenMgr(LEQ));
}

">" {
	return(tokenMgr(GRT));
}

">=" {
	return(tokenMgr(GEQ));
}

"+" {
	return(tokenMgr(PLUS));
 }

"-" {
	return(tokenMgr(MINUS));
}

"*" {
	return(tokenMgr(STAR));
}

"/" {
	return(tokenMgr(SLASH));
}

":=" {
	return(tokenMgr(ASSIGN));
}

"(" {
	return(tokenMgr(LPAREN));
}

")" {
	return(tokenMgr(RPAREN));
}

"[" {
	return(tokenMgr(LBRACKET));
}

"]" {
	return(tokenMgr(RBRACKET));
}

":" {
	return(tokenMgr(COLON));
}

";" {
 	return(tokenMgr(SEMICOLON));
}

"," {
	return(tokenMgr(COMMA));
}

"." {
	return(tokenMgr(PERIOD));
}

".." {
	return(tokenMgr(RANGE));
}

[_a-zA-Z][_a-zA-Z0-9]*						return tokenMgr(ID);

[0-9]+(\.[0-9]+)((e|E)[+\-]?[0-9]+)?		return tokenMgr(REALIT);
[0-9]+((e|E)[+\-]?[0-9]+)					return tokenMgr(REALIT);

[0-9]+										return(tokenMgr(INTLIT));

['](([^'])|('[^']'))+[']					return tokenMgr(CHRLIT);

. {
	return tokenMgr(ERROR);
}

%%

//--------------------------------------------------------------------
int tokenMgr(int t)
{ 	
	output << endl;
	output << setw(15) << "Token Code: " << t;
	output << "\t  Name: " << tokenMap.at(t);
	output << "\t  Line: " << lineCount;
	output << "\t  Column: " << columnCount;
	output << "\t  Spelling: " << (char*)yytext;
	
	columnCount += strlen(yytext);
	return t;
}

//--------------------------------------------------------------------
//Class Scanner implementation
//--------------------------------------------------------------------
//Constructor Scanner is used to redirect the input file stream from the
//keyboard to input file stream i.
//--------------------------------------------------------------------
Lexer::Lexer(FILE* i){
	yyin=i;
	tokenMap = {
		{AND, "AND"},
		{ARRAY, "ARRAY"},
		{BEGAN, "BEGIN"},
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
}
//--------------------------------------------------------------------
//Function lex calls yylex
//--------------------------------------------------------------------
int Lexer::lex(void){
	return yylex();
}
//--------------------------------------------------------------------
//Function getSpelling returns the spelling of the most recent token.
//--------------------------------------------------------------------
char* Lexer::getSpelling(void){
	return (char*)yytext;
}
//--------------------------------------------------------------------
//Function getLines returns the line position of the most recent token.
//--------------------------------------------------------------------
int Lexer::getLine(void){
	return lineCount;
}
//--------------------------------------------------------------------
//Function getColumn returns the column position of the most recent 
//token. 
//--------------------------------------------------------------------
int Lexer::getColumn(void){	
	return columnCount - strlen(yytext);
}