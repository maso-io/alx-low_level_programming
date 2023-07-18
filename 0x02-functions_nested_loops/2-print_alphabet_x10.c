#include "main.h"
/**
 * print_alphabet_x10 - prints the alphanets to std out
 *
 * Description: uses a for loop and an array to define the function to print
 * alphabets to the stdout
 * Returns: void on completion
 */

void print_alphabet_x10(void)
{
	int i, j;
	char alphabets[] = {
		'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
		'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
		 'z', '\n'
	};

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 27; i++)
		{
			_putchar(alphabets[i]);
		}
	}
}

