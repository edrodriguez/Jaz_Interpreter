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
    /**
	 * Here we grab the operator
	 */
	string intsrOperator = instruction[0];
	/**
	 * This will execute the instruction accordingly
	 */
	if (intsrOperator == "rvalue") {
		rvalue(instruction[1]);
	}
	else if (intsrOperator == "lvalue") {
		lvalue(instruction[1]);
	}
	else if (intsrOperator == ":=") {
		colEquals();
	}
	else if (intsrOperator == "copy") {
		copy();
	}
	else if (intsrOperator == "label") {
		label(instruction[1]);
	}
	else if (intsrOperator == "goto") {
		goTo(instruction[1]);
	}
	else if (intsrOperator == "gofalse") {
		goFalse(instruction[1]);
	}
	else if (intsrOperator == "gotrue") {
		goTrue(instruction[1]);
	}
	else if (intsrOperator == "halt") {
		Return();
	}
	else if (intsrOperator == "+") {
		plusOp();
	}
	else if (intsrOperator == "-") {
		minusOp();
	}
	else if (intsrOperator == "*") {
		multiOp();
	}
	else if (intsrOperator == "/") {
		divOp();
	}
	else if (intsrOperator == "div") {
		modOp();
	}
	else if (intsrOperator == "&") {
		and();
	}
	else if (intsrOperator == "!") {
		not();
	}
	else if (intsrOperator == "|") {
		or();
	}
	else if (intsrOperator == "<>") {
		different();
	}
	else if (intsrOperator == "<=") {
		lessThanEq();
	}
	else if (intsrOperator == ">=") {
		greaterThanEq();
	}
	else if (intsrOperator == "<") {
		lessThan();
	}
	else if (intsrOperator == ">") {
		greaterThan();
	}
	else if (intsrOperator == "=") {
		equalTo();
	}
	else if (intsrOperator == "print") {
		print();
	}
	else if (intsrOperator == "show") {
		/**
		* Here we grab the operand
		*/
		string content;
		for (size_t i = 1; i < instruction.size(); i++) {
			for (int j = 0; j < instruction[i].length(); j = 0) {
				content[i] = instruction[i][j];
			}

		}
		show(content);
	}
	else if (intsrOperator == "begin") {
		begin();
	}
	else if (intsrOperator == "end") {
		end();
	}
	else if (intsrOperator == "return") {
		Return();
	}
	else if (intsrOperator == "call") {
		call(instruction[1]);
	}
	else if (intsrOperator == "==") {
		/**
		 * Do nothing..
         *  This allows white space
         *  lines between instructions.
         */
	}
	else {
		cout << "Syntax Error: " << intsrOperator;
		return;
	}
}
