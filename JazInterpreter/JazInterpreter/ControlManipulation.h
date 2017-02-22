#pragma once
#include <vector>
#include <string>

using namespace std;

static int programCounter = 0;

void separateInstructions(vector<string> instructions);

void extractLabels();

void runProgram();

void executeInstruction(vector<string> instruction);
