#pragma once
#include "Variable.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <list>
#include <unordered_map>
using namespace std;

extern unordered_map<string, int> labels;
extern stack <int> JumpStack;
extern vector<vector<string>> InstructionList;
extern list  <string> OutputQueue;
extern stack <list<int>> MachineStack;
extern stack<vector<Variable>> Variables;