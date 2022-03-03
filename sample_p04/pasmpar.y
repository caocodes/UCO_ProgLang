%{
//----------------------------------------------------------------------------
//File pasmpar.cpp implements member functions of class pasmpar, 
//the parser for the P-Code Assembler
//----------------------------------------------------------------------------
//Author: Thomas R. Turner
//E-Mail: trturner@uco.edu
//Date:   March, 2003
//----------------------------------------------------------------------------
//Copyright March, 2003 by Thomas R. Turner.
//Do not reproduce without permission from Thomas R. Turner.
//----------------------------------------------------------------------------
//C++ include files.
//----------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <iomanip>
//----------------------------------------------------------------------------
//Application include files
//----------------------------------------------------------------------------
#include "PasmFiles.h"
//#include "PasmScanner.h"
#include "pasmpar.h"
#include "PasmInstruction.h"
#include "pasmpcod.h"
#include "pasmicon.h"
#include "pasmrcon.h"
#include "pasmscon.h"
#include "pasmtcon.h"
#include "pasmlabl.h"
//#include "PasmLabelTable.h"
#include "pasmdir.h"
//----------------------------------------------------------------------------
//Namespaces
//----------------------------------------------------------------------------
using namespace std;
//----------------------------------------------------------------------------
//Externals
//----------------------------------------------------------------------------
extern PasmFiles F;
//----------------------------------------------------------------------------
//Variables global to file pasmpar.y
//----------------------------------------------------------------------------
static pasmpcod IA;
static pasmicon IC;
static pasmrcon    RC;
static pasmscon     TC;
static pasmtcon  SC;
//static PasmLabelTable       LT;
static pasmdir        D;
//----------------------------------------------------------------------------
//Function yyerror is called when the parser yyparse finds a syntax error
//----------------------------------------------------------------------------
void yyerror(const char* );
%}
%union {
    double realit;
    int    intlit;
    int    opcode;
    int    ptype;
    int    preg;
    int    stdfunc;
    char*  label;
    int    index;
    char*  strlit;
    char   chrlit;
}
%token <label> LABEL
%token DEFINE
%token <intlit> INTLIT
%token <realit> REALIT
%token <strlit> STRLIT
%token <chrlit> CHRLIT
%token ID
%token PCODEMNEMONIC
%token <opcode> CUP_O
%token <opcode> CSP_O
%token <opcode> ENT_O
%token <opcode> MST_O
%token <opcode> RTN_O

%token <opcode> EQU_O
%token <opcode> NEQ_O
%token <opcode> GRT_O
%token <opcode> GEQ_O
%token <opcode> LES_O
     
%token <opcode> LEQ_O
%token <opcode> ADI_O
%token <opcode> SBI_O
%token <opcode> NGI_O
%token <opcode> MPI_O

%token <opcode> DVI_O
%token <opcode> MOD_O
%token <opcode> ABI_O
%token <opcode> SQI_O
%token <opcode> INC_O

%token <opcode> DEC_O
%token <opcode> ADR_O
%token <opcode> SBR_O
%token <opcode> NGR_O
%token <opcode> MPR_O

%token <opcode> DVR_O
%token <opcode> ABR_O
%token <opcode> SQR_O
%token <opcode> IOR_O
%token <opcode> AND_O

%token <opcode> XOR_O
%token <opcode> NOT_O
%token <opcode> INN_O
%token <opcode> UNI_O
%token <opcode> INT_O

%token <opcode> DIF_O
%token <opcode> CMP_O
%token <opcode> SGS_O
%token <opcode> UJP_O
%token <opcode> XJP_O

%token <opcode> FJP_O
%token <opcode> TJP_O
%token <opcode> FLT_O
%token <opcode> FLO_O
%token <opcode> TRC_O

%token <opcode> RND_O
%token <opcode> CHR_O
%token <opcode> ORD_O
%token <opcode> STP_O
%token <opcode> LDA_O

%token <opcode> LDC_O
%token <opcode> LDI_O
%token <opcode> LVA_O
%token <opcode> LVB_O
%token <opcode> LVC_O

