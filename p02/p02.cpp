//--------------------------------------------------------------------
// File p02.cpp contains functions which process command line arguments 
// and invoke the scanner, repeatedly to find all the tokens in the input source file.
//--------------------------------------------------------------------
// Author:	Mr. Cao Truong
// Student ID: *20500231
// E-Mail:	ctruong3@uco.edu
// Course:	CMSC 5023 – Programming Languages
// CRN:		22708, Spring 2022
// Project:	p02
// Due:		February 17, 2022
// Project Account Number: tt035
//--------------------------------------------------------------------

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

#include "p02lex.h"
#include "p02par.h"
using namespace std;

//--------------------------------------------------------------------
// Externals
//--------------------------------------------------------------------
ofstream output; // trace file stream

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
		cout << endl;
	}
};

//-------------------------------------------------------------------------
// CommandLineException is thrown when too many arguments are given on the command
// line.
//-------------------------------------------------------------------------
struct CommandLineException
{
	CommandLineException(int m, int a)
	{
		cout << endl;
		cout << "Too many file names on the command line.";
		cout << endl;
		cout << m << " file name(s) are permitted on the command line.";
		cout << endl;
		cout << a << " file name(s) appeared on the command line.";
		cout << endl;
	}
};

int main(int argc, char *argv[])
{
	try
	{
		char inputfile[255], outputfile[255];
		
		switch (argc)
		{
		case 1: // no file arg provided in command line
			cout << "Enter the input file name: ";
			cin >> inputfile;
			break;
		case 2: // file arg provided in command line
			strcpy(inputfile, argv[1]);
			break;
		default:
			throw CommandLineException(1, argc - 1);
			exit(EXIT_FAILURE);
		}

		// input file extension check
		if (!strstr(inputfile, ".pas"))
			throw ExtException(inputfile);

		// create .trc output file
		strcpy(outputfile, ((string)inputfile).replace(((string)inputfile).size() - 4, 4, ".trc").c_str());

		// opens input file
		FILE *inputPointer = fopen(inputfile, "r");
		if (!inputPointer)
			throw FileException(inputfile);

		// opens output file
		output.open(outputfile);
		if (!output)
			throw FileException(outputfile);
		
		// parse input file
		Parser P(inputPointer);
		int rc = P.Parse();

		// close resources
		output << endl;
		output.close();
		fclose(inputPointer);
	}
	catch (...)
	{
		cout << endl << "Exception encountered." << endl;
		exit(EXIT_FAILURE);
	}
	return 0;
}
