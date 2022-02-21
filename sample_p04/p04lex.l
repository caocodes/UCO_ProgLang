%{
//--------------------------------------------------------------------
// File p04lex.l defines a prototype scanner for the pasm language.
// The scanner definition is a lex specification.
//-------------------------------------------------------------------
// Team Identification Block
// Author 1: 	Daniel L. Tomei
// Student ID: 	*20491050
// E-Mail: 	dtomei@uco.edu
// CRN: 	13855, Fall, 2020
// Author 2: 	Aditi Panvelkar
// Student ID: 	*20490610
// E-Mail: 	apanvelkar@uco.edu
// CRN: 	13855, Fall, 2020
// Course: 	CMSC 5023 � Programming Languages
// Project: 	p04
// Due: 	December 10, 2020
// Project Account Number: tt162
//--------------------------------------------------------------------
// Standard C and C++ Library Include Files
//--------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdio>
#include <map>
using namespace std;
//--------------------------------------------------------------------
// Application Includes
//--------------------------------------------------------------------
#include "p04lex.h"
#include "p04tkn.h"
//--------------------------------------------------------------------
//Externals
//--------------------------------------------------------------------
extern ofstream tfs;    //Trace file stream tfs
//--------------------------------------------------------------------
//Global Variables
//--------------------------------------------------------------------
static map<string,int> RW;      //RW - Reserve Words
                                //RW is a table of reserve words
                                //and their corresponding
                                //token codes.
static map<int,string> TokenName;
int line=1;                     //Current line number
int col=1;                      //Current column number
//--------------------------------------------------------------------
//Functions
//--------------------------------------------------------------------
int TokenMgr(int t);                //Token post processing
int ReserveWord(char* s);           //Determines if string s is
                                    //a reserve word
void TokenTrace(int t);             //Records token t in the trace file
void PopulateRWMap(void);           //Create the table of reserve
                                    //words and their token codes.
void PopulateTokenNameMap(void);    //Create a table of names for tokens
                                    //to be printed in the TokenTrace
void ToLower(char* d,char* s);      //Coerce the characters of string s
                                    //to lower case. Put the result
                                    //in string d.
//--------------------------------------------------------------------
//Exceptions
//--------------------------------------------------------------------
//A BadCharacterException is thrown when a character outside the
//defined set of characters for the Pascal language appears in the
//source.
//--------------------------------------------------------------------
struct BadCharacterException{    
    BadCharacterException(char p,int l,int c)
    {
        cout << endl;
        cout << "line(" << l << ") col (" << c << ")" ;
        cout << "Lexical error: ";
        cout << "Illegal character |" << p << "| ASCII code=" << (int)p;
        cout << endl;
    }
};
%}
%%
[\n]                {
                        line++;
                        col=1;
                    }
[\r]                ;
[\{][^{]*[^}][\}]   ;
[ \t]+              {
                        col+=yyleng;
                    }
[+\-]{0,1}[0-9]+                            return TokenMgr(INTLIT);
[']([^']+|('){2}+){2,}[']                   return TokenMgr(STRLIT);
[']([^']+|('){2}+){1}[']                    return TokenMgr(CHRLIT);
[0-9]+(\.[0-9]+)((e|E)[+\-]?[0-9]+)?    return TokenMgr(REALIT);
[L][0-9]+       return TokenMgr(LABEL);
"#define"       return TokenMgr(DEFINE);
[_a-zA-Z]*      return TokenMgr(ID);
.               {
                    throw BadCharacterException(*yytext, line, col);
                }