%token <opcode> LVI_O
%token <opcode> LVR_O
%token <opcode> LVS_O
%token <opcode> STI_O
%token <opcode> IXA_O

%token PCODETYPE
%token <ptype> A_T
%token <ptype> B_T
%token <ptype> C_T
%token <ptype> I_T
%token <ptype> R_T
%token <ptype> S_T
%token <ptype> T_T
%token <ptype> P_T
%token <ptype> X_T

%token PCODEREGISTER
%token <preg> SP_R
%token <preg> EP_R
%token <preg> MP_R
%token <preg> PC_R
%token <preg> NP_R

%token PCODEFUNCTION

%token <stdfunc> RDB_F
%token <stdfunc> RDC_F
%token <stdfunc> RDI_F
%token <stdfunc> RDR_F
%token <stdfunc> RLN_F

%token <stdfunc> WRB_F
%token <stdfunc> WRC_F
%token <stdfunc> WRI_F
%token <stdfunc> WRE_F
%token <stdfunc> WRF_F

%token <stdfunc> WRS_F
%token <stdfunc> WLN_F
%token <stdfunc> SQT_F
%token <stdfunc> LN_F
%token <stdfunc> EXP_F

%token ERROR

%type <opcode>  op_only_op
%type <opcode>  type_op
%type <ptype>   type
%type <opcode>  jump_op
%type <opcode>  load_op
%type <stdfunc> function
%type <preg>    register
%type <index>   constant
%%
program 		: statement_list
                        {
                            F.t << endl << "program->statement-list";
                            F.t << endl ;
                            //SC.EightByteBoundary();
                            D.StoreSizes
                                (1024           //Stack size
                                ,IA.Size()      //P-Code instruction array size
                                ,IC.Size()      //Integer constants size
                                ,RC.Size()      //Real constants size
                                ,TC.Size()      //Set constants size
                                ,SC.Size()      //String constants size
                                );
                            D.Print(F.l);       //Print the directory
                            SC.Print(F.l);      //Print string constants
                            TC.Print(F.l);      //Print set constants
                            RC.Print(F.l);      //Print real constants
                            IC.Print(F.l);      //Print integer constants
                            IA.Print(F.l);      //Print the instruction array
                           // LT.Print(F.l);      //Print the label table
                            D.Write(F.e);       //Write the Directory
                            SC.Write(F.e);      //Write String Constants
                            TC.Write(F.e);      //Write Set Constants
                            RC.Write(F.e);      //Write Real Constants
                            IC.Write(F.e);      //Write Integer Constants
                            IA.Write(F.e);      //Write Instruction Array
                        }
statement_list 		: statement
                        {
                            F.t << endl << "statement-list->statement";
                        }
statement_list 		: statement_list statement
                        {
                            F.t << endl ;
                            F.t << "statement-list->statement-list statement";
                            F.t << endl ;
                        }
statement 		: labeled_instruction
                        {
                            F.t << endl ;
                            F.t << "statement->labeled-instruction";
                        }
statement           	: instruction
                        {
                            F.t << endl ;
                            F.t << "statement->instruction";
                        }
statement           	: definition
                        {
                            F.t << endl ;
                            F.t << "statement->definition";
                        }
labeled_instruction 	: label_list instruction
                        {
                            F.t<<endl ;
                            F.t<<"labeled-instruction-> label_list instruction";
                        }
label_list              : LABEL
                        {
                            F.t<<endl ;
                            F.t<<"label_list-> LABEL";
                            if (IA.IsEmpty()) { 
 //                              LT.Define($1,0,IA); 
			       F.t<<endl<< ($1) << " " << 0;
                            } else {
  //                             LT.Define($1,IA.IC()-1,IA);
			       F.t<<endl<< ($1) << " " << IA.IC()-1;
                            }
                        }
