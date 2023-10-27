#include "main.h"
#include <stdio.h>
/**
 * get_endianness - Checks the systems Byte order
 * Return: Returns 0 if big endian 1 if little endian
 */
int get_endianness(void)
{
	int lsb;
	char *byte_pointer;
	int x;

	x = 1; /* Initialize an integer variable x to the value 1 */
	byte_pointer = (char *) &x; /*
								 * Create a character pointer that points to the
								 * first byte of x
								 */
	lsb = (int) *byte_pointer; /*
								* Get the value of the first byte of x as an int
								* eger
								*/

	return (lsb); /* Return the value of the least significant byte of x */
}

