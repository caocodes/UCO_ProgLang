//--------------------------------------------------------------------
// File pasm_constants.cpp is the implementation for the 
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

#include "pasm_constants.h"
#include "pasmtkn.h"

using namespace std;

void PasmConstants::print(ostream& listing)
{
    
}

int PasmConstants::addInstruction(PasmInstruction instruction)
{
    int operand2 = instruction.getOperand2();
    switch (instruction.getOperand1())
    {
    case B_T: 
        cout << "boolean" << endl;
        cout << operand2 << endl;
        break;
    case C_T: 
        cout << "char" << endl;
        cout << operand2 << endl;
        break;
    case I_T: 
        cout << "int" << endl;
        cout << operand2 << endl;
        break;
    case R_T: 
        cout << "real" << endl;
        cout << operand2 << endl;
        break;
    case S_T: 
        cout << "string" << endl;
        cout << operand2 << endl;
        break;
    default:
        break;
    }

    return 0;
}