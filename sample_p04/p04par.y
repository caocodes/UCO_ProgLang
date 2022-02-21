%{
//---------------------------------------------------------------------
//File p04par.y contains a specification for pasm
//---------------------------------------------------------------------
// Team Identification Block
// Author 1: 	Daniel L. Tomei
// Student ID: 	*20491050
// E-Mail: 	dtomei@uco.edu
// CRN: 	13855, Fall, 2020
// Author 2: 	Aditi Panvelkar
// Student ID: 	*20490610
// E-Mail: 	apanvelkar@uco.edu
// CRN: 	13855, Fall, 2020
// Course: 	CMSC 5023 – Programming Languages
// Project: 	p04
// Due: 	December 10, 2020
// Project Account Number: tt162
//---------------------------------------------------------------------
//C++ include files
//---------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
//---------------------------------------------------------------------
//---------------------------------------------------------------------
//Application inlcude files
//---------------------------------------------------------------------
#include "p04lex.h"
#include "p04par.h"
//---------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------
void yyerror(const char* m);
//---------------------------------------------------------------------
//Externals
//---------------------------------------------------------------------
extern char* yytext;
extern ofstream tfs;
extern int line;
extern int col;
%}
%union {
    string* token;
}
%token <token> CUP_O
%token <token> CSP_O
%token <token> ENT_O
%token <token> MST_O
%token <token> RTN_O
%token <token> EQU_O
%token <token> NEQ_O
%token <token> GRT_O
%token <token> GEQ_O
%token <token> LES_O
%token <token> LEQ_O
%token <token> ADI_O
%token <token> SBI_O
%token <token> NGI_O
%token <token> MPI_O
%token <token> DVI_O
%token <token> MOD_O
%token <token> ABI_O
%token <token> SQI_O
%token <token> INC_O
%token <token> DEC_O
%token <token> ADR_O
%token <token> SBR_O
%token <token> NGR_O
%token <token> MPR_O
%token <token> DVR_O
%token <token> ABR_O
%token <token> SQR_O
%token <token> IOR_O
%token <token> AND_O
%token <token> XOR_O
%token <token> NOT_O
%token <token> INN_O
%token <token> UNI_O
%token <token> NTR_O
%token <token> DIF_O
%token <token> CMP_O
%token <token> SGS_O
%token <token> UJP_O
%token <token> XJP_O
%token <token> FJP_O
%token <token> TJP_O
%token <token> FLT_O
%token <token> FLO_O
%token <token> TRC_O
%token <token> RND_O
%token <token> CHR_O
%token <token> ORD_O
%token <token> STP_O
%token <token> LDA_O
%token <token> LDC_O
%token <token> LDI_O
%token <token> LVA_O
%token <token> LVB_O
%token <token> LVC_O
%token <token> LVI_O
%token <token> LVR_O
%token <token> LVS_O
%token <token> LVT_O
%token <token> STI_O
%token <token> IXA_O
%token <token> RDB_F
%token <token> RDC_F
%token <token> RDI_F
%token <token> RDR_F
%token <token> RLN_F
%token <token> WRB_F
%token <token> WRC_F
%token <token> WRI_F
%token <token> WRE_F
%token <token> WRF_F
%token <token> WRS_F
%token <token> WRT_F
%token <token> WLN_F
%token <token> SQT_F
%token <token> LN_F
%token <token> EXP_F
%token <token> SP_R
%token <token> EP_R
%token <token> MP_R
%token <token> PC_R
%token <token> NP_R
%token <token> A_T
%token <token> B_T
%token <token> C_T
%token <token> I_T
%token <token> R_T
%token <token> S_T
%token <token> T_T
%token <token> P_T
%token <token> X_T
%token <token> DEFINE
%token <token> LABEL
%token <token> INTLIT
%token <token> REALIT
%token <token> CHRLIT
%token <token> STRLIT
%token <token> ID
%token <token> ERROR

%%
program:
    list
    {tfs << endl << "program -> list";
    }
list:
    item
    {tfs << endl << "list -> item";
    }
list:
    list item
    {tfs << endl << "list -> list item";
    }
item:
    statement
    {tfs << endl << "item -> statement";
    }
item:
    definition
    {tfs << endl << "item -> definition";
    }
definition:
    DEFINE LABEL INTLIT
    {tfs << endl << "definition -> DEFINE LABEL INTLIT";
    }
statement:
    label_list operation
    {tfs << endl << "statement -> label_list operation";
    }
statement:
    operation
    {tfs << endl << "statement -> operation";
    }
label_list:
    LABEL
    {tfs << endl << "label_list -> LABEL";
    }
label_list:
    label_list LABEL
    {tfs << endl << "label_list -> label_list LABEL";
    }
operation:
    class0_operation
    {tfs << endl << "operation -> class0_operation";
    }
