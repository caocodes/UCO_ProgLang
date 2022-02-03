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

#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <map>
#include "p01lex.h"
#include "p01tkn.h"
using namespace std;

//-------------------------------------------------------------------------
//FileException is thrown when a file whose name is given on the command line
//cannot be opened.
//-------------------------------------------------------------------------
struct FileException
{
	FileException(char *fn)
	{
		cout << endl;
		cout << "File " << fn << " cannot be opened.";
	}
};

//-------------------------------------------------------------------------
//CommandLineException is thrown when too many arguments are given on the command
//line.
//-------------------------------------------------------------------------
struct CommandLineException
{
	CommandLineException(int ac)
	{
		cout << endl;
		cout << "Too many (" << ac << ") command line arguments.";
	}
};

map<int, string> tok;

void printData(ostream &out, map<int, string> &tok, Scanner &scanner)
{
	int t = scanner.getScan();

	while (t > 0)
	{
		out << endl;
		out << setw(15) << "Token Code: " << t;
		out << " ";
		out << "\t Token Name: " << tok.at(t);
		out << " ";
		out << "\t Line: " << scanner.getLines();
		out << " ";
		out << "\t Column: " << scanner.getColumns();
		out << " ";
		out << "\t Token Spelling: " << scanner.spellCheck();
		t = scanner.getScan();
	}
	out << endl;
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

	char inputfile[255], outputfile[255];
	switch (argc)
	{
	case 1: //no file arg provided in command line
		cout << "Enter the input file name.";
		cin >> inputfile;
		break;
	case 2: // file arg provided in command line
		strcpy(inputfile, argv[1]);
		break;
	default:
		throw CommandLineException(argc);
		exit(EXIT_FAILURE);
	}
	
	//input file extension check
	if (!strstr(inputfile, ".pas"))
		throw FileException(inputfile);
	strcpy(outputfile, ((string)inputfile).replace(((string)inputfile).size() - 4, 4, ".trc").c_str());

	FILE *inputPointer = fopen(inputfile, "r");
	if (!inputPointer)
		throw FileException(inputfile);

	ofstream output(outputfile);
	Scanner scanner(inputPointer);
	printData(output, tok, scanner);

	fclose(inputPointer);
	output.close();

	return 0;
}
