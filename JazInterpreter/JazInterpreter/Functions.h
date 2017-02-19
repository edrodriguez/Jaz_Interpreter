#pragma once

#include <cstdlib>
#include <iostream>
using namespace std;


void rvalue(string part);
void lvalue(string part);
void colEquals();
void copy();
void label(string part, int i);
int goTo(string part, int i);
int goFalse(string part, int i);
int goTrue(string part, int i);
void plus();
void minus();
void multi();
void div();
void mod();
void and();
void not();
void or();
void different();
void lessThanEq();
void greaterThanEq();
void lessThan();
void greaterThan();
void equalTo();
void print();
void show(string parts);
void begin();
void end();
int Return();
int call(string part, int i);