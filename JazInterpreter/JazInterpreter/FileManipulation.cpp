#include <cstdlib>
#include <iostream>
#include <fstream>
#include <vector>

#include "FileManipulation.h"
#include "SymbolTable.h"
using namespace std;


void ReadFile(string fileName, vector<string> &instructions){
	ifstream inputFile;
	string line;

	inputFile.open(fileName);

	if (inputFile.good())
	{
		string line;
		while (!inputFile.eof()) {
			getline(inputFile, line);
			if (line != "")
				instructions.push_back(line);
		}
	}
	else
		cout << "Could not read input file." << endl;

	inputFile.close();
}

void WriteFile(string fileName) {
	ofstream outputFile;
	OutputQueue;

	outputFile.open(fileName);
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