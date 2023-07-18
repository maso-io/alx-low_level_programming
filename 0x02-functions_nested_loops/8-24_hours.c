#include "main.h"
/**
 * jack_bauer - prints all time to std out
 *
 * Description: uses a 2 for loops to print all time to stdoutput
 *
 * Returns: void on completion
 */

void jack_bauer(void)
{
	int i, j;

	for (j = 0; j < 24; j++)
	{
		for (i = 0; i < 60; i++)
		{
			_putchar('0' + j / 10);
			_putchar('0' + j % 10);
			_putchar(':');
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
			_putchar('\n');
		}
	}
}

