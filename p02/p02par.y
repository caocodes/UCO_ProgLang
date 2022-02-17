%{
//---------------------------------------------------------------------
// File p02par.y contains specifications acceptable to the
// Unix utility yacc for the Subset Pascal grammar.
//---------------------------------------------------------------------
// Author:	Mr. Cao Truong
// Student ID: *20500231
// E-Mail:	ctruong3@uco.edu
// Course:	CMSC 5023 – Programming Languages
// CRN:		22708, Spring 2022
// Project:	p02
// Due:		February 17, 2022
// Project Account Number: tt035
//---------------------------------------------------------------------
//C++ include files
//---------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdio>
using namespace std;

//---------------------------------------------------------------------
//Application inlcude files
//---------------------------------------------------------------------
#include "p02lex.h"
#include "p02par.h"
//---------------------------------------------------------------------
//Externals
//---------------------------------------------------------------------
extern ofstream output;
extern int lineCount;
extern int columnCount;
//---------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------
void yyerror(const char* m);

%}
%union {
    string* token;
}

%token <token> AND 1
%token <token> ARRAY 2
%token <token> BEGAN 3
%token <token> DIV 4
%token <token> DO 5
%token <token> DOWNTO 6
%token <token> ELSE 7
%token <token> END 8
%token <token> FOR 9
%token <token> FUNCTION 10
%token <token> IF 11
%token <token> MOD 12
%token <token> NOT 13
%token <token> OF 14
%token <token> OR 15
%token <token> PROCEDURE 16
%token <token> PROGRAM 17
%token <token> REPEAT 18
%token <token> THEN 19
%token <token> TO 20
%token <token> UNTIL 21
%token <token> VAR 22
%token <token> WHILE 23
%token <token> EQU 24
%token <token> NEQ 25
%token <token> LES 26
%token <token> LEQ 27
%token <token> GRT 28
%token <token> GEQ 29
%token <token> PLUS 30
%token <token> MINUS 31
%token <token> STAR 32
%token <token> SLASH 33
%token <token> ASSIGN 34
%token <token> LPAREN 35
%token <token> RPAREN 36
%token <token> LBRACKET 37
%token <token> RBRACKET 38
%token <token> COLON 39
%token <token> SEMICOLON 40
%token <token> COMMA 41
%token <token> PERIOD 42
%token <token> RANGE 43
%token <token> ID 44
%token <token> INTLIT 45
%token <token> CHRLIT 46
%token <token> REALIT 47
%token <token> ERROR 48

%%
program:
  program_head program_declarations program_body
  {
    output << endl << "#001 program -> program_head program_declarations program_body";
  }
program_head:
  PROGRAM ID program_parameters SEMICOLON
  {
    output << endl << "#002 program_head -> PROGRAM ID program_parameters ;";
  }
program_declarations:
  declarations subprogram_declarations
  {
    output << endl << "#003 program_declarations -> declarations subprogram_declarations";
  }
program_body:
  compound_statement PERIOD
  {
    output << endl << "#004 program_body -> compound_statement .";
  }
program_parameters:
  {
    output << endl << "#005 program_parameters -> empty";
  }
program_parameters:
  LPAREN program_parameter_list RPAREN
  {
    output << endl << "#006 program_parameters -> (program_parameter_list)";
  }
program_parameter_list:
  identifier_list
  {
    output << endl << "#007 program_parameter_list -> identifier_list";
  }
identifier_list:
  ID
  {
    output << endl << "#008 identifier-list -> ID";
  }
identifier_list:
  identifier_list COMMA ID
  {
    output << endl << "#009 identifier-list -> identifier-list, ID";
  }
declarations:
  {
    output << endl << "#010 declarations -> empty";
  }
declarations:
  declarations VAR identifier_list COLON type SEMICOLON
  {
    output << endl << "#011 declarations -> declarations VAR identifier_list:type;";
  }
