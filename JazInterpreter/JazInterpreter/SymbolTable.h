#pragma once
#include "Variable.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <list>
using namespace std;


extern	stack <int> JumpStack;
extern	vector<string> InstructionList;
extern	list  <string> OutputQueue;
extern	stack <list<int>> MachineStack;