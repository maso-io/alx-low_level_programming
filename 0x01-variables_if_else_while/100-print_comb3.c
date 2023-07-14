#include <stdio.h>

/**
  * main - prints out the numbers to 10
  *
  * Return: 0 (Success)
  *
  */

int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for ( j = 48; j < 58; j++)
		{
			if (i == j|| i > j)
			{
				continue;
			}
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
			{
				putchar('\n');
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
