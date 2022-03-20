//--------------------------------------------------------------------
// File pasm_constants.h contains the interface for the 
// PasmConstants utility class for processing constants
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
// Project:	p04.4
// Due:		March 24, 2022
// Project Account Number: tt035
//--------------------------------------------------------------------

#include <iostream>
#include <vector>
#include "pasm_instruction.h"
using namespace std;

class PasmConstants {
    vector<char> charConstants;
    vector<char*> stringConstants;
    vector<int> intConstants;
    vector<double> realConstants;
    vector<int> setConstants;
    vector<PasmInstruction> instructions;
    
    public:
        void print(ostream& listing); 
        void addInstruction(PasmInstruction instruction);
};