label_list              : label_list LABEL
                        {
                            F.t<<endl ;
                            F.t<<"label_list-> label_list LABEL";
                            if (IA.IsEmpty()) { 
//                               LT.Define($2,0,IA); 
			       F.t<<endl<< ($2) << " " << 0;
                            } else {
//                               LT.Define($2,IA.IC()-1,IA);
			       F.t<<endl<< ($2) << " " << IA.IC()-1;
                            }
                        }
definition 		: DEFINE LABEL INTLIT
                        {
                            F.t << endl ;
                            F.t << "definition->DEFINE LABEL INTLIT";
                            F.t << endl;
                            F.t << "Label=\"" << $2 << "\"";
                            F.t << endl;
                            F.t << "INTLIT= " << $3;
//                            LT.Define($2,$3,IA);
                        }
instruction 		: op_only_instruction
                        {
                            F.t << endl ;
                            F.t << "instruction->op-only-instruction";
                        }
instruction 		: type_instruction
                        {
                            F.t << endl ;
                            F.t << "instruction->type-instruction";
                        }
instruction 		: jump_instruction
                        {
                            F.t << endl ;
                            F.t << "instruction->jump-instruction";
                        }
instruction 		: load_instruction
                        {
                            F.t << endl ;
                            F.t << "instruction->load-instruction";
                        }
instruction 		: ent_instruction
                        {
                            F.t << endl ;
                            F.t << "instruction->ent-instruction";
                        }
instruction 		: cup_instruction
                        {
                            F.t << endl ;
                            F.t << "instruction->cup-instruction";
                        }
instruction 		: csp_instruction
                        {
                            F.t << endl ;
                            F.t << "instruction->csp-instruction";
                        }
instruction 		: mst_instruction
                        {
                            F.t << endl ;
                            F.t << "instruction->mst-instruction";
                        }
instruction 		: ldc_instruction
                        {
                            F.t << endl ;
                            F.t << "instruction->ldc-instruction";
                        }
instruction 		: ixa_instruction
                        {
                            F.t << endl ;
                            F.t << "instruction->ixa-instruction";
                        }
op_only_instruction 	: op_only_op
                        {
                            F.t << endl ;
                            F.t << "op-only-instruction->op-only-op";
                            F.t << endl;
                            F.t << "op-code=" << (int)$1;
                            PasmInstruction I($1);
                            IA.Insert(I);
                            I.Print(F.t);
                        }
op_only_op 		: ADI_O
                        {
                            F.t << endl ;
                            F.t << "op-only-op->ADI";
                            F.t << endl;
                            F.t << "op-code=" << (int)$1;
                        }
op_only_op 		: SBI_O
                        {
                            F.t << endl ;
                            F.t << "op-only-op->SBI";
                            F.t << endl;
                            F.t << "op-code=" << (int)$1;
                        }
op_only_op 		: NGI_O
                        {
                            F.t << endl ;
                            F.t << "op-only-op->NGI";
                            F.t << endl;
                            F.t << "op-code=" << (int)$1;
                        }
op_only_op 		: MPI_O
                        {
                            F.t << endl ;
                            F.t << "op-only-op->MPI";
                            F.t << endl;
                            F.t << "op-code=" << (int)$1;
                        }
op_only_op 		: DVI_O
                        {
                            F.t << endl ;
                            F.t << "op-only-op->DVI";
                            F.t << endl;
                            F.t << "op-code=" << (int)$1;
                        }

op_only_op 		: MOD_O
                        {
                            F.t << endl ;
                            F.t << "op-only-op->MOD";
                            F.t << endl;
                            F.t << "op-code=" << (int)$1;
                        }
op_only_op 		: ABI_O
                        {
                            F.t << endl ;
                            F.t << "op-only-op->ABI";
                            F.t << endl;
                            F.t << "op-code=" << (int)$1;
                        }
op_only_op 		: SQI_O
                        {
                            F.t << endl ;
                            F.t << "op-only-op->SQI";
                            F.t << endl;
                            F.t << "op-code=" << (int)$1;
                        }
op_only_op 		: ADR_O
                        {
                            F.t << endl ;
                            F.t << "op-only-op->ADR";
                            F.t << endl;
                            F.t << "op-code=" << (int)$1;
                        }
