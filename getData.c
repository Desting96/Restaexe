#include <stdio.h>
#include <stdlib.h>

/**
 * Method: Consumes/calls the getResta.exe file
 * to gets the subtraction of two numbers given
 * Parameter: Any positive or negative number
 */
 
/**
 * Declares a variable of type char[] and sets its value
 * from the main parameter *argv[] 
 */
 
/**
 * Used sprintf() function from <stdio.h> to create a text string
 * from several data, following a certain format code and returning 
 * the number characters written to the array
 */
 
/**
 * Using system() function, allows execute other
 * program by any command that run on terminal.
 */
int main (int argc, char *argv[]){
	char dir[255];
	sprintf(dir, "getResta.exe %s %s", argv[1], argv[2]);
	return system(dir);
};