%%
//--------------------------------------------------------------------
//Class Lexer implementation
//--------------------------------------------------------------------
//Function ReserveWord determines if the input string is a reserve
//word and if it is the function returns the corresponding tokencode.
//Otherwise it returns the tokencode ID.
//--------------------------------------------------------------------
int ReserveWord(char* s)
{
    int t=RW[(string)s];
    if (t>0) return t; 
    else return ID;
}
//--------------------------------------------------------------------
//Function ToLower coerces the characters of string s to lower case
//and stores the result in string d.
//--------------------------------------------------------------------
void ToLower(char* d,char* s)
{
    strcpy(d,s);
    for (int a=0;a<strlen(d);a++) d[a]=tolower(d[a]);
}
//--------------------------------------------------------------------
//Function TokenMgr processes the token after it has been recognized
//--------------------------------------------------------------------
int TokenMgr(int t)
{
    col+=yyleng;    //Add the length of the current
                    //Token to the column position
    if (t==ID) {
        char* s = new char[yyleng];     //Create storage for a lower case
                                        //version of the token
        ToLower(s,yytext);      //Coerce the token to lower case
        yylval.token= new string(s);    //yylval is the yacc variable
                                        //associated with the %union
                                        //directive.  Member token was
                                        //declared to have the semantic
                                        //value for tokens.
        t=ReserveWord(s);   //Determine if the ID is a reserve word
    }
    TokenTrace(t);      //Record the current token in the trace file
    return t;
}
//--------------------------------------------------------------------
//-----------------------------------------------------------------------
//Function TokenTrace records the attributes of the input token t
//in the trace file.
//-----------------------------------------------------------------------
void TokenTrace(int tkn)
{
    tfs << endl;
    tfs << "Token:Code=" << tkn;
    tfs << " Name=" << setw(10) << TokenName[tkn];
    tfs << " line =" << setw(4) << line;
    tfs << " col =" << setw(4) << col-yyleng;
    tfs << " Spelling=\"" << yytext << "\"";
}
//--------------------------------------------------------------------
//Function PopulateRWMap assigns values to the map, RW, such that each
//reserve word is given its associated tokencode.
//--------------------------------------------------------------------
void PopulateRWMap(void)
{
    RW["cup"    ]=CUP_O;
    RW["csp"    ]=CSP_O;
    RW["ent"    ]=ENT_O;
    RW["mst"    ]=MST_O;
    RW["rtn"    ]=RTN_O;
    RW["equ"    ]=EQU_O;
    RW["neq"    ]=NEQ_O;
    RW["grt"    ]=GRT_O;
    RW["geq"    ]=GEQ_O;
    RW["les"    ]=LES_O;
    RW["leq"    ]=LEQ_O;
    RW["adi"    ]=ADI_O;
    RW["sbi"    ]=SBI_O;
    RW["ngi"    ]=NGI_O;
    RW["mpi"    ]=MPI_O;
    RW["dvi"    ]=DVI_O;
    RW["mod"    ]=MOD_O;
    RW["abi"    ]=ABI_O;
    RW["sqi"    ]=SQI_O;
    RW["inc"    ]=INC_O;
    RW["dec"    ]=DEC_O;
    RW["adr"    ]=ADR_O;
    RW["sbr"    ]=SBR_O;
    RW["ngr"    ]=NGR_O;
    RW["mpr"    ]=MPR_O;
    RW["dvr"    ]=DVR_O;
    RW["abr"    ]=ABR_O;
    RW["sqr"    ]=SQR_O;
    RW["ior"    ]=IOR_O;
    RW["and"    ]=AND_O;
    RW["xor"    ]=XOR_O;
    RW["not"    ]=NOT_O;
    RW["inn"    ]=INN_O;
    RW["uni"    ]=UNI_O;
    RW["int"    ]=NTR_O;
    RW["dif"    ]=DIF_O;
    RW["cmp"    ]=CMP_O;
    RW["sgs"    ]=SGS_O;
    RW["ujp"    ]=UJP_O;
    RW["xjp"    ]=XJP_O;
    RW["fjp"    ]=FJP_O;
    RW["tjp"    ]=TJP_O;
    RW["flt"    ]=FLT_O;
    RW["flo"    ]=FLO_O;
    RW["trc"    ]=TRC_O;
    RW["rnd"    ]=RND_O;
    RW["chr"    ]=CHR_O;
    RW["ord"    ]=ORD_O;
    RW["stp"    ]=STP_O;
    RW["lda"    ]=LDA_O;
    RW["ldc"    ]=LDC_O;
    RW["ldi"    ]=LDI_O;
    RW["lva"    ]=LVA_O;
    RW["lvb"    ]=LVB_O;
    RW["lvc"    ]=LVC_O;
    RW["lvi"    ]=LVI_O;
    RW["lvr"    ]=LVR_O;
    RW["lvs"    ]=LVS_O;
    RW["lvt"    ]=LVT_O;
    RW["sti"    ]=STI_O;
    RW["ixa"    ]=IXA_O;
    RW["rdb"    ]=RDB_F;
    RW["rdc"    ]=RDC_F;
    RW["rdi"    ]=RDI_F;
    RW["rdr"    ]=RDR_F;
    RW["rln"    ]=RLN_F;
    RW["wrb"    ]=WRB_F;
    RW["wrc"    ]=WRC_F;
    RW["wri"    ]=WRI_F;
    RW["wre"    ]=WRE_F;
    RW["wrf"    ]=WRF_F;
    RW["wrs"    ]=WRS_F;
    RW["wrt"    ]=WRT_F;
    RW["wln"    ]=WLN_F;
    RW["sqt"    ]=SQT_F;
    RW["ln"     ]=LN_F;
    RW["exp"    ]=EXP_F;
    RW["sp"     ]=SP_R;
    RW["ep"     ]=EP_R;
    RW["mp"     ]=MP_R;
    RW["pc"     ]=PC_R;
    RW["np"     ]=NP_R;
    RW["a"      ]=A_T;
    RW["b"      ]=B_T;
    RW["c"      ]=C_T;
    RW["i"      ]=I_T;
    RW["r"      ]=R_T;
    RW["s"      ]=S_T;
    RW["t"      ]=T_T;
    RW["p"      ]=P_T;
    RW["x"      ]=X_T;
}

