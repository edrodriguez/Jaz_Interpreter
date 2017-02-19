#ifndef __HVARIABLE_H__
#define __HVARIABLE_H__

#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

class Variable{
protected:
	string name;
	int value;
public:
	Variable();
	Variable(string name, int value);

	string getName() { return name; };
	int getValue() { return value; };

	void setName(string name);
	void setValue(int value);

};

#endif