op_only_op 		: SBR_O
                        {
                            F.t << endl ;
                            F.t << "op-only-op->SBR";
                            F.t << endl;
                            F.t << "op-code=" << (int)$1;
                        }
op_only_op 		: NGR_O
                        {
                            F.t << endl ;
                            F.t << "op-only-op->NGR";
                            F.t << endl;
                            F.t << "op-code=" << (int)$1;
                        }

op_only_op 		: MPR_O
                        {
                            F.t << endl ;
                            F.t << "op-only-op->MPR";
                            F.t << endl;
                            F.t << "op-code=" << (int)$1;
                        }
op_only_op 		: DVR_O
                        {
                            F.t << endl ;
                            F.t << "op-only-op->DVR";
                            F.t << endl;
                            F.t << "op-code=" << (int)$1;
                        }
op_only_op 		: ABR_O
                        {
                            F.t << endl ;
                            F.t << "op-only-op->ABR";
                            F.t << endl;
                            F.t << "op-code=" << (int)$1;
                        }
op_only_op 		: SQR_O
                        {
                            F.t << endl ;
                            F.t << "op-only-op->SQR";
                            F.t << endl;
                            F.t << "op-code=" << (int)$1;
                        }
op_only_op 		: IOR_O
                        {
                            F.t << endl ;
                            F.t << "op-only-op->IOR";
                            F.t << endl;
                            F.t << "op-code=" << (int)$1;
                        }
op_only_op 		: AND_O
                        {
                            F.t << endl ;
                            F.t << "op-only-op->AND";
                            F.t << endl;
                            F.t << "op-code=" << (int)$1;
                        }

op_only_op 		: XOR_O
                        {
                            F.t << endl ;
                            F.t << "op-only-op->XOR";
                            F.t << endl;
                            F.t << "op-code=" << (int)$1;
                        }
op_only_op 		: NOT_O
                        {
                            F.t << endl ;
                            F.t << "op-only-op->NOT";
                            F.t << endl;
                            F.t << "op-code=" << (int)$1;
                        }
op_only_op 		: INN_O
                        {
                            F.t << endl ;
                            F.t << "op-only-op->INN";
                            F.t << endl;
                            F.t << "op-code=" << (int)$1;
                        }
op_only_op 		: UNI_O
                        {
                            F.t << endl ;
                            F.t << "op-only-op->UNI";
                            F.t << endl;
                            F.t << "op-code=" << (int)$1;
                        }
op_only_op 		: INT_O
                        {
                            F.t << endl ;
                            F.t << "op-only-op->NTR";
                            F.t << endl;
                            F.t << "op-code=" << (int)$1;
                        }

op_only_op 		: DIF_O
                        {
                            F.t << endl ;
                            F.t << "op-only-op->DIF";
                            F.t << endl;
                            F.t << "op-code=" << (int)$1;
                        }
op_only_op 		: CMP_O
                        {
                            F.t << endl ;
                            F.t << "op-only-op->CMP";
                            F.t << endl;
                            F.t << "op-code=" << (int)$1;
                        }
op_only_op 		: SGS_O
                        {
                            F.t << endl ;
                            F.t << "op-only-op->SGS";
                            F.t << endl;
                            F.t << "op-code=" << (int)$1;
                        }
op_only_op 		: FLT_O
                        {
                            F.t << endl ;
                            F.t << "op-only-op->FLT";
                            F.t << endl;
                            F.t << "op-code=" << (int)$1;
                        }
op_only_op 		: FLO_O
                        {
                            F.t << endl ;
                            F.t << "op-only-op->FLO";
                            F.t << endl;
                            F.t << "op-code=" << (int)$1;
                        }
op_only_op 		: TRC_O
                        {
                            F.t << endl ;
                            F.t << "op-only-op->TRC";
                            F.t << endl;
                            F.t << "op-code=" << (int)$1;
                        }
op_only_op 		: RND_O
                        {
                            F.t << endl ;
                            F.t << "op-only-op->RND";
                            F.t << endl;
                            F.t << "op-code=" << (int)$1;
                        }
