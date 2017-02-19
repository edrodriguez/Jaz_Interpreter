#pragma once
#include "Variable.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <list>
using namespace std;


class SymbolTable {
public:
	stack < int    > JumpStack;
	vector< string > InstructionList;
	list  < string > OutputQueue;
	stack < list < int > > MachineStack;
};