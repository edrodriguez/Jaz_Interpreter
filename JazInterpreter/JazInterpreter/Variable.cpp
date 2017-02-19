#include "Variable.h"

Variable::Variable(){

	string name = "";
	int value = 0;

	this->name =  name;
	this->value =  value;
}

Variable::Variable(string name, int value){

	this->name =  name;
	this->value =  value;

}

void Variable::setName(string name) {
	this->name = name;
}

void Variable::setValue(int value) {
	this->value = value;
}

