#include "main.h"

/**
 * print_chessboard - prints chess board
 * @a: array
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	j = 0;
	while (a[i][j] != '\0')
	{
		_putchar(a[i][j]);
		j++;
		if (j == 8)
		{
			i++;
			j = 0;
			_putchar('\n');
		}
	}
}
