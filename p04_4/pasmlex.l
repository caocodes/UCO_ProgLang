%{
//--------------------------------------------------------------------
//File pasmlex.l contains functions that accept the tokens of a Subset Pascal program.
//-------------------------------------------------------------------
// Author 1: Prantosh Neupane
// Student ID: *20514054
// E-Mail:	pneupane4@uco.edu
// CRN:		21808, Spring 2022
// Author 2: Cao Truong
// Student ID: *20500231
// E-Mail:	ctruong3@uco.edu
// CRN:		22708, Spring 2022
// Course:	CMSC 5023 – Programming Languages
// Project:	p04.4
// Due:		March 24, 2022
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
#include "pasmlex.h"
#include "pasmtkn.h"
#include "pasm_constants.h"
//--------------------------------------------------------------------
//Externals 
//--------------------------------------------------------------------
extern ofstream trace;
//--------------------------------------------------------------------
//Global Variables
//--------------------------------------------------------------------
int lineCount = 1;
int columnCount = 1;
map<int, string> tokenMap;
map<int, string> tokenSpelling;
map<string, int> keywords;
PasmConstants pasmConstants;
//--------------------------------------------------------------------
//Function prototypes, class fields
//--------------------------------------------------------------------
int real(void);
int chrlit(void);
int label(void);
int intlit(void);
int strlit(void);
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

[\r] {
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

[L][0-9]+       							return tokenMgr(label());
"#define"       							return tokenMgr(DEFINE);
[+\-]?[0-9]+ 								return tokenMgr(intlit());
[+\-]?[0-9]+(\.[0-9]+)([eE][+\-]?[0-9]+)?	return tokenMgr(real());
[+\-]?[0-9]+([eE][+\-]?[0-9]+)				return tokenMgr(real());
'([^']|(''))'                    			return tokenMgr(chrlit());
'([^']|('')){2,}'                   		return tokenMgr(strlit());
[a-z]+										return tokenMgr(ID);

. {
	return tokenMgr(ERROR);
}

%%

