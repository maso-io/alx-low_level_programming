#include <stdio.h>

/**
  * main - prints out the numbers to 10
  *
  * Return: 0 (Success)
  *
  */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
