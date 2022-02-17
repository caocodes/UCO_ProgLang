%{
//--------------------------------------------------------------------
// File p01.l defines a prototype scanner for the micro language.
// The scanner definition is a lex specification.
//-------------------------------------------------------------------
// Author: Thomas R. Turner
// E-Mail: trturner@ucok.edu
// Date: March, 2003
//--------------------------------------------------------------------
//Copyright March, 2003 by Thomas R. Turner.
//Do not reproduce without permission from Thomas R. Turner
//--------------------------------------------------------------------
//--------------------------------------------------------------------
// Standard C and C++ Library Include Files
//--------------------------------------------------------------------
#include <string>
#include <iostream>
#include <fstream>
#include <cstdio>
//--------------------------------------------------------------------
// Application Includes
//--------------------------------------------------------------------
#include "p01lex.h"
//--------------------------------------------------------------------
//Token definitions
//--------------------------------------------------------------------
#include "p01tkn.h"
//--------------------------------------------------------------------
//Namespaces
//--------------------------------------------------------------------
using namespace std;
//--------------------------------------------------------------------
//Externals
//--------------------------------------------------------------------
//--------------------------------------------------------------------
//Global Variables
//--------------------------------------------------------------------
int line = 1;
int col = 1;
int TokenMgr(int t); //Token post processing
%}

%%
\n                         {line++, col = 1;}
[ \t]+ ;                   {col++;}
[aA][nN][dD]               return TokenMgr(AND);
[aA][rR][rR][yY]           return TokenMgr(ARRAY);
[bB][eE][gG][aA][nN]       return TokenMgr(BEGAN);
[dD][iI][vV]               return TokenMgr(DIV);
[dD][oO]                   return TokenMgr(DO);
[dD][oO][wW][nN][tT][oO]   return TokenMgr(DOWNTO);
[eE][lL][sS][eE]           return TokenMgr(ELSE);
[eE][nN][dD]               return TokenMgr(END);
[fF][oO][rR]               return TokenMgr(FOR);
[fF][uU][nN][cC][tT][iI][oO][nN]    return TokenMgr(FUNCTION);
[iI][fF]                   return TokenMgr(IF);
[mM][oO][dD]               return TokenMgr(MOD);
[nN][oO][tT]               return TokenMgr(NOT);
[oO][fF]                   return TokenMgr(OF);
[oO][rR]                   return TokenMgr(OR);
[pP][rR][oO][cC][eE][dD][uU][rR][eE]    return TokenMgr(PROCEDURE);
[pP][rR][oO][gG][rR][aA][mM]            return TokenMgr(PROGRAM);
[rR][eE][pP][eE][aA][tT]                return TokenMgr(REPEAT);
[tT][hH][eE][nN]           return TokenMgr(THEN);
[tT][oO]                   return TokenMgr(TO);
[uU][nN][tT][iI][lL]       return TokenMgr(UNTIL);
[vV][aA][rR]               return TokenMgr(VAR);
[wW][hH][iI][lL][eE]       return TokenMgr(WHILE);

[_a-zA-Z][_a-zA-Z0-9]*     return TokenMgr(ID);
[0-9]+                     return TokenMgr(INTLIT);
"="                        return TokenMgr(EQU);
"<>"                       return TokenMgr(NEQ);
"<"                        return TokenMgr(LES);
"<="                       return TokenMgr(LEQ);
">"                        return TokenMgr(GRT);
">="                       return TokenMgr(GEQ);
"+"                        return TokenMgr(PLUS);
"-"                        return TokenMgr(MINUS);
"*"                        return TokenMgr(STAR);
"/"                        return TokenMgr(SLASH);
":="                       return TokenMgr(ASSIGN);
"("                        return TokenMgr(LPAREN);
")"                        return TokenMgr(RPAREN);
"["                        return TokenMgr(LBRACKET);
"]"                        return TokenMgr(RBRACKET);
":"                        return TokenMgr(COLON);
";"                        return TokenMgr(SEMICOLON);
","                        return TokenMgr(COMMA);
"."                        return TokenMgr(PERIOD);
".."                       return TokenMgr(RANGE);
.                          return TokenMgr(ERROR);
%%
//--------------------------------------------------------------------
//Class Lexer implementation
//--------------------------------------------------------------------
//Function TokenMgr processes the token after it has been recognized
//--------------------------------------------------------------------
int TokenMgr(int t)
{
if (t!=ID) return t;
if ((string)yytext=="begin") return BEGAN;
if ((string)yytext=="end") return END;
if ((string)yytext=="read") return READ;
if ((string)yytext=="write") return WRITE;
if((string)yytext == "readln") return READLN;
if((string)yytext == "gcd") return GCD;
if((string)yytext == "example") return EXAMPLE;
return ID;
}
//--------------------------------------------------------------------
//Constructor Lexer is used to redirect the input file stream from the
//keyboard to input file stream i.
//--------------------------------------------------------------------
Lexer::Lexer(FILE* i)
{ yyin=i;
}
//--------------------------------------------------------------------
//Function Lex calls yylex
//--------------------------------------------------------------------
int Lexer::Lex(void)
{   tokencode=yylex();
    return tokencode;
}
//--------------------------------------------------------------------
//Function FetchSpelling returns a pointer to the spelling of the most
//recent token.
//--------------------------------------------------------------------
char* Lexer::FetchSpelling(void)
{
    return (char*)yytext;
}
//--------------------------------------------------------------------
//Function FetchTokenCode returns the code of the most recent token
//--------------------------------------------------------------------
int Lexer::FetchTokenCode(void)
{   return tokencode;
}
//--------------------------------------------------------------------
//Function StoreTokenCode records the most recent token code
//--------------------------------------------------------------------
void Lexer::StoreTokenCode(int T)
{ tokencode=T;
}
int Lexer::FetchLine(void)
{   return line;
}
int Lexer::FetchCol(void)
{   return col;
}
//-----------------------End of Lex Definition------------------------
