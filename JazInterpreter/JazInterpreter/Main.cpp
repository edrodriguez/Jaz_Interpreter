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

using namespace std;

int main(int argc, char* argv[])
{
	//Select mode of operation
	if (argv[1] != nullptr)
	{
		string mode = argv[1];

		for (size_t i = 0; i < mode.size(); i++)
			mode[i] = tolower(mode[i]);

		if (mode == "-test")
		{
			cout << "Running Tests for Intepreter" << endl;
			//Tests
			return 0;
		}
		else if (mode == "-interpret")
		{
			string inputFileName, outputFileName;

			if (argv[2] == "-infile")
			{
				inputFileName = argv[3];

				if (argv[4] != nullptr && argv[4] == "-outfile")
					outputFileName = argv[5];
				else
					outputFileName = "Results.txt";
			}
			else if (argv[2] == "-outfile")
			{
				outputFileName = argv[3];

				if (argv[4] != nullptr && argv[4] == "-infile")
					outputFileName = argv[5];
				else
				{
					cout << "Error running the interpreter. You need to provide a source file." << endl;
				}
			}
		}
	}
	cout << "Error running the interpreter. You need to provide mode of operation." << endl;


}