op_only_op 		: CHR_O
                        {
                            F.t << endl ;
                            F.t << "op-only-op->CHR";
                            F.t << endl;
                            F.t << "op-code=" << (int)$1;
                        }
op_only_op 		: ORD_O
                        {
                            F.t << endl ;
                            F.t << "op-only-op->ORD";
                            F.t << endl;
                            F.t << "op-code=" << (int)$1;
                        }

op_only_op 		: STP_O
                        {
                            F.t << endl ;
                            F.t << "op-only-op->STP";
                            F.t << endl;
                            F.t << "op-code=" << (int)$1;
                        }
type_instruction	: type_op type
                        {
                            F.t << endl ;
                            F.t << "type-instruction->type-op type";
                            PasmInstruction I($1,$2);
                            IA.Insert(I);
                            I.Print(F.t);
                        }
type_op			: RTN_O
                        {
                            F.t << endl ;
                            F.t << "type-op->RTN";
                            F.t << endl;
                            F.t << "type-op=" << (int)$1;
                        }
type_op			: EQU_O
                        {
                            F.t << endl ;
                            F.t << "type-op->EQU";
                            F.t << endl;
                            F.t << "type-op=" << (int)$1;
                        }
type_op			: NEQ_O
                        {
                            F.t << endl ;
                            F.t << "type-op->NEQ";
                            F.t << endl;
                            F.t << "type-op=" << (int)$1;
                        }
type_op			: GRT_O
                        {
                            F.t << endl ;
                            F.t << "type-op->GRT";
                            F.t << endl;
                            F.t << "type-op=" << (int)$1;
                        }
type_op			: GEQ_O
                        {
                            F.t << endl ;
                            F.t << "type-op->GEQ";
                            F.t << endl;
                            F.t << "type-op=" << (int)$1;
                        }

type_op			: LES_O
                        {
                            F.t << endl ;
                            F.t << "type-op->LES";
                            F.t << endl;
                            F.t << "type-op=" << (int)$1;
                        }
type_op			: LEQ_O
                        {
                            F.t << endl ;
                            F.t << "type-op->LEQ";
                            F.t << endl;
                            F.t << "type-op=" << (int)$1;
                        }
type_op			: LDI_O
                        {
                            F.t << endl ;
                            F.t << "type-op->LDI";
                            F.t << endl;
                            F.t << "type-op=" << (int)$1;
                        }
type_op			: STI_O
                        {
                            F.t << endl ;
                            F.t << "type-op->STI";
                            F.t << endl;
                            F.t << "type-op=" << (int)$1;
                        }
type_op			: INC_O
                        {
                            F.t << endl ;
                            F.t << "type-op->STI";
                            F.t << endl;
                            F.t << "type-op=" << (int)$1;
                        }
type_op			: DEC_O
                        {
                            F.t << endl ;
                            F.t << "type-op->STI";
                            F.t << endl;
                            F.t << "type-op=" << (int)$1;
                        }

type			: P_T
                        {
                            F.t << endl ;
                            F.t << "type->P_T";
                        }
type			: A_T
                        {
                            F.t << endl ;
                            F.t << "type->A_T";
                        }
type			: B_T
                        {
                            F.t << endl ;
                            F.t << "type->B_T";
                        }
type			: C_T
                        {
                            F.t << endl ;
                            F.t << "type->C_T";
                        }
type			: I_T
                        {
                            F.t << endl ;
                            F.t << "type->I_T";
                        }
type			: R_T
                        {
                            F.t << endl ;
                            F.t << "type->R_T";
                        }
type			: S_T
                        {
                            F.t << endl ;
                            F.t << "type->S_T";
                        }
type			: T_T
                        {
                            F.t << endl ;
                            F.t << "type->T_T";
                        }

jump_instruction	: jump_op LABEL
                        {
                            F.t << endl ;
                            F.t << "jump-instruction->jump-op LABEL";
                            PasmInstruction I($1);
                            IA.Insert(I);
//                            LT.Reference($2,IA.IC()-1,IA);
                            I.Print(F.t);
                            F.t << " " << $2 << " " << IA.IC()-1;
                       }
