#include <stdio.h>

/**
  * main - prints out the letters of the alphabet
  *
  * Return: 0 (Success)
  *
  */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
