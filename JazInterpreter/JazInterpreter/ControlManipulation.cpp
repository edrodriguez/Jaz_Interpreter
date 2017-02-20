#include <sstream>
#include <iterator>

#include "ControlManipulation.h"
#include "SymbolTable.h"

using namespace std;


void separateInstructions(vector<string> instructions) {
	InstructionList.resize(instructions.size());

	for (size_t i = 0; i < instructions.size(); i++) {
		istringstream iss(instructions[i]);
		copy(istream_iterator<string>(iss),
			istream_iterator<string>(),
			back_inserter(InstructionList[i]));
	}
}

void extractLabels() {
	for (size_t i = 0; i < InstructionList.size(); i++) {
		if (InstructionList[i][0] == "label")
			labels.insert({ InstructionList[i][1], i });
	}
}

void runProgram()
{
	for (programCounter; programCounter < InstructionList.size(); programCounter++)
	{
		executeInstruction(InstructionList[programCounter]);
	}
}

void executeInstruction(vector<string> instruction)
{
}