type:
  standard_type
  {
    output << endl << "#012 type -> standard_type";
  }
type:
  ARRAY LBRACKET INTLIT RANGE INTLIT RBRACKET OF standard_type
  {
    output << endl << "#013 type -> ARRAY[INTLIT .. INTLIT] OF standard_type";
  }
standard_type:
  ID
  {
    output << endl << "#014 standard_type -> ID";
  }
subprogram_declarations:
  {
    output << endl << "#015 subprogram_declarations -> empty";
  }
subprogram_declarations:
  subprogram_declarations subprogram_declaration SEMICOLON
  {
    output << endl << "#016 subprogram_declarations -> subprogram_declarations subprogram_declaration ;";
  }
subprogram_declaration:
  subprogram_head declarations compound_statement
  {
    output << endl << "#017 subprogram_declaration -> subprogram_head declarations compound_statement";
  }
subprogram_head:
  FUNCTION ID subprogram_parameters COLON standard_type SEMICOLON
  {
    output << endl << "#018 subprogram_head -> FUNCTION ID subprogram_parameters : standard_type ;";
  }
subprogram_head:
  PROCEDURE ID subprogram_parameters SEMICOLON
  {
    output << endl << "#019 subprogram_head -> PROCDURE ID subprogram_parameters ;";
  }
subprogram_parameters:
  {
    output << endl << "#020 subprogram_parameters -> empty";
  }
subprogram_parameters:
  LPAREN parameter_list RPAREN
  {
    output << endl << "#021 subprogram_parameters -> ( parameter_list )";
  }
parameter_list:
  identifier_list COLON type
  {
    output << endl << "#022 parameter_list -> identifier_list : type" ;
  }
parameter_list:
  parameter_list SEMICOLON identifier_list COLON type
  {
    output << endl << "#023 parameter_list -> parameter_list ; identifier_list : type" ;
  }
compound_statement:
  BEGAN optional_statements END
  {
    output << endl << "#024 compound_statement -> BEGAN optional_statement END";
  }
optional_statements:
  {
    output << endl << "#025 optional_statements -> empty";
  }
optional_statements:
  statement_list
  {
    output << endl << "#026 optional_statements -> statement_list";
  }
statement_list:
  statement
  {
    output << endl << "#027 statement_list -> statement";
  }
statement_list:
  statement_list SEMICOLON statement
  {
    output << endl << "#028 statement_list -> statement_list ; statement";
  }
statement:
  variable ASSIGN expression
  {
    output << endl << "#029 statement -> variable := expression";
  }
statement:
  procedure_statement
  {
    output << endl << "#030 statement -> procedure_statement";
  }
statement:
  alternative_statement
  {
    output << endl << "#031 statement -> alternative_statement";
  }
statement:
  iterative_statement
  {
    output << endl << "#032 statement -> iterative_statement";
  }
statement:
  compound_statement
  {
    output << endl << "#033 statement -> compound_statement";
  }
alternative_statement:
  if_statement
  {
    output << endl << "#034 alternative_statement -> if_statement";
  }
iterative_statement:
  while_statement
  {
    output << endl << "#035 iterative_statement -> while_statement";
  }
iterative_statement:
  repeat_statement
  {
    output << endl << "#036 iterative_statement -> repeat_statement";
  }
iterative_statement:
  for_statement
  {
    output << endl << "#037 iterative_statement -> for_statement";
  }
if_statement:
  IF expression THEN statement ELSE statement
  {
    output << endl << "#038 if_statement -> IF expression THEN statement ELSE statement ";
  }
while_statement:
  WHILE expression DO statement
  {
    output << endl << "#039 while_statement -> WHILE expression DO statement ";
  }
repeat_statement:
  REPEAT statement_list UNTIL expression
  {
    output << endl << "#040 repeat_statement -> REPEAT statement_list UNTIL expression ";
  }
