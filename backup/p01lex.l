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
//Function prototypes
//--------------------------------------------------------------------
int tokenMgr(int T);
int tokencode;
int lines;
int cols;

%}
%%

[ \t]+ {
 cols += strlen(yytext);
}
[\n] {
 lines++;
 cols=1;
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
"{" {
 return(tokenMgr(LCURLY));
 }
"}" {
 return(tokenMgr(RCURLY));
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
"'" {
 return(tokenMgr(APOSTROPHE));
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
 [{][^}]*[}] {
	for(int a=0; a < strlen(yytext); a++){
		cols++;
		if(yytext[a]=='\n'){
			cols=1;
			lines++;
		}
	}
}
[0-9]+								return(tokenMgr(INTLIT));

[0-9]+([Ee][+-]?[0-9]+)?			return tokenMgr(REALIT);

[0-9]+\.[0-9]+([Ee][+-]?[0-9]+)?	return tokenMgr(REALIT);

[0-9]*\.[0-9]*([Ee][+-]?[0-9]+)?	return tokenMgr(REALIT);
[']([^']|(\'\'))[']					return tokenMgr(CHRLIT);
[_a-zA-Z][_a-zA-Z0-9]*				return tokenMgr(ID);
. {
 return tokenMgr(ERROR);
 }
%%
//--------------------------------------------------------------------
int tokenMgr(int t)
{ 	
	cols += strlen(yytext);
	return t;
}
//--------------------------------------------------------------------
//Class Lexer implementation
//--------------------------------------------------------------------
//Constructor Lexer is used to redirect the input file stream from the
//keyboard to input file stream i.
//--------------------------------------------------------------------
Lexer::Lexer(FILE* i){
	yyin=i;
	
	}
//--------------------------------------------------------------------
//Function Lex calls yylex
//--------------------------------------------------------------------
int Lexer::getScan(void){
	tokencode=yylex();
	return tokencode;
}
//--------------------------------------------------------------------
//Function FetchSpelling returns a pointer to the spelling of the most
//recent token.
//--------------------------------------------------------------------
char* Lexer::FetchSpelling(void){
	return (char*)yytext;
}
//--------------------------------------------------------------------
//Function getLines returns the line number of the most recent token
//--------------------------------------------------------------------
int Lexer::getLines(void){
	return lines;
}
//--------------------------------------------------------------------
//Function getColumns returns the column number of the most recent token 
//--------------------------------------------------------------------
int Lexer::getColumns(void){	
	return cols - strlen(yytext);
}
//-----------------------End of Lex Definition------------------------