//--------------------------------------------------------------------
// File pasm.cpp contains functions which process command line arguments
// and invoke the scanner, repeatedly to find all the tokens in the input source file.
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
// Project:	p04.5
// Due:		March 31, 2022
// Project Account Number: tt035
//--------------------------------------------------------------------

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

#include "pasmlex.h"
#include "pasmpar.h"
using namespace std;


//--------------------------------------------------------------------
// Externals
//--------------------------------------------------------------------
ofstream trace; // trace file stream
ofstream listing; // listing file stream

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

int main(int argc, char *argv[])
{
	try
	{
		char inputFile[255], traceFile[255], listingFile[255];
		switch (argc)
		{
		case 1: // no file arg provided in command line
			cout << "Enter the input file name.";
			cin >> inputFile;
			break;
		case 2: // file arg provided in command line
			strcpy(inputFile, argv[1]);
			break;
		default:
			throw CommandLineException(argc);
			exit(EXIT_FAILURE);
		}

		// input file extension check
		if (!strstr(inputFile, ".pcd"))
			throw ExtException(inputFile);

		// create trace, listing files
		strcpy(traceFile, ((string)inputFile).replace(((string)inputFile).size() - 4, 4, ".atrc").c_str());
		strcpy(listingFile, ((string)inputFile).replace(((string)inputFile).size() - 4, 4, ".alst").c_str());

		// open files
		FILE *inputPointer = fopen(inputFile, "r");
		if (!inputPointer)
			throw FileException(inputFile);
		trace.open(traceFile);
		if (!trace)
			throw FileException(traceFile);
		listing.open(listingFile);
		if (!listing)
			throw FileException(listingFile);
		
		// parse input file
		Parser p(inputPointer);
		int rc = p.parse();
		p.printListing();
		
		// close resources
		trace << endl;
		trace.close();
		listing << endl;
		listing.close();
		fclose(inputPointer);
	}
	catch (...)
	{
		cout << endl
			 << "Exception encountered." << endl;
		exit(EXIT_FAILURE);
	}
	return 0;
}
