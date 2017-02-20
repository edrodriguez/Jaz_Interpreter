#pragma once
#include <vector>
#include <string>

using namespace std;

static size_t programCounter = 0;

void separateInstructions(vector<string> instructions);

void extractLabels();

void runProgram();

void executeInstruction(vector<string> instruction);
