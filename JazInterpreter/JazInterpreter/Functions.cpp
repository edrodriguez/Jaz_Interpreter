#include "Functions.h"
/**
*  Pushes value to stack
*/
void push(string value) {
	MachineStack.top().push_back(stoi(value));
}
/**
*  Pops value from stack
*/
void pop() {
	MachineStack.top().pop_back();
}
/**
 * Pushes the value of passed variable on the Jaz Stack.
 * Takes the read list on the stack and pushes that value
 * onto the write list on the stack.
 */
void rvalue(string variable) {
	int value = 0;

	for (size_t i = 0; i < Variables.top().size(); i++) {
		if (variable == Variables.top()[i].getName()) {
			value = Variables.top()[i].getValue();
			break;
		}
	}

	//Need to add check for making sure variable was found!!!!!!!!!!
	MachineStack.top().push_back(value);
}
/**
 * Pushes the location passed onto the Jaz stack.
 * Takes the name passed on the write list on the stack.
 */
void lvalue(string variable) {
	//find if variable has already been declared
	bool found = false;
	Variable v;
	for (size_t i = 0; i < Variables.top().size(); i++) {
		if (variable == Variables.top()[i].getName()) {
			found = true;
			v = Variables.top()[i];
			break;
		}
	}

	//if not found create variable
	if (!found) {
		v.setName(variable);
		v.setValue(0);
	}

	Variables.top().push_back(v);
	MachineStack.top().push_back(int(&(Variables.top().back())));
}
/**
 * Takes the number and places it into the location below it.
 * Removes the last 2 variables in the write top and puts them together.
 *
 */
void colEquals() {
	//Add check if variable not found!!!!!!!!!!!
	int vValue = MachineStack.top().back();
	MachineStack.top().pop_back();
	int vAdress = MachineStack.top().back();
	MachineStack.top().pop_back();

	for (size_t i = 0; i < Variables.top().size(); i++) {
		if (vAdress == int(&(Variables.top()[i]))) {
			Variables.top()[i].setValue(vValue);
			break;
		}
	}
}
/**
 * Pushes a copy of the top value on Jaz stack.
 *
 * Pushes a copy from the Write top's last variable
 * into the write top.
 */
void copy() {
	int value = MachineStack.top().back();
	MachineStack.top().push_back(value);
}

void label(string part) {
	/**
	 * Something should go here
	 */
}
/**
 * Jumps to the location in the label.
 */
int goTo(string part) {
	/**
	 * Something should go here
	 */
	return 0;
}
/**
 * Jumps if the top value in the Write top's last location
 * is zero.
 */
int goFalse(string part) {
	/**
	 * Something should go here
	 */
	return 0;

}
/**
 * Jumps if the top value in the write top's last location is one.
 */
int goTrue(string part) {
	/**
	 * Something should go here
	 */
	return 0;
}
/**
 * Adds top two values on Jaz stack and places result on Jaz stack.
 * Takes the last two variables from the write top. Adds them together
 * and puts the result in the write top list.
 */
void plusOp() {
	int firstV = MachineStack.top().back();
	MachineStack.top().pop_back();
	int secondV = MachineStack.top().back();
	MachineStack.top().pop_back();
	int plusResult = 0;

	plusResult = firstV + secondV;
	MachineStack.top().push_back(plusResult);
}
/**
 * Subtracts top two values on Jaz stack and places result on Jaz stack.
 * Takes the last two variables from the write top. Subtracts them together
 * and puts the result in the write top list.
 */
void minusOp() {
	int firstV = MachineStack.top().back();
	MachineStack.top().pop_back();
	int secondV = MachineStack.top().back();
	MachineStack.top().pop_back();
	int minusResult = 0;

	minusResult = secondV - firstV;
	MachineStack.top().push_back(minusResult);
}
/**
 * Multiplies top two values on Jaz stack and places result on Jaz stack.
 * Takes the last two variables from the write top. Multiplies them together
 * and puts the result in the write top list.
 */
void multiOp() {
	int firstV = MachineStack.top().back();
	MachineStack.top().pop_back();
	int secondV = MachineStack.top().back();
	MachineStack.top().pop_back();
	int multResult = 0;

	multResult = firstV * secondV;
	MachineStack.top().push_back(multResult);
}
/**
 * Divides the top two values on Jaz stack and places result on Jaz stack.
 * Takes the last two variables from the write top. Divides them together
 * and puts the result in the write top list.
 */
void divOp() {
	int firstV = MachineStack.top().back();
	MachineStack.top().pop_back();
	int secondV = MachineStack.top().back();
	MachineStack.top().pop_back();
	int divResult = 0;

	divResult =  secondV / firstV;
	MachineStack.top().push_back(divResult);
}
/**
 * Mods the top two values on Jaz stack and places result on Jaz stack.
 * Takes the last two variables from the write top. Mods them together
 * and puts the result in the write top list.
 */
