#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;


void Read_File(){
	ifstream fileIn ();
	
	fileIn.close();
}

void Write_File(string fileName, string content) {
	ofstream fileOut ((char *) fileName.c_str(), ofstream::out);

	fileOut << content;

	fileOut.close();
}