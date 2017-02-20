#include "Functions.h"
/**
 * Pushes the value of passed variable on the Jaz Stack.
 * Takes the read list on the stack and pushes that value
 * onto the write list on the stack.
 */
void rvalue(string part) {
	/**
	 * Something should go here
	 */
}
/**
 * Pushes the location passed onto the Jaz stack.
 * Takes the name passed on the write list on the stack.
 */
void lvalue(string part) {
	/**
	 * Something should go here
	 */
}
/**
 * Takes the number and places it into the location below it.
 * Removes the last 2 variables in the write top and puts them together.
 * 
 */
void colEquals() {
	/**
	 * Something should go here
	 */
}
/**
 * Pushes a copy of the top value on Jaz stack.
 * 
 * Pushes a copy from the Write top's last variable
 * into the write top.
 */
void copy() {
	/**
	 * Something should go here
	 */
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
	Variable firstV;
	Variable secondV;
	int plusResult = 0;

	plusResult = firstV.getValue + secondV.getValue;
}
/**
 * Subtracts top two values on Jaz stack and places result on Jaz stack.
 * Takes the last two variables from the write top. Subtracts them together
 * and puts the result in the write top list.
 */
void minusOp() {
	Variable firstV;
	Variable secondV;
	int minusResult = 0;

	minusResult = secondV.getValue - firstV.getValue;
}
/**
 * Multiplies top two values on Jaz stack and places result on Jaz stack.
 * Takes the last two variables from the write top. Multiplies them together
 * and puts the result in the write top list.
 */
void multiOp() {
	Variable firstV;
	Variable secondV;
	int multResult = 0;

	multResult = firstV.getValue * secondV.getValue;
}
/**
 * Divides the top two values on Jaz stack and places result on Jaz stack.
 * Takes the last two variables from the write top. Divides them together
 * and puts the result in the write top list.
 */
void divOp() {
	Variable firstV;
	Variable secondV;
	int dicResult = 0;

	dicResult =  secondV.getValue / firstV.getValue;
}
/**
 * Mods the top two values on Jaz stack and places result on Jaz stack.
 * Takes the last two variables from the write top. Mods them together
 * and puts the result in the write top list.
 */
void modOp() {
	Variable firstV;
	Variable secondV;
	int modResult = 0;

	modResult = secondV.getValue % firstV.getValue;
}
/**
 * Logical AND the top two values on Jaz stack and places result on Jaz stack.
 * Takes the last two variables from the write top. Logical AND them together
 * and places the result into the write top list.
 */
void and() {
	/**
	 * Something should go here
	 */
}
/**
 * Logical NOT the top value on Jaz stack and places result on Jaz stack.
 * Takes the last variable from the write top. Logical NOT it
 * and places the result into the write top list.
 */
void not() {
	/**
	 * Something should go here		 
	 */
}
/**
 * Logical OR the top two values on Jaz stack and places result on Jaz stack.
 * Takes the last two variables from the write top. Logical OR them together
 * and places the result into the write top list.
 */
void or() {
	/**
	 * Something should go here
	 */
}
/**
 * Checks to see if the top to values and different.
 * If so place a 1 otherwise places a 0 onto the stack.
 */
void different() {
	/**
	 * Something should go here
	 */
}
/**
 * Checks if the write top minus one is less or equal write top
 */
void lessThanEq() {
	/**
	 * Something should go here
	 */
}
/**
 * Checks if the write top minus one is greater or equals to the write top
 */
void greaterThanEq() {
	/**
	 * Something should go here
	 */
}
/**
 * Checks if the write top minus one is less than the write top;
 */
void lessThan() {
	/**
	 * Something should go here
	 */
}
/**
 * Check if the write top minus one is greater than the write top.
 */
void greaterThan() {
	/**
	 * Something should go here
	 */
}
/**
 * Checks if the write top minus one is equal to the write top. 
 */
void equalTo() {
	/**
	 * Something should go here
	 */
}
/**
 * Prints the value from the write top's last entry. 
 */
void print() {
	/**
	 * Something should go here
	 */
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
 * Increases the write top and sets begin to true.
 */
void begin() {
	/**
	 * Something should go here
	 */
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
