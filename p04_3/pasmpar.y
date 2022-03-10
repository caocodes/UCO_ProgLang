%{
//---------------------------------------------------------------------
// File pasmpar.y contains specifications acceptable to the
// Unix utility yacc for the Subset Pascal grammar.
//---------------------------------------------------------------------
// Author 1: Prantosh Neupane
// Student ID: *20514054
// E-Mail:	pneupane4@uco.edu
// CRN:		21808, Spring 2022
// Author 2: Cao Truong
// Student ID: *20500231
// E-Mail:	ctruong3@uco.edu
// CRN:		22708, Spring 2022
// Course:	CMSC 5023 – Programming Languages
// Project:	p04.3
// Due:		March 8, 2022
// Project Account Number: tt035
//---------------------------------------------------------------------
//C++ include files
//---------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdio>
#include <map>
using namespace std;

//---------------------------------------------------------------------
//Application inlcude files
//---------------------------------------------------------------------
#include "pasmlex.h"
#include "pasmpar.h"
#include "pasm_instruction.h"
//---------------------------------------------------------------------
//Externals
//---------------------------------------------------------------------
extern ofstream output;
extern int lineCount;
extern int columnCount;
extern map<int, string> tokenSpelling;
//---------------------------------------------------------------------
//Global Variables
//---------------------------------------------------------------------
double varTable[26];
//---------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------
void yyerror(const char* m);

%}
%union {
    int opcode;
    int stdfunc;
    int pregister;
    int ptype;
    char* label;
    int intlit;
    double realit;
    char* chrlit;
    char* strlit;
}

%token <opcode> CUP_O 1
%token <opcode> CSP_O 2
%token <opcode> ENT_O 3
%token <opcode> MST_O 4
%token <opcode> RTN_O 5
%token <opcode> EQU_O 6
%token <opcode> NEQ_O 7
%token <opcode> GRT_O 8
%token <opcode> GEQ_O 9
%token <opcode> LES_O 10
%token <opcode> LEQ_O 11
%token <opcode> ADI_O 12
%token <opcode> SBI_O 13
%token <opcode> NGI_O 14
%token <opcode> MPI_O 15
%token <opcode> DVI_O 16
%token <opcode> MOD_O 17
%token <opcode> ABI_O 18
%token <opcode> SQI_O 19
%token <opcode> INC_O 20
%token <opcode> DEC_O 21
%token <opcode> ADR_O 22
%token <opcode> SBR_O 23
%token <opcode> NGR_O 24
%token <opcode> MPR_O 25
%token <opcode> DVR_O 26
%token <opcode> ABR_O 27
%token <opcode> SQR_O 28
%token <opcode> IOR_O 29
%token <opcode> AND_O 30
%token <opcode> XOR_O 31
%token <opcode> NOT_O 32
%token <opcode> INN_O 33
%token <opcode> UNI_O 34
%token <opcode> NTR_O 35
%token <opcode> DIF_O 36
%token <opcode> CMP_O 37
%token <opcode> SGS_O 38
%token <opcode> UJP_O 39
%token <opcode> XJP_O 40
%token <opcode> FJP_O 41
%token <opcode> TJP_O 42
%token <opcode> FLT_O 43
%token <opcode> FLO_O 44
%token <opcode> TRC_O 45
%token <opcode> RND_O 46
%token <opcode> CHR_O 47
%token <opcode> ORD_O 48
%token <opcode> STP_O 49
%token <opcode> LDA_O 50
%token <opcode> LDC_O 51
%token <opcode> LDI_O 52
%token <opcode> LVA_O 53
%token <opcode> LVB_O 54
%token <opcode> LVC_O 55
%token <opcode> LVI_O 56
%token <opcode> LVR_O 57
%token <opcode> LVS_O 58
%token <opcode> LVT_O 59
%token <opcode> STI_O 60
%token <opcode> IXA_O 61

%token <stdfunc> RDB_F 62
%token <stdfunc> RDC_F 63
%token <stdfunc> RDI_F 64
%token <stdfunc> RDR_F 65
%token <stdfunc> RLN_F 66
%token <stdfunc> WRB_F 67
%token <stdfunc> WRC_F 68
%token <stdfunc> WRI_F 69
%token <stdfunc> WRE_F 70
%token <stdfunc> WRF_F 71
%token <stdfunc> WRS_F 72
%token <stdfunc> WRT_F 73
%token <stdfunc> WLN_F 74
%token <stdfunc> SQT_F 75
%token <stdfunc> LN_F 76
%token <stdfunc> EXP_F 77