jump_op			: UJP_O
                        {
                            F.t << endl ;
                            F.t << "jump-op->UJP"; 
                        }
jump_op			: TJP_O
                        {
                            F.t << endl ;
                            F.t << "jump-op->TJP"; 
                        }
jump_op			: FJP_O
                        {
                            F.t << endl ;
                            F.t << "jump-op->FJP"; 
                        }
jump_op			: XJP_O
                        {
                            F.t << endl ;
                            F.t << "jump-op->XJP"; 
                        }

load_instruction	: load_op INTLIT INTLIT
                        {
                            F.t << endl ;
                            F.t << "load-instruction->load-op INTLIT INTLIT"; 
                            F.t << endl;
                            F.t << ($1) << " " << ($2) << " " << ($3); 
                            F.t << endl;
                            PasmInstruction I($1,$2,$3);
                            IA.Insert(I);
                            I.Print(F.t);
                        }
load_op			: LDA_O
                        {
                            F.t << endl ;
                            F.t << "load-op->LDA"; 
                        }
load_op			: LVA_O
                        {
                            F.t << endl ;
                            F.t << "load-op->LVA"; 
                        }
load_op			: LVB_O
                        {
                            F.t << endl ;
                            F.t << "load-op->LVB"; 
                        }
load_op			: LVC_O
                        {
                            F.t << endl ;
                            F.t << "load-op->LVC"; 
                        }
load_op			: LVI_O
                        {
                            F.t << endl ;
                            F.t << "load-op->LVI"; 
                        }
load_op			: LVR_O
                        {
                            F.t << endl ;
                            F.t << "load-op->LVR"; 
                        }
load_op			: LVS_O
                        {
                            F.t << endl ;
                            F.t << "load-op->LVS"; 
                        }

cup_instruction		: CUP_O INTLIT LABEL
                        {
                            F.t << endl ;
                            F.t << "cup-instruction->CUP INTLIT LABEL"; 
                            PasmInstruction I($1,$2);
                            IA.Insert(I);
                         //   LT.Reference($3,IA.IC()-1,IA);
                            F.t << " " << $3;
                       }
csp_instruction		: CSP_O function
                        {
                            F.t << endl ;
                            F.t << "csp-instruction->CSP function"; 
                            PasmInstruction I($1,0,$2);
                            IA.Insert(I);
                            I.Print(F.t);
                        }
function		: RDB_F
                        {
                            F.t << endl ;
                            F.t << "function->RDB"; 
                        }
function		: RDC_F
                        {
                            F.t << endl ;
                            F.t << "function->RDC"; 
                        }
function		: RDI_F
                        {
                            F.t << endl ;
                            F.t << "function->RDI"; 
                        }
function		: RDR_F
                        {
                            F.t << endl ;
                            F.t << "function->RDR"; 
                        }
function		: RLN_F
                        {
                            F.t << endl ;
                            F.t << "function->RLN"; 
                        }
function		: WRB_F
                        {
                            F.t << endl ;
                            F.t << "function->WRB"; 
                        }
function		: WRC_F
                        {
                            F.t << endl ;
                            F.t << "function->WRC"; 
                        }
function		: WRI_F
                        {
                            F.t << endl ;
                            F.t << "function->WRI"; 
                        }
function		: WRE_F
                        {
                            F.t << endl ;
                            F.t << "function->WRE"; 
                        }
function		: WRF_F
                        {
                            F.t << endl ;
                            F.t << "function->WRF"; 
                        }
function		: WRS_F
                        {
                            F.t << endl ;
                            F.t << "function->WRS"; 
                        }
function		: WLN_F
                        {
                            F.t << endl ;
                            F.t << "function->WLN"; 
                        }
function		: SQT_F
                        {
                            F.t << endl ;
                            F.t << "function->SQT"; 
                        }
function		: LN_F
                        {
                            F.t << endl ;
                            F.t << "function->LN"; 
                        }
