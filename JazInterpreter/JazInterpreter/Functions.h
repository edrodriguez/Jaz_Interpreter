#pragma once
#include <cstdlib>
#include <iostream>
#include "SymbolTable.h"
#include "Variable.h"
#include <string>
using namespace std;

void push(string value); /*_/*/

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

void show(string);

void label( string );
int goTo( string );
int goFalse( string );
int goTrue( string );
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
void begin();
void end();
int Return();
int call( string );
