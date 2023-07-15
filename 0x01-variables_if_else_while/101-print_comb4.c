#include <stdio.h>

/**
  * main - prints out the numbers to 10
  *
  * Return: 0 (Success)
  *
  */

int main(void)
{
	int i, j, k;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 58; k++)
			{
				if (i == j && i == k)
				{
					continue;
				}

				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					putchar(',');
					putchar(' ');
				}
				if (i == 56 && j == 57 && k == 57)
				{
					putchar('\n');
					continue;
				}
			}
		}
	}

	return (0);
}
