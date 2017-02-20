#include <sstream>
#include <iterator>
#include "Functions.h"
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
    string content;
    int index;
    /**
	 * Here we grab the operator
	 */
	string part = instruction[0];
	/**
	 * Here we grab the operand
	 */
	for(size_t i = 1; i < instruction.size(); i++){
        for(int j = 0; j < instruction[i].length(); j = 0){
            content[ i ] = instruction[ i + j ];
        }

	}
	/**
	 * This will execute the instruction accordingly
	 */
	if (part == "rvalue") {
//		rvalue();
	}
	else if (part == "lvalue") {
//		lvalue();
	}
	else if (part == ":=") {
//		colEquals();
	}
	else if (part == "copy") {
//		copy();
	}
	else if (part == "label") {
//		label();
	}
	else if (part == "goto") {
//		index = goTo();
	}
	else if (part == "gofalse") {
//		index = goFalse();
	}
	else if (part == "gotrue") {
//		index = goTrue(part[1], i);
	}
	else if (part == "halt") {
		return;
	}
	else if (part == "+") {
//		plus();
	}
	else if (part == "-")) {
//		minus();
	}
	else if (part == "*") {
//		multi();
	}
	else if (part == "/") {
//		div();
	}
	else if (part == "div") {
//		mod();
	}
	else if (part == "&") {
//		and();
	}
	else if (part == "!") {
//		not();
	}
	else if (part == "|") {
//		or();
	}
	else if (part == "<>") {
//		different();
	}
	else if (part == "<=") {
//		lessThanEq();
	}
	else if (part == ">=") {
//		greaterThanEq();
	}
	else if (part == "<") {
//		lessThan();
	}
	else if (part == ">") {
//		greaterThan();
	}
	else if (part == "=") {
//		equalTo();
	}
	else if (part == "print") {
//		print();
	}
	else if (part == "show") {
//		show(part);
	}
	else if (part == "begin") {
//		begin();
	}
	else if (part == "end") {
//		end();
	}
	else if (part == "return") {
//		index = Return();
	}
	else if (part == "call") {
//		index = call(part[1], i);
	}
	else if (part == "==") {
		/**
		 * Do nothing..
         *  This allows white space
         *  lines between instructions.
         */
	}
	else {
		cout << "Syntax Error: " << part;
		return;
	}
	return;
}