for_statement:
  FOR variable ASSIGN expression TO expression DO statement
  {
    output << endl << "#041 for_statement -> FOR variable ASSIGN expression TO expression DO statement ";
  }
for_statement:
  FOR variable ASSIGN expression DOWNTO expression DO statement
  {
    output << endl << "#042 for_statement -> FOR variable ASSIGN expression DOWNTO expression DO statement ";
  }
variable:
  ID
  {
    output << endl << "#043 variable -> ID ";
  }
variable:
  ID LBRACKET expression RBRACKET
  {
    output << endl << "#044 variable -> ID [ expression ]";
  }
procedure_statement:
  ID
  {
    output << endl << "#045 procedure_statement -> ID ";
  }
procedure_statement:
  ID LPAREN expression_list RPAREN
  {
    output << endl << "#046 procedure_statement -> ID ( expression_list )";
  }
expression_list:
  expression
  {
    output << endl << "#047 expression_list -> expression";
  }
expression_list:
  expression_list COMMA expression
  {
    output << endl << "#048 expression_list -> expression_list , expression";
  }
expression:
  simple_expression
  {
    output << endl << "#049 expression -> simple_expression";
  }
expression:
  simple_expression relop simple_expression
  {
    output << endl << "#050 expression -> simple_expression relop simple_expression";
  }
relop:
  EQU
  {
    output << endl << "#051 relop -> =";
  }
relop:
  NEQ
  {
    output << endl << "#052 relop -> <>";
  }
relop:
  LES
  {
    output << endl << "#053 relop -> <";
  }
relop:
  LEQ
  {
    output << endl << "#054 relop -> <=";
  }
relop:
  GRT
  {
    output << endl << "#055 relop -> >";
  }
relop:
  GEQ
  {
    output << endl << "#056 relop -> >=";
  }
simple_expression:
  term
  {
    output << endl << "#057 simple_expression -> term";
  }
simple_expression:
  sign term
  {
    output << endl << "#058 simple_expression -> sign term";
  }
simple_expression:
  simple_expression addop term
  {
    output << endl << "#061 simple_expression -> simple_expression addop term";
  }
sign:
  PLUS
  {
    output << endl << "#059 sign -> +";
  }
sign:
  MINUS
  {
    output << endl << "#060 sign -> -";
  }
addop:
  PLUS
  {
    output << endl << "#062 addop -> +";
  }
addop:
  MINUS
  {
    output << endl << "#063 addop -> -";
  }
addop:
  OR
  {
    output << endl << "#064 addop -> OR";
  }
term:
  factor
  {
    output << endl << "#065 term -> factor";
  }
term:
  term mulop factor
  {
    output << endl << "#066 term -> term mulop factor";
  }
mulop:
  STAR
  {
    output << endl << "#067 mulop -> *";
  }
mulop:
  SLASH
  {
    output << endl << "#068 mulop -> /";
  }
mulop:
  DIV
  {
    output << endl << "#069 mulop -> DIV";
  }
mulop:
  MOD
  {
    output << endl << "#070 mulop -> MOD";
  }
mulop:
  AND
  {
    output << endl << "#071 mulop -> AND";
  }
factor:
  ID
  {
    output << endl << "#072 factor -> ID";
  }
factor:
  ID LBRACKET expression RBRACKET
  {
    output << endl << "#073 factor -> ID [ expression ]";
  }
factor:
  ID LPAREN expression_list RPAREN
  {
    output << endl << "#074 factor -> ID ( expression_list )";
  }
factor:
  LPAREN expression RPAREN
  {
    output << endl << "#075 factor -> ( expression )";
  }
factor:
  NOT factor
  {
    output << endl << "#076 factor -> NOT factor";
  }
factor:
  INTLIT
  {
    output << endl << "#077 factor -> INTLIT";
  }
factor:
  REALIT
  {
    output << endl << "#078 factor -> REALIT";
  }
factor:
  CHRLIT
  {
    output << endl << "#079 factor -> CHRLIT";
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