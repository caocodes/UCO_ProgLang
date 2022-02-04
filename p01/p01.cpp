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

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

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

void printTrace(ostream &out, const map<int, string> &tokenMap, Scanner &scanner)
{
	int token = scanner.lex();
	while (token > 0)
	{
		out << "Token: " << scanner.getSpelling();
		out << "\t Position: (" << scanner.getLine() << ", " << scanner.getColumn() << ")";
		out << "\t Code: " << token;
		out << "\t Symbol: " << tokenMap.at(token);
		token = scanner.lex();
		out << endl;
	}
}

int main(int argc, char *argv[])
{
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
	printTrace(output, tokenMap, scanner);

	fclose(inputPointer);
	output.close();

	return 0;
}
