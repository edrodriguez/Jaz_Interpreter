#include "SymbolTable.h"

unordered_map<string, int> labels;
stack <int> JumpStack;
vector<vector<string>> InstructionList;
list  <string> OutputQueue;
stack <list<int>> MachineStack;