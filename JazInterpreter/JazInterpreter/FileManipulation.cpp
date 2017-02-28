////////////////////////////////////////////////////////////////
//	Description:This file contains the input/output module of
//	the interpreter. It is in charge of reading a program to be
//	interpreted and saving each of its instructions. It also
//	write the results of running the program into an indicated
//	output file
////////////////////////////////////////////////////////////////
#include <iostream>
#include <fstream>
#include <vector>
#include <regex>
#include "FileManipulation.h"
#include "SymbolTable.h"
using namespace std;

//Extract each line of the file indicated by filename and
//write each line as an entry in the vector instructions
void ReadFile(string fileName, vector<string> &instructions){
	ifstream inputFile;
	string line, newFileName;
	bool found = false;
	len = fileName.length();

	//The idea is to check if there is a .jaz
	found = fileName[len - 4] == '.' && fileName[len - 3] == 'j'
		    && fileName[len - 2] == 'a' && fileName[len - 1] == 'z';
	if (found)
    {
		inputFile.open(fileName);
	}
	else
	{
		newFileName = fileName + ".jaz";
		inputFile.open(newFileName.c_str()); 
	}

	if (inputFile.good())
	{
		string line;
		while (!inputFile.eof()) {
			getline(inputFile, line);
			//Ignore empty lines
			if (line != "")
				instructions.push_back(line);
		}
	}
	else
		cout << "Could not read input file." << endl;

	inputFile.close();
}

//Write the contents of the Output queue to the file indicated in filename
void WriteFile(string fileName) {
	ofstream outputFile;
	string newFileName;

	newFileName = fileName + ".out";
	outputFile.open(newFileName.c_str());
	if (outputFile.good())
	{
		while(!OutputQueue.empty()) {
			outputFile << OutputQueue.front();
			OutputQueue.pop_front();
		}
	}
	else
		cout << "Could not write to output file." << endl;

	outputFile.close();
}