%token <pregister> SP_R 78
%token <pregister> EP_R 79
%token <pregister> MP_R 80
%token <pregister> PC_R 81
%token <pregister> NP_R 82

%token <ptype> A_T 83
%token <ptype> B_T 84
%token <ptype> C_T 85
%token <ptype> I_T 86
%token <ptype> R_T 87
%token <ptype> S_T 88
%token <ptype> T_T 89
%token <ptype> P_T 90
%token <ptype> X_T 91

%token <label> LABEL 92
%token DEFINE 93
%token <intlit> INTLIT 94
%token <realit> REALIT 95
%token <chrlit> CHRLIT 96
%token <strlit> STRLIT 97
%token ID 98
%token ERROR 99

%type <opcode>  operation
%type <ptype> type
%type <pregister> register
%type <stdfunc> stdfunction

%%
program:
    list
    {
      output << endl << "#001 program -> list";
    }
list:
    item
    {
      output << endl << "#002 list -> item";
    }
list:
    list item
    {
      output << endl << "#003 list -> list item";
    }
item:
    statement
    {
      output << endl << "#004 item -> statement";
    }
item:
    definition
    {
      output << endl << "#005 item -> definition";
    }
definition:
    DEFINE LABEL INTLIT
    {
      output << endl << "#006 definition -> DEFINE LABEL INTLIT";
    }
statement:
    label_list operation
    {
      output << endl << "#007 statement -> label_list operation";
    }
statement:
    operation
    {
      output << endl << "#008 statement -> operation";
    }
label_list:
    LABEL
    {
      output << endl << "#009 label_list -> LABEL";
    }
label_list:
    label_list LABEL
    {
      output << endl << "#010 label_list -> label_list LABEL";
    }
operation:
    class0_operation
    {
      output << endl << "#011 operation -> class0_operation";
    }
operation:
    class1_operation
    {
      output << endl << "#012 operation -> class1_operation";
    }
operation:
    class2_operation
    {
      output << endl << "#013 operation -> class2_operation";
    }
operation:
    class3_operation
    {
      output << endl << "#014 operation -> class3_operation";
    }
class0_operation:
    ADI_O
    {
      output << endl << "#015 class0_operation -> ADI_O";
      PasmInstruction instruction($1, 0, 0);
      instruction.print(output);
    }
class0_operation:
    SBI_O
    {
      output << endl << "#016 class0_operation -> SBI_O";
      PasmInstruction instruction($1);
      instruction.print(output);
    }
class0_operation:
    NGI_O
    {
      output << endl << "#017 class0_operation -> NGI_O";
      PasmInstruction instruction($1);
      instruction.print(output);
    }
class0_operation:
    MPI_O
    {
      output << endl << "#018 class0_operation -> MPI_O";
      PasmInstruction instruction($1);
      instruction.print(output);
    }
class0_operation:
    DVI_O
    {
      output << endl << "#019 class0_operation -> DVI_O";
      PasmInstruction instruction($1);
      instruction.print(output);
    }
class0_operation:
    MOD_O
    {
      output << endl << "#020 class0_operation -> MOD_O";
      PasmInstruction instruction($1);
      instruction.print(output);
    }
class0_operation:
    ABI_O
    {
      output << endl << "#021 class0_operation -> ABI_O";
      PasmInstruction instruction($1);
      instruction.print(output);
    }
class0_operation:
    SQI_O
    {
      output << endl << "#022 class0_operation -> SQI_O";
      PasmInstruction instruction($1);
      instruction.print(output);
    }
class0_operation:
    ADR_O
    {
      output << endl << "#023 class0_operation -> ADR_O";
      PasmInstruction instruction($1);
      instruction.print(output);
    }
class0_operation:
    SBR_O
    {
      output << endl << "#024 class0_operation -> SBR_O";
      PasmInstruction instruction($1);
      instruction.print(output);
    }
class0_operation:
    NGR_O
    {
      output << endl << "#025 class0_operation -> NGR_O";
      PasmInstruction instruction($1);
      instruction.print(output);
    }
class0_operation:
    MPR_O
    {
      output << endl << "#026 class0_operation -> MPR_O";
      PasmInstruction instruction($1);
      instruction.print(output);
    }