operation:
    class1_operation
    {tfs << endl << "operation -> class1_operation";
    }
operation:
    class2_operation
    {tfs << endl << "operation -> class2_operation";
    }
operation:
    class3_operation
    {tfs << endl << "operation -> class3_operation";
    }
class0_operation:
    ADI_O
    {tfs << endl << "class0_operation -> ADI_O";
    }
class0_operation:
    SBI_O
    {tfs << endl << "class0_operation -> SBI_O";
    }
class0_operation:
    NGI_O
    {tfs << endl << "class0_operation -> NGI_O";
    }
class0_operation:
    MPI_O
    {tfs << endl << "class0_operation -> MPI_O";
    }
class0_operation:
    DVI_O
    {tfs << endl << "class0_operation -> DVI_O";
    }
class0_operation:
    ABI_O
    {tfs << endl << "class0_operation -> ABI_O";
    }
class0_operation:
    MOD_O
    {tfs << endl << "class0_operation -> MOD_O";
    }
class0_operation:
    ADR_O
    {tfs << endl << "class0_operation -> ADR_O";
    }
class0_operation:
    SBR_O
    {tfs << endl << "class0_operation -> SBR_O";
    }
class0_operation:
    NGR_O
    {tfs << endl << "class0_operation -> NGR_O";
    }
class0_operation:
    MPR_O
    {tfs << endl << "class0_operation -> MPR_O";
    }
class0_operation:
    DVR_O
    {tfs << endl << "class0_operation -> DVR_O";
    }
class0_operation:
    ABR_O
    {tfs << endl << "class0_operation -> ABR_O";
    }
class0_operation:
    IOR_O
    {tfs << endl << "class0_operation -> IOR_O";
    }
class0_operation:
    XOR_O
    {tfs << endl << "class0_operation -> XOR_O";
    }
class0_operation:
    AND_O
    {tfs << endl << "class0_operation -> AND_O";
    }
class0_operation:
    NOT_O
    {tfs << endl << "class0_operation -> NOT_O";
    }
class0_operation:
    INN_O
    {tfs << endl << "class0_operation -> INN_O";
    }
class0_operation:
    UNI_O
    {tfs << endl << "class0_operation -> UNI_O";
    }
class0_operation:
    NTR_O
    {tfs << endl << "class0_operation -> NTR_O";
    }
class0_operation:
    DIF_O
    {tfs << endl << "class0_operation -> DIF_O";
    }
class0_operation:
    CMP_O
    {tfs << endl << "class0_operation -> CMP_O";
    }
class0_operation:
    FLT_O
    {tfs << endl << "class0_operation -> FLT_O";
    }
class0_operation:
    FLO_O
    {tfs << endl << "class0_operation -> FLO_O";
    }
class0_operation:
    TRC_O
    {tfs << endl << "class0_operation -> TRC_O";
    }
class0_operation:
    STP_O
    {tfs << endl << "class0_operation -> STP_O";
    }
class1_operation:
    MST_O INTLIT
    {tfs << endl << "class1_operation -> MST_O INTLIT";
    }
class1_operation:
    RTN_O type
    {tfs << endl << "class1_operation -> RTN_O type";
    }
class1_operation:
    EQU_O type
    {tfs << endl << "class1_operation -> EQU_O type";
    }
class1_operation:
    NEQ_O type
    {tfs << endl << "class1_operation -> NEQ_O type";
    }
class1_operation:
    LES_O type
    {tfs << endl << "class1_operation -> LES_O type";
    }
class1_operation:
    LEQ_O type
    {tfs << endl << "class1_operation -> LEQ_O type";
    }
class1_operation:
    GRT_O type
    {tfs << endl << "class1_operation -> GRT_O type";
    }
class1_operation:
    GEQ_O type
    {tfs << endl << "class1_operation -> GEQ_O type";
    }
class1_operation:
    STI_O type
    {tfs << endl << "class1_operation -> STI_O type";
    }
class2_operation:
    CSP_O stdfunction
    {tfs << endl << "class2_operation -> CSP_O stdfunction";
    }
class2_operation:
    UJP_O LABEL
    {tfs << endl << "class2_operation -> UJP_O LABEL";
    }
class2_operation:
    FJP_O LABEL
    {tfs << endl << "class2_operation -> FJP_O LABEL";
    }
class2_operation:
    TJP_O LABEL
    {tfs << endl << "class2_operation -> TJP_O LABEL";
    }
class2_operation:
    XJP_O LABEL
    {tfs << endl << "class2_operation -> XJP_O LABEL";
    }
class2_operation:
    IXA_O INTLIT
    {tfs << endl << "class2_operation -> IXA_O INTLIT";
    }
class3_operation:
    CUP_O INTLIT LABEL
    {tfs << endl << "class3_operation -> CUP_O INTLIT LABEL";
    }
