%{
//--------------------------------------------------------------------
//File pasmlex.l contains functions that accept the tokens of a Subset Pascal program.
//-------------------------------------------------------------------
// Author:	Mr. Cao Truong
// Student ID: *20500231
// E-Mail:	ctruong3@uco.edu
// Course:	CMSC 5023 – Programming Languages
// CRN:		22708, Spring 2022
// Project:	p04.1
// Due:		February 22, 2022
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
#include "pasmlex.h"
#include "pasmtkn.h"
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

[\r] {
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

[cC][uU][pP] {
	return(tokenMgr(CUP_O));
}

[cC][sS][pP] {
	return(tokenMgr(CSP_O));
}

[eE][nN][tT] {
	return(tokenMgr(ENT_O));
}

[mM][sS][tT] {
	return(tokenMgr(MST_O));
}

[rR][tT][nN] {
	return(tokenMgr(RTN_O));
}

[eE][qQ][uU] {
	return(tokenMgr(EQU_O));
}

[nN][eE][qQ] {
	return(tokenMgr(NEQ_O));
}

[gG][rR][tT] {
	return(tokenMgr(GRT_O));
}

[gG][eE][qQ] {
	return(tokenMgr(GEQ_O));
}

[lL][eE][sS] {
	return(tokenMgr(LES_O));
}

[lL][eE][qQ] {
	return(tokenMgr(LEQ_O));
}

[aA][dD][iI] {
	return(tokenMgr(ADI_O));
}

[sS][bB][iI] {
	return(tokenMgr(SBI_O));
}

[nN][gG][iI] {
	return(tokenMgr(NGI_O));
}

[mM][pP][iI] {
	return(tokenMgr(MPI_O));
}

[dD][vV][iI] {
	return(tokenMgr(DVI_O));
}

[mM][oO][dD] {
	return(tokenMgr(MOD_O));
}

[aA][bB][iI] {
	return(tokenMgr(ABI_O));
}

[sS][qQ][iI] {
	return(tokenMgr(SQI_O));
}

[iI][nN][cC] {
	return(tokenMgr(INC_O));
}

[dD][eE][cC] {
	return(tokenMgr(DEC_O));
}

[aA][dD][rR] {
	return(tokenMgr(ADR_O));
}

[sS][bB][rR] {
	return(tokenMgr(SBR_O));
}

[nN][gG][rR] {
	return(tokenMgr(NGR_O));
}

[mM][pP][rR] {
	return(tokenMgr(MPR_O));
}

[dD][vV][rR] {
	return(tokenMgr(DVR_O));
}

[aA][bB][rR] {
	return(tokenMgr(ABR_O));
}

[sS][qQ][rR] {
	return(tokenMgr(SQR_O));
}

[iI][oO][rR] {
	return(tokenMgr(IOR_O));
}

[aA][nN][dD] {
	return(tokenMgr(AND_O));
}

[xX][oO][rR] {
	return(tokenMgr(XOR_O));
}

[nN][oO][tT] {
	return(tokenMgr(NOT_O));
}

[iI][nN][nN] {
	return(tokenMgr(INN_O));
}

[uU][nN][iI] {
	return(tokenMgr(UNI_O));
}

[nN][tT][rR] {
	return(tokenMgr(NTR_O));
}

[dD][iI][fF] {
	return(tokenMgr(DIF_O));
}

[cC][mM][pP] {
	return(tokenMgr(CMP_O));
}

[sS][gG][sS] {
	return(tokenMgr(SGS_O));
}

[uU][jJ][pP] {
	return(tokenMgr(UJP_O));
}

[xX][jJ][pP] {
	return(tokenMgr(XJP_O));
}

[fF][jJ][pP] {
	return(tokenMgr(FJP_O));
}

[tT][jJ][pP] {
	return(tokenMgr(TJP_O));
}

[fF][lL][tT] {
	return(tokenMgr(FLT_O));
}

[fF][lL][oO] {
	return(tokenMgr(FLO_O));
}

[tT][rR][cC] {
	return(tokenMgr(TRC_O));
}

[rR][nN][dD] {
	return(tokenMgr(RND_O));
}

[cC][hH][rR] {
	return(tokenMgr(CHR_O));
}

[oO][rR][dD] {
	return(tokenMgr(ORD_O));
}

[sS][tT][pP] {
	return(tokenMgr(STP_O));
}

[lL][dD][aA] {
	return(tokenMgr(LDA_O));
}

[lL][dD][cC] {
	return(tokenMgr(LDC_O));
}

[lL][dD][iI] {
	return(tokenMgr(LDI_O));
}

[lL][vV][aA] {
	return(tokenMgr(LVA_O));
}

[lL][vV][bB] {
	return(tokenMgr(LVB_O));
}

[lL][vV][cC] {
	return(tokenMgr(LVC_O));
}

[lL][vV][iI] {
	return(tokenMgr(LVI_O));
}

[lL][vV][rR] {
	return(tokenMgr(LVR_O));
}

[lL][vV][sS] {
	return(tokenMgr(LVS_O));
}

[lL][vV][tT] {
	return(tokenMgr(LVT_O));
}

[sS][tT][iI] {
	return(tokenMgr(STI_O));
}

[iI][xX][aA] {
	return(tokenMgr(IXA_O));
}

[rR][dD][bB] {
	return(tokenMgr(RDB_F));
}

[rR][dD][cC] {
	return(tokenMgr(RDC_F));
}

[rR][dD][iI] {
	return(tokenMgr(RDI_F));
}

[rR][dD][rR] {
	return(tokenMgr(RDR_F));
}

[rR][lL][nN] {
	return(tokenMgr(RLN_F));
}

[wW][rR][bB] {
	return(tokenMgr(WRB_F));
}

[wW][rR][cC] {
	return(tokenMgr(WRC_F));
}

[wW][rR][iI] {
	return(tokenMgr(WRI_F));
}

[wW][rR][eE] {
	return(tokenMgr(WRE_F));
}

[wW][rR][fF] {
	return(tokenMgr(WRF_F));
}

[wW][rR][sS] {
	return(tokenMgr(WRS_F));
}

[wW][rR][tT] {
	return(tokenMgr(WRT_F));
}

[wW][lL][nN] {
	return(tokenMgr(WLN_F));
}

[sS][qQ][tT] {
	return(tokenMgr(SQT_F));
}

[lL][nN] {
	return(tokenMgr(LN_F));
}

[eE][xX][pP] {
	return(tokenMgr(EXP_F));
}

[sS][pP] {
	return(tokenMgr(SP_R));
}

[eE][pP] {
	return(tokenMgr(EP_R));
}

[mM][pP] {
	return(tokenMgr(MP_R));
}

[pP][cC] {
	return(tokenMgr(PC_R));
}

[nN][pP] {
	return(tokenMgr(NP_R));
}

[aA] {
	return(tokenMgr(A_T));
}

[bB] {
	return(tokenMgr(B_T));
}

[cC] {
	return(tokenMgr(C_T));
}

[iI] {
	return(tokenMgr(I_T));
}

[rR] {
	return(tokenMgr(R_T));
}

[sS] {
	return(tokenMgr(S_T));
}

[tT] {
	return(tokenMgr(T_T));
}

[pP] {
	return(tokenMgr(P_T));
}

[xX] {
	return(tokenMgr(X_T));
}

[L][0-9]+       							return tokenMgr(LABEL);
"#define"       							return tokenMgr(DEFINE);
[+\-]?[0-9]+ 								return tokenMgr(INTLIT);
[0-9]+(\.[0-9]+)([eE][+\-]?[0-9]+)?			return tokenMgr(REALIT);
[0-9]+([eE][+\-]?[0-9]+)					return tokenMgr(REALIT);
'([^']|(''))'                    			return tokenMgr(CHRLIT);
'([^']|('')){2,}'                   		return tokenMgr(STRLIT);
[a-z]+										return tokenMgr(ID);

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
//Class Lexer implementation
//--------------------------------------------------------------------
//Constructor Lexer is used to redirect the input file stream from the
//keyboard to input file stream i.
//--------------------------------------------------------------------
Lexer::Lexer(FILE* i){
	yyin=i;	
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