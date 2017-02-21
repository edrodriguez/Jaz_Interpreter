#pragma once
#include <cstdlib>
#include <iostream>
#include <string>
#include "Variable.h"
using namespace std;

void push(string value);

void rvalue(string variable);

void lvalue(string variable);

void colEquals();

void copy();

void label( string );
int goTo( string );
int goFalse( string );
int goTrue( string );
void plusOp();
void minusOp();
void multiOp();
void divOp();
void modOp();
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
void show( string );
void begin();
void end();
int Return();
int call( string );