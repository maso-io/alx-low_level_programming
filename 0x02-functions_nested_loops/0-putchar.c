#include "main.h"
#include <string.h>

/**
  * main - Prints _putchar to std output
  *
  * Return : 1 (success)
  */

int main(void)
{
	int i;
	char word[9] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};

	for (i = 0; i < 9; i++)
	{
		_putchar(word[i]);
	}
	return (1);
}
