%{
//--------------------------------------------------------------------
//File p01lex.l contains functions that accept the tokens of a Subset Pascal program.
//-------------------------------------------------------------------
// Author:	Mr. Cao Truong
// Student ID: *20500231
// E-Mail:	ctruong3@uco.edu
// Course:	CMSC 5023 – Programming Languages
// CRN:		22708, Spring 2022
// Project:	p01
// Due:		February 3, 2022
// Project Account Number: tt035
//--------------------------------------------------------------------
// C++ Library Include Files
//--------------------------------------------------------------------
#include <string>
#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;
//--------------------------------------------------------------------
// Application Includes
//--------------------------------------------------------------------
#include "p01lex.h"
#include "p01tkn.h"
//--------------------------------------------------------------------
//Function prototypes, class fields
//--------------------------------------------------------------------
int tokenMgr(int token);
int lineCount;
int columnCount;

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

[\{][^{]*[\}] {
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
	return(tokenMgr(BEGIN));
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

['][^']+[']									return tokenMgr(CHRLIT);

. {
	return tokenMgr(ERROR);
}

%%

//--------------------------------------------------------------------
int tokenMgr(int t)
{ 	
	columnCount += strlen(yytext);
	return t;
}

//--------------------------------------------------------------------
//Class Scanner implementation
//--------------------------------------------------------------------
//Constructor Scanner is used to redirect the input file stream from the
//keyboard to input file stream i.
//--------------------------------------------------------------------
Scanner::Scanner(FILE* i){
	yyin=i;	
}
//--------------------------------------------------------------------
//Function lex calls yylex
//--------------------------------------------------------------------
int Scanner::lex(void){
	return yylex();
}
//--------------------------------------------------------------------
//Function getSpelling returns the spelling of the most recent token.
//--------------------------------------------------------------------
char* Scanner::getSpelling(void){
	return (char*)yytext;
}
//--------------------------------------------------------------------
//Function getLines returns the line position of the most recent token.
//--------------------------------------------------------------------
int Scanner::getLine(void){
	return lineCount;
}
//--------------------------------------------------------------------
//Function getColumn returns the column position of the most recent 
//token. 
//--------------------------------------------------------------------
int Scanner::getColumn(void){	
	return columnCount - strlen(yytext);
}