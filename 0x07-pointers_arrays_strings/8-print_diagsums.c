#include "main.h"

/**
 * print_diagsums - prints the sum of diagonals in a sqaure matrix
 * @a: pointer to 2-D array
 * @size: dimension of sqaure array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum0, sum1;

	sum0 = 0;
	sum1 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum0 +=  *(a + i * size + j);
			if ((i + j) == size)
				sum1 += *(a + i * size + j);
		}
	}
	printf("%d,%d\n", sum0, sum1);
}
