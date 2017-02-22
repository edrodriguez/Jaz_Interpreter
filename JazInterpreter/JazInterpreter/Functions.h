#pragma once
#include <cstdlib>
#include <iostream>
#include "SymbolTable.h"
#include "Variable.h"
#include <string>
using namespace std;


//DO WE NEED A HALT FUNCTION??
void push(string value);

void pop();

void rvalue(string variable);

void lvalue(string variable);

void colEquals();

void copy();

void plusOp();

void minusOp();

void multiOp();

void divOp();

void modOp();

void show(vector<string>);

void and();

void not();

void or ();

void label(string label, int programCounter);

void goTo(string label, int &programCounter);

void goFalse(string label, int &programCounter);

void goTrue(string label, int &programCounter);

void different();
void lessThanEq();
void greaterThanEq();
void lessThan();
void greaterThan();
void equalTo();
void print();
void begin();
void end();
void Return(int &programCounter);
void call(string label, int &programCounter);
void halt(int &programCounter);