void PopulateTokenNameMap(void)
{
    TokenName[CUP_O     ] = "CUP_O";
    TokenName[CSP_O     ] = "CSP_O";
    TokenName[ENT_O     ] = "ENT_O";
    TokenName[MST_O     ] = "MST_O";
    TokenName[RTN_O     ] = "RTN_O";
    TokenName[EQU_O     ] = "EQU_O";
    TokenName[NEQ_O     ] = "NEQ_O";
    TokenName[GRT_O     ] = "GRT_O";
    TokenName[GEQ_O     ] = "GEQ_O";
    TokenName[LES_O     ] = "LES_O";
    TokenName[LEQ_O     ] = "LEQ_O";
    TokenName[ADI_O     ] = "ADI_O";
    TokenName[SBI_O     ] = "SBI_O";
    TokenName[NGI_O     ] = "NGI_O";
    TokenName[MPI_O     ] = "MPI_O";
    TokenName[DVI_O     ] = "DVI_O";
    TokenName[MOD_O     ] = "MOD_O";
    TokenName[ABI_O     ] = "ABI_O";
    TokenName[SQI_O     ] = "SQI_O";
    TokenName[INC_O     ] = "INC_O";
    TokenName[DEC_O     ] = "DEC_O";
    TokenName[ADR_O     ] = "ADR_O";
    TokenName[SBR_O     ] = "SBR_O";
    TokenName[NGR_O     ] = "NGR_O";
    TokenName[MPR_O     ] = "MPR_O";
    TokenName[DVR_O     ] = "DVR_O";
    TokenName[ABR_O     ] = "ABR_O";
    TokenName[SQR_O     ] = "SQR_O";
    TokenName[IOR_O     ] = "IOR_O";
    TokenName[AND_O     ] = "AND_O";
    TokenName[XOR_O     ] = "XOR_O";
    TokenName[NOT_O     ] = "NOT_O";
    TokenName[INN_O     ] = "INN_O";
    TokenName[UNI_O     ] = "UNI_O";
    TokenName[NTR_O     ] = "NTR_O";
    TokenName[DIF_O     ] = "DIF_O";
    TokenName[CMP_O     ] = "CMP_O";
    TokenName[SGS_O     ] = "SGS_O";
    TokenName[UJP_O     ] = "UJP_O";
    TokenName[XJP_O     ] = "XJP_O";
    TokenName[FJP_O     ] = "FJP_O";
    TokenName[TJP_O     ] = "TJP_O";
    TokenName[FLT_O     ] = "FLT_O";
    TokenName[FLO_O     ] = "FLO_O";
    TokenName[TRC_O     ] = "TRC_O";
    TokenName[RND_O     ] = "RND_O";
    TokenName[CHR_O     ] = "CHR_O";
    TokenName[ORD_O     ] = "ORD_O";
    TokenName[STP_O     ] = "STP_O";
    TokenName[LDA_O     ] = "LDA_O";
    TokenName[LDC_O     ] = "LDC_O";
    TokenName[LDI_O     ] = "LDI_O";
    TokenName[LVA_O     ] = "LVA_O";
    TokenName[LVB_O     ] = "LVB_O";
    TokenName[LVC_O     ] = "LVC_O";
    TokenName[LVI_O     ] = "LVI_O";
    TokenName[LVR_O     ] = "LVR_O";
    TokenName[LVS_O     ] = "LVS_O";
    TokenName[LVT_O     ] = "LVT_O";
    TokenName[STI_O     ] = "STI_O";
    TokenName[IXA_O     ] = "IXA_O";
    TokenName[RDB_F     ] = "RDB_F";
    TokenName[RDC_F     ] = "RDC_F";
    TokenName[RDI_F     ] = "RDI_F";
    TokenName[RDR_F     ] = "RDR_F";
    TokenName[RLN_F     ] = "RLN_F";
    TokenName[WRB_F     ] = "WRB_F";
    TokenName[WRC_F     ] = "WRC_F";
    TokenName[WRI_F     ] = "WRI_F";
    TokenName[WRE_F     ] = "WRE_F";
    TokenName[WRF_F     ] = "WRF_F";
    TokenName[WRS_F     ] = "WRS_F";
    TokenName[WRT_F     ] = "WRT_F";
    TokenName[WLN_F     ] = "WLN_F";
    TokenName[SQT_F     ] = "SQT_F";
    TokenName[LN_F      ] = "LN_F";
    TokenName[EXP_F     ] = "EXP_F";
    TokenName[SP_R      ] = "SP_R";
    TokenName[EP_R      ] = "EP_R";
    TokenName[MP_R      ] = "MP_R";
    TokenName[PC_R      ] = "PC_R";
    TokenName[NP_R      ] = "NP_R";
    TokenName[A_T       ] = "A_T";
    TokenName[B_T       ] = "B_T";
    TokenName[C_T       ] = "C_T";
    TokenName[I_T       ] = "I_T";
    TokenName[R_T       ] = "R_T";
    TokenName[S_T       ] = "S_T";
    TokenName[T_T       ] = "T_T";
    TokenName[P_T       ] = "P_T";
    TokenName[X_T       ] = "X_T";
    TokenName[DEFINE    ] = "DEFINE";
    TokenName[LABEL     ] = "LABEL";
    TokenName[INTLIT    ] = "INTLIT";
    TokenName[REALIT    ] = "REALIT";
    TokenName[CHRLIT    ] = "CHRLIT";
    TokenName[STRLIT    ] = "STRLIT";
    TokenName[ID        ] = "ID";
    TokenName[ERROR     ] = "ERROR";
}
//--------------------------------------------------------------------
//Constructor Lexer is used to redirect the input file stream from the
//keyboard to input file stream i.
//--------------------------------------------------------------------
Lexer::Lexer(FILE* i)
{
    yyin=i;
    PopulateRWMap();
    PopulateTokenNameMap();
}
//-----------------------End of Lex Definition-----------------------