#include <stdio.h>

/**
  * main - prints out the numbers to 10
  *
  * Return: 0 (Success)
  *
  */

int main(void)
{
	int i, j, k, x;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 58; k++)
			{
				for (x = 48; x < 58; x++)
				{
					if ((i > j || k > x) || (i == j && k == x))
					{
						continue;
					}
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(x);
					if (i == 56 && j == 57 && k == 57 && x == 57)
					{
						putchar('\n');
						continue;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	return (0);
}