class0_operation:
    DVR_O
    {
      output << endl << "#027 class0_operation -> DVR_O";
      PasmInstruction instruction($1);
      instruction.print(output);
    }
class0_operation:
    ABR_O
    {
      output << endl << "#028 class0_operation -> ABR_O";
      PasmInstruction instruction($1);
      instruction.print(output);
    }
class0_operation:
    SQR_O
    {
      output << endl << "#029 class0_operation -> SQR_O";
      PasmInstruction instruction($1);
      instruction.print(output);
    }
class0_operation:
    IOR_O
    {
      output << endl << "#030 class0_operation -> IOR_O";
      PasmInstruction instruction($1);
      instruction.print(output);
    }
class0_operation:
    XOR_O
    {
      output << endl << "#031 class0_operation -> XOR_O";
      PasmInstruction instruction($1);
      instruction.print(output);
    }
class0_operation:
    AND_O
    {
      output << endl << "#032 class0_operation -> AND_O";
      PasmInstruction instruction($1);
      instruction.print(output);
    }
class0_operation:
    NOT_O
    {
      output << endl << "#033 class0_operation -> NOT_O";
      PasmInstruction instruction($1);
      instruction.print(output);
    }
class0_operation:
    INN_O
    {
      output << endl << "#034 class0_operation -> INN_O";
      PasmInstruction instruction($1);
      instruction.print(output);
    }
class0_operation:
    UNI_O
    {
      output << endl << "#035 class0_operation -> UNI_O";
      PasmInstruction instruction($1);
      instruction.print(output);
    }
class0_operation:
    NTR_O
    {
      output << endl << "#036 class0_operation -> NTR_O";
      PasmInstruction instruction($1);
      instruction.print(output);
    }
class0_operation:
    DIF_O
    {
      output << endl << "#037 class0_operation -> DIF_O";
      PasmInstruction instruction($1);
      instruction.print(output);
    }
class0_operation:
    CMP_O
    {
      output << endl << "#038 class0_operation -> CMP_O";
      PasmInstruction instruction($1);
      instruction.print(output);
    }
class0_operation:
    SGS_O
    {
      output << endl << "#039 class0_operation -> SGS_O";
      PasmInstruction instruction($1);
      instruction.print(output);
    }
class0_operation:
    FLT_O
    {
      output << endl << "#040 class0_operation -> FLT_O";
      PasmInstruction instruction($1);
      instruction.print(output);
    }
class0_operation:
    FLO_O
    {
      output << endl << "#041 class0_operation -> FLO_O";
      PasmInstruction instruction($1);
      instruction.print(output);
    }
class0_operation:
    TRC_O
    {
      output << endl << "#042 class0_operation -> TRC_O";
      PasmInstruction instruction($1);
      instruction.print(output);
    }
class0_operation:
    RND_O
    {
      output << endl << "#043 class0_operation -> RND_O";
      PasmInstruction instruction($1);
      instruction.print(output);
    }
class0_operation:
    CHR_O
    {
      output << endl << "#044 class0_operation -> CHR_O";
      PasmInstruction instruction($1);
      instruction.print(output);
    }
class0_operation:
    ORD_O
    {
      output << endl << "#045 class0_operation -> ORD_O";
      PasmInstruction instruction($1);
      instruction.print(output);
    }
class0_operation:
    STP_O
    {
      output << endl << "#046 class0_operation -> STP_O";
      PasmInstruction instruction($1);
      instruction.print(output);
    }
class1_operation:
    MST_O INTLIT
    {
      output << endl << "#047 class1_operation -> MST_O INTLIT";
      PasmInstruction instruction($1, $2);
      instruction.print(output);
    }
class1_operation:
    RTN_O type
    {
      output << endl << "#048 class1_operation -> RTN_O type";
      PasmInstruction instruction($1, $2);
      instruction.print(output);
    }
class1_operation:
    EQU_O type
    {
      output << endl << "#049 class1_operation -> EQU_O type";
      PasmInstruction instruction($1, $2);
      instruction.print(output);
    }
class1_operation:
    NEQ_O type
    {
      output << endl << "#050 class1_operation -> NEQ_O type";
      PasmInstruction instruction($1, $2);
      instruction.print(output);
    }
class1_operation:
    LES_O type
    {
      output << endl << "#051 class1_operation -> LES_O type";
      PasmInstruction instruction($1, $2);
      instruction.print(output);
    }