class3_operation:
    ENT_O register LABEL
    {tfs << endl << "class3_operation -> ENT_O register LABEL";
    }
class3_operation:
    LDA_O INTLIT INTLIT
    {tfs << endl << "class3_operation -> LDA_O INTLIT INTLIT";
    }
class3_operation:
    LDC_O type INTLIT
    {tfs << endl << "class3_operation -> LDC_O type INTLIT";
    }
class3_operation:
    LDC_O type REALIT
    {tfs << endl << "class3_operation -> LDC_O type REALIT";
    }
class3_operation:
    LDC_O type CHRLIT
    {tfs << endl << "class3_operation -> LDC_O type CHRLIT";
    }
class3_operation:
    LDC_O type STRLIT
    {tfs << endl << "class3_operation -> LDC_O type STRLIT";
    }
class3_operation:
    LDI_O INTLIT INTLIT
    {tfs << endl << "class3_operation -> LDI_O INTLIT INTLIT";
    }
class3_operation:
    LVA_O INTLIT INTLIT
    {tfs << endl << "class3_operation -> LVA_O INTLIT INTLIT";
    }
class3_operation:
    LVB_O INTLIT INTLIT
    {tfs << endl << "class3_operation -> LVB_O INTLIT INTLIT";
    }
class3_operation:
    LVC_O INTLIT INTLIT
    {tfs << endl << "class3_operation -> LVC_O INTLIT INTLIT";
    }
class3_operation:
    LVI_O INTLIT INTLIT
    {tfs << endl << "class3_operation -> LVI_O INTLIT INTLIT";
    }
class3_operation:
    LVR_O INTLIT INTLIT
    {tfs << endl << "class3_operation -> LVR_O INTLIT INTLIT";
    }
class3_operation:
    LVS_O INTLIT INTLIT
    {tfs << endl << "class3_operation -> LVS_O INTLIT INTLIT";
    }
class3_operation:
    LVT_O INTLIT INTLIT
    {tfs << endl << "class3_operation -> LVT_O INTLIT INTLIT";
    }
type:
    P_T
    {tfs << endl << "type -> P_T";
    }
type:
    A_T
    {tfs << endl << "type -> A_T";
    }
type:
    B_T
    {tfs << endl << "type -> B_T";
    }
type:
    C_T
    {tfs << endl << "type -> C_T";
    }
type:
    I_T
    {tfs << endl << "type -> I_T";
    }
type:
    R_T
    {tfs << endl << "type -> R_T";
    }
type:
    S_T
    {tfs << endl << "type -> S_T";
    }
type:
    T_T
    {tfs << endl << "type -> T_T";
    }
register:
    SP_R
    {tfs << endl << "register -> SP_R";
    }
register:
    EP_R
    {tfs << endl << "register -> EP_R";
    }
register:
    MP_R
    {tfs << endl << "register -> MP_R";
    }
register:
    PC_R
    {tfs << endl << "register -> PC_R";
    }
register:
    NP_R
    {tfs << endl << "register -> NP_R";
    }
stdfunction:
    RDB_F
    {tfs << endl << "stdfunction -> RDB_F";
    }
stdfunction:
    RDC_F
    {tfs << endl << "stdfunction -> RDC_F";
    }
stdfunction:
    RDI_F
    {tfs << endl << "stdfunction -> RDI_F";
    }
stdfunction:
    RDR_F
    {tfs << endl << "stdfunction -> RDR_F";
    }
stdfunction:
    RLN_F
    {tfs << endl << "stdfunction -> RLN_F";
    }
stdfunction:
    WRB_F
    {tfs << endl << "stdfunction -> WRB_F";
    }
stdfunction:
    WRC_F
    {tfs << endl << "stdfunction -> WRC_F";
    }
stdfunction:
    WRI_F
    {tfs << endl << "stdfunction -> WRI_F";
    }
stdfunction:
    WRE_F
    {tfs << endl << "stdfunction -> WRE_F";
    }
stdfunction:
    WRF_F
    {tfs << endl << "stdfunction -> WRF_F";
    }
stdfunction:
    WRS_F
    {tfs << endl << "stdfunction -> WRS_F";
    }
stdfunction:
    WRT_F
    {tfs << endl << "stdfunction -> WRT_F";
    }
stdfunction:
    WLN_F
    {tfs << endl << "stdfunction -> WLN_F";
    }
stdfunction:
    SQT_F
    {tfs << endl << "stdfunction -> SQT_F";
    }
stdfunction:
    LN_F
    {tfs << endl << "stdfunction -> LN_F";
    }
stdfunction:
    EXP_F
    {tfs << endl << "stdfunction -> EXP_F";
    }
    

%%
//-----------------------------------------------------------------------
//User function section
//-----------------------------------------------------------------------
void yyerror(const char* m)
{
    cout << endl
        << "line(" << line << ") col(" << col << ") " << m;
    cout << endl;
}