//--------------------------------------------------------------------
int tokenMgr(int t)
{ 	
	if(CUP_O <= t && t <= IXA_O) {
		yylval.opcode = t - CUP_O;
	} else if(RDB_F <= t && t <= EXP_F) {
		yylval.stdfunc = t - RDB_F;
	} else if(SP_R <= t && t <= NP_R) {
		yylval.pregister = t - SP_R;
	} else if(A_T <= t && t <= X_T) {
		yylval.ptype = t - A_T;
	}

	trace << endl;
	trace << setfill(' ') << dec << "Token: " <<  tokenMap.at(t) << " (" << t << ")";
	trace << "\t  Line: " << lineCount << ", Col: " << columnCount;
	string spelling((char*)yytext);
	trace << "\t  Spelling: " << spelling;
	
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
	tokenMap = {
		{CUP_O, "CUP_O"},
		{CSP_O, "CSP_O"},
		{ENT_O, "ENT_O"},
		{MST_O, "MST_O"},
		{RTN_O, "RTN_O"},
		{EQU_O, "EQU_O"},
		{NEQ_O, "NEQ_O"},
		{GRT_O, "GRT_O"},
		{GEQ_O, "GEQ_O"},
		{LES_O, "LES_O"},
		{LEQ_O, "LEQ_O"},
		{ADI_O, "ADI_O"},
		{SBI_O, "SBI_O"},
		{NGI_O, "NGI_O"},
		{MPI_O, "MPI_O"},
		{DVI_O, "DVI_O"},
		{MOD_O, "MOD_O"},
		{ABI_O, "ABI_O"},
		{SQI_O, "SQI_O"},
		{INC_O, "INC_O"},
		{DEC_O, "DEC_O"},
		{ADR_O, "ADR_O"},
		{SBR_O, "SBR_O"},
		{NGR_O, "NGR_O"},
		{MPR_O, "MPR_O"},
		{DVR_O, "DVR_O"},
		{ABR_O, "ABR_O"},
		{SQR_O, "SQR_O"},
		{IOR_O, "IOR_O"},
		{AND_O, "AND_O"},
		{XOR_O, "XOR_O"},
		{NOT_O, "NOT_O"},
		{INN_O, "INN_O"},
		{UNI_O, "UNI_O"},
		{NTR_O, "NTR_O"},
		{DIF_O, "DIF_O"},
		{CMP_O, "CMP_O"},
		{SGS_O, "SGS_O"},
		{UJP_O, "UJP_O"},
		{XJP_O, "XJP_O"},
		{FJP_O, "FJP_O"},
		{TJP_O, "TJP_O"},
		{FLT_O, "FLT_O"},
		{FLO_O, "FLO_O"},
		{TRC_O, "TRC_O"},
		{RND_O, "RND_O"},
		{CHR_O, "CHR_O"},
		{ORD_O, "ORD_O"},
		{STP_O, "STP_O"},
		{LDA_O, "LDA_O"},
		{LDC_O, "LDC_O"},
		{LDI_O, "LDI_O"},
		{LVA_O, "LVA_O"},
		{LVB_O, "LVB_O"},
		{LVC_O, "LVC_O"},
		{LVI_O, "LVI_O"},
		{LVR_O, "LVR_O"},
		{LVS_O, "LVS_O"},
		{LVT_O, "LVT_O"},
		{STI_O, "STI_O"},
		{IXA_O, "IXA_O"},
		{RDB_F, "RDB_F"},
		{RDC_F, "RDC_F"},
		{RDI_F, "RDI_F"},
		{RDR_F, "RDR_F"},
		{RLN_F, "RLN_F"},
		{WRB_F, "WRB_F"},
		{WRC_F, "WRC_F"},
		{WRI_F, "WRI_F"},
		{WRE_F, "WRE_F"},
		{WRF_F, "WRF_F"},
		{WRS_F, "WRS_F"},
		{WRT_F, "WRT_F"},
		{WLN_F, "WLN_F"},
		{SQT_F, "SQT_F"},
		{LN_F, "LN_F"},
		{EXP_F, "EXP_F"},
		{SP_R, "SP_R"},
		{EP_R, "EP_R"},
		{MP_R, "MP_R"},
		{PC_R, "PC_R"},
		{NP_R, "NP_R"},
		{A_T, "A_T"},
		{B_T, "B_T"},
		{C_T, "C_T"},
		{I_T, "I_T"},
		{R_T, "R_T"},
		{S_T, "S_T"},
		{T_T, "T_T"},
		{P_T, "P_T"},
		{X_T, "X_T"},
		{LABEL, "LABEL"},
		{DEFINE, "DEFINE"},
		{INTLIT, "INTLIT"},
		{REALIT, "REALIT"},
		{CHRLIT, "CHRLIT"},
		{STRLIT, "STRLIT"},
		{ID, "ID"},
		{ERROR, "ERROR"},
	};

	tokenSpelling = {
		{CUP_O,"cup"},
		{CSP_O,"csp"},
		{ENT_O,"ent"},
		{MST_O,"mst"},
		{RTN_O,"rtn"},
		{EQU_O,"equ"},
		{NEQ_O,"neq"},
		{GRT_O,"grt"},
		{GEQ_O,"geq"},
		{LES_O,"les"},
		{LEQ_O,"leq"},
		{ADI_O,"adi"},
		{SBI_O,"sbi"},
		{NGI_O,"ngi"},
		{MPI_O,"mpi"},
		{DVI_O,"dvi"},
		{MOD_O,"mod"},
		{ABI_O,"abi"},
		{SQI_O,"sqi"},
		{INC_O,"inc"},
		{DEC_O,"dec"},
		{ADR_O,"adr"},
		{SBR_O,"sbr"},
		{NGR_O,"ngr"},
		{MPR_O,"mpr"},
		{DVR_O,"dvr"},
		{ABR_O,"abr"},
		{SQR_O,"sqr"},
		{IOR_O,"ior"},
		{AND_O,"and"},
		{XOR_O,"xor"},
		{NOT_O,"not"},
		{INN_O,"inn"},
		{UNI_O,"uni"},
		{NTR_O,"ntr"},
		{DIF_O,"dif"},
		{CMP_O,"cmp"},
		{SGS_O,"sgs"},
		{UJP_O,"ujp"},
		{XJP_O,"xjp"},
		{FJP_O,"fjp"},
		{TJP_O,"tjp"},
		{FLT_O,"flt"},
		{FLO_O,"flo"},
		{TRC_O,"trc"},
		{RND_O,"rnd"},
		{CHR_O,"chr"},
		{ORD_O,"ord"},
		{STP_O,"stp"},
		{LDA_O,"lda"},
		{LDC_O,"ldc"},
		{LDI_O,"ldi"},
		{LVA_O,"lva"},
		{LVB_O,"lvb"},
		{LVC_O,"lvc"},
		{LVI_O,"lvi"},
		{LVR_O,"lvr"},
		{LVS_O,"lvs"},
		{LVT_O,"lvt"},
		{STI_O,"sti"},
		{IXA_O,"ixa"},
		{RDB_F,"rdb"},
		{RDC_F,"rdc"},
		{RDI_F,"rdi"},
		{RDR_F,"rdr"},
		{RLN_F,"rln"},
		{WRB_F,"wrb"},
		{WRC_F,"wrc"},
		{WRI_F,"wri"},
		{WRE_F,"wre"},
		{WRF_F,"wrf"},
		{WRS_F,"wrs"},
		{WRT_F,"wrt"},
		{WLN_F,"wln"},
		{SQT_F,"sqt"},
		{LN_F,"ln"},
		{EXP_F,"exp"},
		{SP_R,"sp"},
		{EP_R,"ep"},
		{MP_R,"mp"},
		{PC_R,"pc"},
		{NP_R,"np"},
		{A_T,"a"},
		{B_T,"b"},
		{C_T,"c"},
		{I_T,"i"},
		{R_T,"r"},
		{S_T,"s"},
		{T_T,"t"},
		{P_T,"p"},
		{X_T,"x"},
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

int real(void)
{   yylval.realit = atof(yytext);
    return REALIT;
}

int label(void) {
	yylval.strlit = strdup(yytext);
	return LABEL;
}

int intlit(void) {
	yylval.intlit = atoi(yytext);
	return INTLIT;
}

int chrlit(void) {
	yylval.chrlit = yytext[0];
	return CHRLIT;
}

int strlit(void) {
	yylval.strlit = strdup(yytext);
	return STRLIT;
}



