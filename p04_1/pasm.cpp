//--------------------------------------------------------------------
// File pasm.cpp contains functions which process command line arguments
// and invoke the scanner, repeatedly to find all the tokens in the input source file.
//--------------------------------------------------------------------
// Author:	Mr. Cao Truong
// Student ID: *20500231
// E-Mail:	ctruong3@uco.edu
// Course:	CMSC 5023 – Programming Languages
// CRN:		22708, Spring 2022
// Project:	p04.1
// Due:		February 22, 2022
// Project Account Number: tt035
//--------------------------------------------------------------------

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

#include "pasmlex.h"
#include "pasmtkn.h"
using namespace std;

//-------------------------------------------------------------------------
// FileException is thrown when a file whose name is given on the command line
// cannot be opened.
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
// CommandLineException is thrown when too many arguments are given on the command
// line.
//-------------------------------------------------------------------------
struct CommandLineException
{
	CommandLineException(int ac)
	{
		cout << endl;
		cout << "Too many (" << ac << ") command line arguments.";
	}
};

//-------------------------------------------------------------------------
// ExtException is thrown when a file's extension is incorrect
//-------------------------------------------------------------------------
struct ExtException
{
	ExtException(char *fn)
	{
		cout << endl;
		cout << "File " << fn << " has the incorrect file extension.";
		cout << endl;
	}
};

void printTrace(ostream &out, const map<int, string> &tokenMap, Lexer &lexer)
{
	int token = lexer.lex();
	while (token > 0)
	{
		out << "Token: " << lexer.getSpelling();
		out << "\t Position: (" << lexer.getLine() << ", " << lexer.getColumn() << ")";
		out << "\t Code: " << token;
		out << "\t Symbol: " << tokenMap.at(token);
		token = lexer.lex();
		out << endl;
	}
}

int main(int argc, char *argv[])
{
	try
	{
		char inputfile[255], outputfile[255];
		switch (argc)
		{
		case 1: // no file arg provided in command line
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

		// input file extension check
		if (!strstr(inputfile, ".pcd"))
			throw ExtException(inputfile);

		strcpy(outputfile, ((string)inputfile).replace(((string)inputfile).size() - 4, 4, ".atrc").c_str());

		FILE *inputPointer = fopen(inputfile, "r");
		if (!inputPointer)
			throw FileException(inputfile);

		ofstream output(outputfile);
		Lexer lexer(inputPointer);
		printTrace(output, tokenMap, lexer);

		fclose(inputPointer);
		output.close();
	}
	catch (...)
	{
		cout << endl
			 << "Exception encountered." << endl;
		exit(EXIT_FAILURE);
	}
	return 0;
}
