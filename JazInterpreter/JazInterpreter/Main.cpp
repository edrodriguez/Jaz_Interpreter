////////////////////////////////////////////////////////////////
//	Description:This file contains the main entry to the
//				interpreter application. It calls fucntions in
//				the different modules in order to get
//				the information from an source file, extract
//				the instructions from it, execute them and then
//				write the results to another file
////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>
#include <vector>

#include "FileManipulation.h"
#include "ControlManipulation.h"
#include "SymbolTable.h"

using namespace std;

int main(int argc, char* argv[])
{
	//Run the appropriate mode of Operation
	if (argv[1] != nullptr)
	{
		string mode = argv[1];

		if (mode == "-test")
		{
			cout << "Running Tests for Intepreter" << endl;
			//Tests
			return 0;
		}
		else if (mode == "-interpret")
		{
			string inputFileName, outputFileName;
			string file;

			if (argv[2] != nullptr)
				file = argv[2];

			//Parse parameters
			if (file == "-infile")
			{
				if (argv[3] != nullptr)
					inputFileName = argv[3];

				if (argv[4] != nullptr && argv[4] == "-outfile")
					outputFileName = argv[5];
				else
					outputFileName = "Results.txt";
			}
			else if (argv[2] == "-outfile")
			{
				if (argv[3] != nullptr)
					outputFileName = argv[3];

				if (argv[4] != nullptr && argv[4] == "-infile")
					outputFileName = argv[5];
				else
				{
					cout << "Error running the interpreter. You need to provide a source file." << endl;
				}
			}
			else
			{
				cout << "Error running the interpreter. You need to provide a source file." << endl;
				return 0;
			}

			//Intepreter Operation
			vector<string> instructions;
			initializeSymbols();
			ReadFile(inputFileName, instructions);
			separateInstructions(instructions);
			extractLabels();
			runProgram();
			WriteFile(outputFileName);

		}
	}
	cout << "Error running the interpreter. You need to provide mode of operation." << endl;

	return 0;
}