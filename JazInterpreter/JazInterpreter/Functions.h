#ifndef __HFUNCTIONS_H__
#define __HFUNCTIONS_H__

#include <cstdlib>
#include <iostream>
using namespace std;

class Functions{
protected:
	string part;
public:
	void rvalue(String part);
	void lvalue(String part);
	void colEquals();
	void copy();
	void label(String part, int i);
	int goTo(String part, int i);
	int goFalse(String part, int i);
	int goTrue(String part, int i);
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
	void show(String[] parts);
	void begin();
	void end();
	int Return();
	int call(String part, int i)

};

#endif