#include "main.h"
#include <string.h>

/**
 * main - Uses _putchar to print to std output
 *
 * Description: uses the main.h file and a for loop to print an array of
 * character to the screen.
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	char word[9] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};

	for (i = 0; i < 9; i++)
	{
		_putchar(word[i]);
	}
	return (0);
}
