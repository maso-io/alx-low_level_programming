#include "main.h"

/**
 * reverse_array - Reverses the contents on an array
 * @a: Array to reverse
 * @n: Number of elements of the array
 *
 * Return: Void
 */

void reverse_array(int *a, int n)
{
	int j, i, *ptr, tmp[98];

	ptr = a;
	for (i = 0; i < n; i++)
	{
		tmp[i] = *ptr;
		ptr++;
	}
	for (j = 0; j < n ; j++)
	{
		a[j] = tmp[n - j - 1];
	}

}
