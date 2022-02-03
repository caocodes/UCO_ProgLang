//--------------------------------------------------------------------
// File p01.cpp contains functions which process command line arguments and invoke the scanner, repeatedly to find all the tokens in the input source file.
//--------------------------------------------------------------------
// Author:	Mr. Cao Truong
// Student ID: *20500231
// E-Mail:	ctruong3@uco.edu
// Course:	CMSC 5023 – Programming Languages
// CRN:		22708, Spring 2022
// Project:	p01
// Due:		February 3, 2022
// Project Account Number: tt035
//--------------------------------------------------------------------
// C++ include files
//--------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <map>

using namespace std;
//--------------------------------------------------------------------
// Application include files
//--------------------------------------------------------------------
#include "p01lex.h"
#include "p01tkn.h"

//--------------------------------------------------------------------
//Exceptions
//--------------------------------------------------------------------
map<int, string> tok;
//--------------------------------------------------------------------
//Class Declarations
//--------------------------------------------------------------------
void printData(ostream &out, map<int, string> &tok, Lexer &lexer);
void executeLexScanner(const char *inputfile, const char *outputfile);

//Classes are initialized
//--------------------------------------------------------------------
//Function lexicalScanner
//	Takes in FILE input and output stream to call for the Lexer function
//	from p01lex.l file.
//	Then print out the tokens using the printData function
//--------------------------------------------------------------------
void lexicalScanner(FILE *i, ostream &out)
{
	Lexer lexer(i);
	printData(out, tok, lexer);
}
//--------------------------------------------------------------------
//Function printData
//	Takes in output stream and the token map and lexer to call for
//	the getScan() function from p01lex.l file.
//	Then print out the formatted tokens with their associated
//	token name, line number, column number, and spelling
//--------------------------------------------------------------------
void printData(ostream &out, map<int, string> &tok, Lexer &lexer)
{
	int t = lexer.getScan();

	while (t > 0)
	{
		out << endl;
		out << setw(15) << "Token Code: " << t;
		out << " ";
		out << "\t Token Name: " << tok.at(t);
		out << " ";
		out << "\t Line: " << lexer.getLines();
		out << " ";
		out << "\t Column: " << lexer.getColumns();
		out << " ";
		out << "\t Token Spelling: " << lexer.spellCheck();
		t = lexer.getScan();
	}
	out << endl;
}

//--------------------------------------------------------------------
//Function executeLexScanner
//	Takes in char* input and char* output
//	Opens input and output files and performs the lexicalScanner function
//	closes the files when finished.
//--------------------------------------------------------------------
void executeLexScanner(const char *inputfile, const char *outputfile)
{
	FILE *input = fopen(inputfile, "r");
	//TODO: FileExceptions
	ofstream output(outputfile);
	lexicalScanner(input, output);

	fclose(input);
	output.close();
}

int main(int argc, char *argv[])
{

	//Initializing the map with all the tokens and their corresponding token
	//defined number starting from 257
	tok[257] = "TOKENSIZE";
	tok[258] = "AND";
	tok[259] = "ARRAY";
	tok[260] = "BEGAN";
	tok[261] = "DIV";
	tok[262] = "DO";
	tok[263] = "DOWNTO";
	tok[264] = "ELSE";
	tok[265] = "END";
	tok[266] = "FOR";
	tok[267] = "FUNCTION";
	tok[268] = "IF";
	tok[269] = "INTEGER";
	tok[270] = "MOD";
	tok[271] = "NOT";
	tok[272] = "OF";
	tok[273] = "OR";
	tok[274] = "PROCEDURE";
	tok[275] = "PROGRAM";
	tok[276] = "REPEAT";
	tok[277] = "THEN";
	tok[278] = "TO";
	tok[279] = "UNTIL";
	tok[280] = "VAR";
	tok[281] = "WHILE";
	tok[282] = "ID";
	tok[283] = "INTLIT";
	tok[284] = "REALIT";
	tok[285] = "CHRLIT";
	tok[286] = "EQU";
	tok[287] = "NEQ";
	tok[288] = "LES";
	tok[289] = "LEQ";
	tok[290] = "GRT";
	tok[291] = "GEQ";
	tok[292] = "PLUS";
	tok[293] = "MINUS";
	tok[294] = "STAR";
	tok[295] = "SLASH";
	tok[296] = "ASSIGN";
	tok[297] = "LPAREN";
	tok[298] = "RPAREN";
	tok[299] = "LBRACKET";
	tok[300] = "RBRACKET";
	tok[301] = "LCURLY";
	tok[302] = "RCURLY";
	tok[303] = "COLON";
	tok[304] = "SEMICOLON";
	tok[305] = "COMMA";
	tok[306] = "PERIOD";
	tok[307] = "RANGE";
	tok[308] = "APOSTROPHE";
	tok[309] = "ERROR";
	tok[310] = "TOKENMAX";

	//initialization
	char inputfile[255], outputfile[255];
	char *p;
	switch (argc)
	{
	case 1: //no file arg provided in command line
		cout << "Enter the input file name. ";
		cin >> inputfile;
		//This is to check for whether in the input file is a Pascal .pas
		//file
		p = strstr(inputfile, ".pas");
		if (p)
		{
			strcpy(outputfile, ((string)inputfile).replace(
													  //renaming the output file to have .trc extension
													  ((string)inputfile).size() - 4, 4, ".trc")
								   .c_str());
		}
		else
		{
			cout << "Please enter the corrent input Pascal files." << endl;
		}
		break;
	case 2: //if inputting the program call of "$p01 some.pas"
		strcpy(inputfile, argv[1]);
		//This is to check for whether in the input file is a Pascal .pas
		//file
		p = strstr(inputfile, ".pas");
		if (p)
		{
			strcpy(outputfile, ((string)inputfile).replace(
													  //renaming the output file to have a .trc extension
													  ((string)inputfile).size() - 4, 4, ".trc")
								   .c_str());
		}
		else
		{
			cout << "Please enter the corrent input Pascal files." << endl;
		}
		break;
	default:
		exit(EXIT_FAILURE);
	}
	//Call executeLexScanner to go throught the input file and scan through the
	//program for tokens and output them into the output file.
	executeLexScanner(inputfile, outputfile);

	return 0;
}
