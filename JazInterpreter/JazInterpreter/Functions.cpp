#include "JazInterpreter.h"

/**
 * Pushes the value of passed variable on the Jaz Stack.
 * Takes the read list on the stack and pushes that value
 * onto the write list on the stack.
 */
Functions::void rvalue(String part) {
	/**
	 * Something should go here
	 */
}
/**
 * Pushes the location passed onto the Jaz stack.
 * Takes the name passed on the write list on the stack.
 */
Functions::void lvalue(String part) {
	/**
	 * Something should go here
	 */
}
/**
 * Takes the number and places it into the location below it.
 * Removes the last 2 variables in the write top and puts them together.
 * 
 */
Functions::void colEquals() {
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
public void copy() {
	/**
	 * Something should go here
	 */
}
Functions::void label(String part, int i) {
	/**
	 * Something should go here
	 */
}
/**
 * Jumps to the location in the label.
 */
Functions::int goTo(String part, int i) {
	/**
	 * Something should go here
	 */
}
/**
 * Jumps if the top value in the Write top's last location 
 * is zero.
 */
Functions::int goFalse(String part, int i) {
	/**
	 * Something should go here
	 */
}
/**
 * Jumps if the top value in the write top's last location is one.
 */
Functions::int goTrue(String part, int i) {
	/**
	 * Something should go here
	 */
}
/**
 * Adds top two values on Jaz stack and places result on Jaz stack.
 * Takes the last two variables from the write top. Adds them together
 * and puts the result in the write top list.
 */
Functions::void plus() {
	/**
	 * Something should go here
	 */
}
/**
 * Subtracts top two values on Jaz stack and places result on Jaz stack.
 * Takes the last two variables from the write top. Subtracts them together
 * and puts the result in the write top list.
 */
Functions::void minus() {
	/**
	 * Something should go here
	 */
}
/**
 * Multiplies top two values on Jaz stack and places result on Jaz stack.
 * Takes the last two variables from the write top. Multiplies them together
 * and puts the result in the write top list.
 */
Functions::void multi() {
	/**
	 * Something should go here
	 */
}
/**
 * Divides the top two values on Jaz stack and places result on Jaz stack.
 * Takes the last two variables from the write top. Divides them together
 * and puts the result in the write top list.
 */
Functions::void div() {
	/**
	 * Something should go here
	 */
}
/**
 * Mods the top two values on Jaz stack and places result on Jaz stack.
 * Takes the last two variables from the write top. Mods them together
 * and puts the result in the write top list.
 */
Functions::void mod() {
	/**
	 * Something should go here
	 */
}
/**
 * Logical AND the top two values on Jaz stack and places result on Jaz stack.
 * Takes the last two variables from the write top. Logical AND them together
 * and places the result into the write top list.
 */
Functions::void and() {
	/**
	 * Something should go here
	 */
}
/**
 * Logical NOT the top value on Jaz stack and places result on Jaz stack.
 * Takes the last variable from the write top. Logical NOT it
 * and places the result into the write top list.
 */
Functions::void not() {
	/**
	 * Something should go here		 
	 */
}
/**
 * Logical OR the top two values on Jaz stack and places result on Jaz stack.
 * Takes the last two variables from the write top. Logical OR them together
 * and places the result into the write top list.
 */
Functions::void or() {
	/**
	 * Something should go here
	 */
}
/**
 * Checks to see if the top to values and different.
 * If so place a 1 otherwise places a 0 onto the stack.
 */
Functions::void different() {
	/**
	 * Something should go here
	 */
}
/**
 * Checks if the write top minus one is less or equal write top
 */
Functions::void lessThanEq() {
	/**
	 * Something should go here
	 */
}
/**
 * Checks if the write top minus one is greater or equals to the write top
 */
Functions::void greaterThanEq() {
	/**
	 * Something should go here
	 */
}
/**
 * Checks if the write top minus one is less than the write top;
 */
Functions::void lessThan() {
	/**
	 * Something should go here
	 */
}
/**
 * Check if the write top minus one is greater than the write top.
 */
Functions::void greaterThan() {
	/**
	 * Something should go here
	 */
}
/**
 * Checks if the write top minus one is equal to the write top. 
 */
Functions::void equalTo() {
	/**
	 * Something should go here
	 */
}
/**
 * Prints the value from the write top's last entry. 
 */
Functions::void print() {
	/**
	 * Something should go here
	 */
}
/**
 * Prints the passed string.
 */
Functions::void show(String[] parts) {
	/**
     * Something should go here
	 */
}
/**
 * Starts the parameter passing block.
 * Increases the write top and sets begin to true.
 */
Functions::void begin() {
	/**
	 * Something should go here
	 */
}
/**
 * Ends parameter passing block.
 * Decreases the Read top and sets begin to false.
 */
Functions::void end() {
	/**
	 * Something should go here
	 */
}
/**
 * Ends the function call get the top value from the jump stack.
 * If begin is set decrements the write top pointer.
 */
Functions::int Return() {
	/**
	 * Something should go here
	 */
}
/**
 * Starts the function call. Sets the instruction counter
 * to the location of the passed label. Sets the old instruction
 * pointer value onto the jump stack. If begin is set increments
 * the Read top pointer.
 */
Functions::int call(String part, int i) {
	/**
	 * Something should go here
	 */
}