function		: EXP_F
                        {
                            F.t << endl ;
                            F.t << "function->EXP"; 
                        }

ent_instruction		: ENT_O register LABEL
                        {
                            F.t << endl ;
                            F.t << "ent-instruction->ENT register LABEL"; 
                            PasmInstruction I($1,$2);
                            F.t << endl ;
                            F.t << "Before inserting instruction " << IA.IC();
                            IA.Insert(I);
                            F.t << endl ;
                            F.t << "After inserting instruction " << IA.IC();
                            F.t << endl ;
                          //  LT.Reference($3,IA.IC()-1,IA);
                            I.Print(F.t);
                           F.t << " " << $3 << " " << (IA.IC()-1);
                        }
register		: SP_R
                        {
                            F.t << endl ;
                            F.t << "register->SP_R"; 
                        }
register		: EP_R
                        {
                            F.t << endl ;
                            F.t << "register->EP_R"; 
                        }
register		: MP_R
                        {
                            F.t << endl ;
                            F.t << "register->MP_R"; 
                        }
register		: PC_R
                        {
                            F.t << endl ;
                            F.t << "register->PC_R"; 
                        }
register		: NP_R
                        {
                            F.t << endl ;
                            F.t << "register->NP_R"; 
                        }

mst_instruction		: MST_O INTLIT
                        {
                            F.t << endl ;
                            F.t << "mst-instruction->MST INTLIT"; 
                            PasmInstruction I($1,$2);
                            IA.Insert(I);
                            I.Print(F.t);
                        }

ldc_instruction		: LDC_O type constant
                        {
                            F.t << endl ;
                            F.t << "ldc-instruction->LDC type constant"; 
                            F.t << endl;
                            F.t << "$1=" << $1;
                            F.t << ", ";
                            F.t << "$2=" << $2;
                            F.t << ", ";
                            F.t << "$3=" << $3;
                            PasmInstruction I($1,$2,$3);
                            IA.Insert(I);
                            I.Print(F.t);
                        }

ixa_instruction         : IXA_O INTLIT
                        {
                            F.t << endl;
                            F.t << "ixa-instruction->ixa stride";
                            F.t << "$1=" << $1;
                            F.t << ", ";
                            F.t << "$2=" << $2;
                            PasmInstruction I($1,0,$2);
                            IA.Insert(I);
                            I.Print(F.t);
                        }

constant		: INTLIT
                        {
                            F.t << endl ;
                            F.t << "constant->INTLIT"; 
                            F.t << setw(15) << dec << setfill(' ') << $1;
                            $$=IC.Insert($1);
                        }

constant		: REALIT
                        {
                            F.t << endl ;
                            F.t << "constant->REALIT"; 
                            F.t << scientific << setfill(' ') << setw(15) << $1;
                            $$=RC.Insert($1);
                        }

constant		: STRLIT
                        {
                            F.t << endl ;
                            F.t << "constant->STRLIT"; 
                            F.t << setfill(' ') << setw(15) << "\"" << $1 << "\"";
                            $$=SC.Insert($1);
                        }

constant		: CHRLIT
                        {
                            F.t << endl ;
                            F.t << "constant->CHRLIT"; 
                            F.t << setfill(' ') << setw(15) << "\'" << $1 << "\'";
                            $$=$1;
                        }
%%
//----------------------------------------------------------------------------
//Function yyerror is called when the parser, yyparse, finds a syntax error.
//----------------------------------------------------------------------------
void yyerror(const char* m) { F.t << endl << m; }
//----------------------------------------------------------------------------
//Constructor
//----------------------------------------------------------------------------
pasmpar::pasmpar(){ }
//----------------------------------------------------------------------------
//Function Parse parses the source file src.  Function parse creates the 
//Instruction Array that store P-Code instructions, the constant tables, 
//and the directory.
//----------------------------------------------------------------------------
void pasmpar::Parse(void)
{   
    pasmlabl S(F.s);             //Initialize the scanner to read from
                                    //file src
    yyparse();                      //Parse the P-Code Assembler Source
                                    //in file src
}
