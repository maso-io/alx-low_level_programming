#include <stdio.h>

/**
  * main - prints out the letters of the alphabet
  *
  * Return: 0 (Success)
  *
  */

int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');

	return (0);
}
