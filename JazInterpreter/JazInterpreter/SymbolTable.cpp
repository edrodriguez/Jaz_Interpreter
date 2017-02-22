#include "SymbolTable.h"

unordered_map<string, int> labels;
stack<int> JumpStack;
vector<vector<string>> InstructionList;
list<string> OutputQueue;
stack<list<int>> MachineStack;
stack<vector<Variable>> Variables;
vector<Variable> *writeVariablePointer;
vector<Variable> *readVariablePointer;

void initializeSymbols() {
	Variables.push(*(new vector<Variable>));
	MachineStack.push(*(new list<int>));
	writeVariablePointer = &Variables.top();
	readVariablePointer = &Variables.top();
}