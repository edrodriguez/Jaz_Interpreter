#ifndef __HJAZINTERPRETER__
#define __HJAZINTERPRETER_H__

#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

class Functions {
protected:

public:

	
}

class stack () {
protected:

public:
	

}

class File_Manipulation {
protected:

public:
	void Read_File  () { };
	void Write_File ( string fileName , string content );
	
}

class Variable {
protected:
	string value, name;
public:
	Variable () ;
	Variable ( string name, int value) ;
	
	string getName () { return name; };
	int getValue   () { return value; };
	void setName   ( string name );
	void setValue  ( string value );
};

#endif