void modOp() {
	int firstV = MachineStack.top().back();
	MachineStack.top().pop_back();
	int secondV = MachineStack.top().back();
	MachineStack.top().pop_back();
	int modResult = 0;

	modResult = secondV % firstV;
	MachineStack.top().push_back(modResult);
}
/**
 * Logical AND the top two values on Jaz stack and places result on Jaz stack.
 * Takes the last two variables from the write top. Logical AND them together
 * and places the result into the write top list.
 */
void and() {
	int firstV = MachineStack.top().back();
	int secondV = MachineStack.top().back();

    if ((firstV == 1) && (secondV == 1)) {
        MachineStack.top().push_back( 1 );
    } else {
        MachineStack.top().push_back( 0 );
    }
}
/**
 * Logical NOT the top value on Jaz stack and places result on Jaz stack.
 * Takes the last variable from the write top. Logical NOT it
 * and places the result into the write top list.
 */
void not() {
	int stackTop = MachineStack.top().back();
	MachineStack.top().pop_back();

	if (stackTop == 1) {
		MachineStack.top().push_back(0);
	}
	else if (stackTop == 0) {
		MachineStack.top().push_back(1);
	}
	else {
		return;
	}
}
/**
 * Logical OR the top two values on Jaz stack and places result on Jaz stack.
 * Takes the last two variables from the write top. Logical OR them together
 * and places the result into the write top list.
 */
void or() {
	int firstV = MachineStack.top().back();
	int secondV = MachineStack.top().back();

	if ((firstV == 0) && (secondV == 0)) {
		MachineStack.top().push_back(0);
	}
	else {
		MachineStack.top().push_back(1);
	}
}
/**
 * Checks to see if the top to values and different.
 * If so place a 1 otherwise places a 0 onto the stack.
 */
void different() {
	int firstV = MachineStack.top().back();
	MachineStack.top().pop_back();
	int secondV = MachineStack.top().back();
	MachineStack.top().pop_back();

	if (firstV != secondV) {
		MachineStack.top().push_back(1);
	}
	else {
		MachineStack.top().push_back(0);
	}
}
/**
 * Checks if the write top minus one is less or equal write top
 */
void lessThanEq() {
	int firstV = MachineStack.top().back();
	MachineStack.top().pop_back();
	int secondV = MachineStack.top().back();
	MachineStack.top().pop_back();

	if (firstV <= secondV) {
		MachineStack.top().push_back(1);
	}
	else {
		MachineStack.top().push_back(0);
	}
}
/**
 * Checks if the write top minus one is greater or equals to the write top
 */
void greaterThanEq() {
	int firstV = MachineStack.top().back();
	MachineStack.top().pop_back();
	int secondV = MachineStack.top().back();
	MachineStack.top().pop_back();

	if (firstV >= secondV) {
		MachineStack.top().push_back(1);
	}
	else {
		MachineStack.top().push_back(0);
	}
}
/**
 * Checks if the write top minus one is less than the write top;
 */
void lessThan() {
	int firstV = MachineStack.top().back();
	MachineStack.top().pop_back();
	int secondV = MachineStack.top().back();
	MachineStack.top().pop_back();

	if (firstV < secondV) {
		MachineStack.top().push_back(1);
	}
	else {
		MachineStack.top().push_back(0);
	}
}
/**
 * Check if the write top minus one is greater than the write top.
 */
void greaterThan() {
	int firstV = MachineStack.top().back();
	MachineStack.top().pop_back();
	int secondV = MachineStack.top().back();
	MachineStack.top().pop_back();

	if (firstV > secondV) {
		MachineStack.top().push_back(1);
	}
	else {
		MachineStack.top().push_back(0);
	}
}
/**
 * Checks if the write top minus one is equal to the write top.
 */
void equalTo() {
	int firstV = MachineStack.top().back();
	MachineStack.top().pop_back();
	int secondV = MachineStack.top().back();
	MachineStack.top().pop_back();

	if (firstV == secondV) {
		MachineStack.top().push_back(1);
	}
	else {
		MachineStack.top().push_back(0);
	}
}
/**
 * Prints the value from the write top's last entry.
 */
void print() {
	int temp = MachineStack.top().back();
	cout << temp << endl;
}
/**
 * Prints the passed string.
 */
void show(string operand) {
	/**
     * Print operand
	 */
	cout << operand;
}
/**
 * Starts the parameter passing block.
 * Increases the stack table to start
 * the subprogram.
 */
void begin() {
	//MachineStack.top.push_back(new list<int>);
}
/**
 * Ends parameter passing block.
 * Decreases the Read top and sets begin to false.
 */
void end() {
	/**
	 * Something should go here
	 */
}
/**
 * Ends the function call get the top value from the jump stack.
 * If begin is set decrements the write top pointer.
 */
int Return() {
	/**
	 * Exiting...
	 */
	return 0;

}
/**
 * Starts the function call. Sets the instruction counter
 * to the location of the passed label. Sets the old instruction
 * pointer value onto the jump stack. If begin is set increments
 * the Read top pointer.
 */
int call(string part) {
	/**
	 * Something should go here
	 **/
	return 0;

}
