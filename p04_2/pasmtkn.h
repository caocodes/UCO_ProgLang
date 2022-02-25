//--------------------------------------------------------------------
// File pasmtkn.h contains the list of preprocessor definitions that define token codes.
//--------------------------------------------------------------------
// Author 1: Prantosh Neupane
// Student ID: *20514054
// E-Mail:	pneupane4@uco.edu
// CRN:		21808, Spring 2022
// Author 2: Cao Truong
// Student ID: *20500231
// E-Mail:	ctruong3@uco.edu
// CRN:		22708, Spring 2022
// Course:	CMSC 5023 – Programming Languages
// Project:	p04.2
// Due:		March 1, 2022
// Project Account Number: tt035
//--------------------------------------------------------------------

// This is for when the program should be exiting
#ifndef YYERRCODE
#define YYERRCODE 256
#endif

#define CUP_O 1
#define CSP_O 2
#define ENT_O 3
#define MST_O 4
#define RTN_O 5
#define EQU_O 6
#define NEQ_O 7
#define GRT_O 8
#define GEQ_O 9
#define LES_O 10
#define LEQ_O 11
#define ADI_O 12
#define SBI_O 13
#define NGI_O 14
#define MPI_O 15
#define DVI_O 16
#define MOD_O 17
#define ABI_O 18
#define SQI_O 19
#define INC_O 20
#define DEC_O 21
#define ADR_O 22
#define SBR_O 23
#define NGR_O 24
#define MPR_O 25
#define DVR_O 26
#define ABR_O 27
#define SQR_O 28
#define IOR_O 29
#define AND_O 30
#define XOR_O 31
#define NOT_O 32
#define INN_O 33
#define UNI_O 34
#define NTR_O 35
#define DIF_O 36
#define CMP_O 37
#define SGS_O 38
#define UJP_O 39
#define XJP_O 40
#define FJP_O 41
#define TJP_O 42
#define FLT_O 43
#define FLO_O 44
#define TRC_O 45
#define RND_O 46
#define CHR_O 47
#define ORD_O 48
#define STP_O 49
#define LDA_O 50
#define LDC_O 51
#define LDI_O 52
#define LVA_O 53
#define LVB_O 54
#define LVC_O 55
#define LVI_O 56
#define LVR_O 57
#define LVS_O 58
#define LVT_O 59
#define STI_O 60
#define IXA_O 61
#define RDB_F 62
#define RDC_F 63
#define RDI_F 64
#define RDR_F 65
#define RLN_F 66
#define WRB_F 67
#define WRC_F 68
#define WRI_F 69
#define WRE_F 70
#define WRF_F 71
#define WRS_F 72
#define WRT_F 73
#define WLN_F 74
#define SQT_F 75
#define LN_F 76
#define EXP_F 77
#define SP_R 78
#define EP_R 79
#define MP_R 80
#define PC_R 81
#define NP_R 82
#define A_T 83
#define B_T 84
#define C_T 85
#define I_T 86
#define R_T 87
#define S_T 88
#define T_T 89
#define P_T 90
#define X_T 91
#define LABEL 92
#define DEFINE 93
#define INTLIT 94
#define REALIT 95
#define CHRLIT 96
#define STRLIT 97
#define ID 98
#define ERROR 99