class1_operation:
    LEQ_O type
    {
      output << endl << "#052 class1_operation -> LEQ_O type";
      PasmInstruction instruction($1, $2);
      instruction.print(output);
    }
class1_operation:
    GRT_O type
    {
      output << endl << "#053 class1_operation -> GRT_O type";
      PasmInstruction instruction($1, $2);
      instruction.print(output);
    }
class1_operation:
    GEQ_O type
    {
      output << endl << "#054 class1_operation -> GEQ_O type";
      PasmInstruction instruction($1, $2);
      instruction.print(output);
    }
class1_operation:
    LDI_O type
    {
      output << endl << "#055 class1_operation -> LDI_O type";
      PasmInstruction instruction($1, $2);
      instruction.print(output);
    }
class1_operation:
    STI_O type
    {
      output << endl << "#056 class1_operation -> STI_O type";
      PasmInstruction instruction($1, $2);
      instruction.print(output);
    }
class1_operation:
    INC_O type
    {
      output << endl << "#057 class1_operation -> INC_O type";
      PasmInstruction instruction($1, $2);
      instruction.print(output);
    }
class1_operation:
    DEC_O type
    {
      output << endl << "#058 class1_operation -> DEC_O type";
      PasmInstruction instruction($1, $2);
      instruction.print(output);
    }
class2_operation:
    CSP_O stdfunction
    {
      output << endl << "#059 class2_operation -> CSP_O stdfunction";
      PasmInstruction instruction($1, $2);
      instruction.print(output);
    }
class2_operation:
    UJP_O LABEL
    {
      output << endl << "#060 class2_operation -> UJP_O LABEL";
      PasmInstruction instruction($1);
      instruction.print(output);
    }
class2_operation:
    FJP_O LABEL
    {
      output << endl << "#061 class2_operation -> FJP_O LABEL";
      PasmInstruction instruction($1);
      instruction.print(output);
    }
class2_operation:
    TJP_O LABEL
    {
      output << endl << "#062 class2_operation -> TJP_O LABEL";
      PasmInstruction instruction($1);
      instruction.print(output);
    }
class2_operation:
    XJP_O LABEL
    {
      output << endl << "#063 class2_operation -> XJP_O LABEL";
      PasmInstruction instruction($1);
      instruction.print(output);
    }
class2_operation:
    IXA_O INTLIT
    {
      output << endl << "#064 class2_operation -> IXA_O INTLIT";
      PasmInstruction instruction($1,0,$2);
      instruction.print(output);
    }
class3_operation:
    CUP_O INTLIT LABEL
    {
      output << endl << "#065 class3_operation -> CUP_O INTLIT LABEL";
      PasmInstruction instruction($1,$2);
      instruction.print(output);
    }
class3_operation:
    ENT_O register LABEL
    {
      output << endl << "#066 class3_operation -> ENT_O register LABEL";
      PasmInstruction instruction($1,$2);
      instruction.print(output);
    }
class3_operation:
    LDA_O INTLIT INTLIT
    {
      output << endl << "#067 class3_operation -> LDA_O INTLIT INTLIT";
      PasmInstruction instruction($1,$2,$3);
      instruction.print(output);
    }
class3_operation:
    LDC_O type INTLIT
    {
      output << endl << "#068 class3_operation -> LDC_O type INTLIT";
      PasmInstruction instruction($1,$2,$3);
      instruction.print(output);
    }
class3_operation:
    LDC_O type REALIT
    {
      output << endl << "#069 class3_operation -> LDC_O type REALIT";
      PasmInstruction instruction($1,$2,$3);
      instruction.print(output);
    }
class3_operation:
    LDC_O type CHRLIT
    {
      output << endl << "#070 class3_operation -> LDC_O type CHRLIT";
      PasmInstruction instruction($1,$2,0,$3);
      instruction.print(output);
    }
class3_operation:
    LDC_O type STRLIT
    {
      output << endl << "#071 class3_operation -> LDC_O type STRLIT";
      PasmInstruction instruction($1,$2,0,$3);
      instruction.print(output);
    }
class3_operation:
    LVA_O INTLIT INTLIT
    {
      output << endl << "#072 class3_operation -> LVA_O INTLIT INTLIT";
      PasmInstruction instruction($1,$2,$3);
      instruction.print(output);
    }
class3_operation:
    LVB_O INTLIT INTLIT
    {
      output << endl << "#073 class3_operation -> LVB_O INTLIT INTLIT";
      PasmInstruction instruction($1,$2,$3);
      instruction.print(output);
    }
