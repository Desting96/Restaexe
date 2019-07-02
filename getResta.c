#include <stdio.h>
#include <stdlib.h>

/**
 * @file squareRoot.c
 * @author David Hurtado
 * @date 02 Jul 2019
 */
 
 
/**
 * @brief Main function which returns the subtraction of two numbers.
 * @param argc the number of parameters sended to the function as an integer.
 * @param *argv[] all paremeters sended to the main function as an string
 * @return the sum of the given numbers in the parameters argv[1] and argv[2] as a double
 * @note 
 */
 
/**
 * Declares a variable of type double and sets its value
 * from the main parameter *argv[] 
 * 
 * Used atof() function from <stdlib.h> to parse the string
 * given as parameter to its respective value as a double
 */

/** 
 * @code{.c}
 * int main (int argc, char *argv[]){	
 *	double resp = atof(argv[1]) - atof(argv[2]);
 *	return resp;
 * };
 * @endcode
 */
 
int main (int argc, char *argv[]){	
	double resp = atof(argv[1]) - atof(argv[2]);
	return resp;
};