class3_operation:
    LVC_O INTLIT INTLIT
    {
      output << endl << "#074 class3_operation -> LVC_O INTLIT INTLIT";
      PasmInstruction instruction($1,$2,$3);
      instruction.print(output);
    }
class3_operation:
    LVI_O INTLIT INTLIT
    {
      output << endl << "#075 class3_operation -> LVI_O INTLIT INTLIT";
      PasmInstruction instruction($1,$2,$3);
      instruction.print(output);
    }
class3_operation:
    LVR_O INTLIT INTLIT
    {
      output << endl << "#076 class3_operation -> LVR_O INTLIT INTLIT";
      PasmInstruction instruction($1,$2,$3);
      instruction.print(output);
    }
class3_operation:
    LVS_O INTLIT INTLIT
    {
      output << endl << "#077 class3_operation -> LVS_O INTLIT INTLIT";
      PasmInstruction instruction($1,$2,$3);
      instruction.print(output);
    }
class3_operation:
    LVT_O INTLIT INTLIT
    {
      output << endl << "#078 class3_operation -> LVT_O INTLIT INTLIT";
      PasmInstruction instruction($1,$2,$3);
      instruction.print(output);
    }
type:
    P_T
    {
      output << endl << "#079 type -> P_T";
    }
type:
    A_T
    {
      output << endl << "#080 type -> A_T";
    }
type:
    B_T
    {
      output << endl << "#081 type -> B_T";
    }
type:
    C_T
    {
      output << endl << "#082 type -> C_T";
    }
type:
    I_T
    {
      output << endl << "#083 type -> I_T";
    }
type:
    R_T
    {
      output << endl << "#084 type -> R_T";
    }
type:
    S_T
    {
      output << endl << "#085 type -> S_T";
    }
type:
    T_T
    {
      output << endl << "#086 type -> T_T";
    }
type:
    X_T
    {
      output << endl << "#087 type -> X_T";
    }
register:
    SP_R
    {
      output << endl << "#088 register -> SP_R";
    }
register:
    EP_R
    {
      output << endl << "#089 register -> EP_R";
    }
register:
    MP_R
    {
      output << endl << "#090 register -> MP_R";
    }
register:
    PC_R
    {
      output << endl << "#091 register -> PC_R";
    }
register:
    NP_R
    {
      output << endl << "#092 register -> NP_R";
    }
stdfunction:
    RDB_F
    {
      output << endl << "#093 stdfunction -> RDB_F";
    }
stdfunction:
    RDC_F
    {
      output << endl << "#094 stdfunction -> RDC_F";
    }
stdfunction:
    RDI_F
    {
      output << endl << "#095 stdfunction -> RDI_F";
    }
stdfunction:
    RDR_F
    {
      output << endl << "#096 stdfunction -> RDR_F";
    }
stdfunction:
    RLN_F
    {
      output << endl << "#097 stdfunction -> RLN_F";
    }
stdfunction:
    WRB_F
    {
      output << endl << "#098 stdfunction -> WRB_F";
    }
stdfunction:
    WRC_F
    {
      output << endl << "#099 stdfunction -> WRC_F";
    }
stdfunction:
    WRI_F
    {
      output << endl << "#100 stdfunction -> WRI_F";
    }
stdfunction:
    WRE_F
    {
      output << endl << "#101 stdfunction -> WRE_F";
    }
stdfunction:
    WRF_F
    {
      output << endl << "#102 stdfunction -> WRF_F";
    }
stdfunction:
    WRS_F
    {
      output << endl << "#103 stdfunction -> WRS_F";
    }
stdfunction:
    WRT_F
    {
      output << endl << "#104 stdfunction -> WRT_F";
    }
stdfunction:
    WLN_F
    {
      output << endl << "#105 stdfunction -> WLN_F";
    }
stdfunction:
    SQT_F
    {
      output << endl << "#106 stdfunction -> SQT_F";
    }
stdfunction:
    LN_F
    {
      output << endl << "#107 stdfunction -> LN_F";
    }
stdfunction:
    EXP_F
    {
      output << endl << "#108 stdfunction -> EXP_F";
    }
%%
//-----------------------------------------------------------------------
//User function section
//-----------------------------------------------------------------------
void yyerror(const char* m)
{
    cout << endl
        << "line(" << lineCount << ") col(" << columnCount << ") " << m;
    cout << endl;
}