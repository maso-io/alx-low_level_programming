#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 1 (Error), otherwise 0.
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
		printf("%d\n", 0);
	for (i = 1; i < argc; i++)
	{
		int tmp;

		tmp = atoi(argv[i]);
		if (!tmp)
		{
			printf("Error\n");
			return (1);
		}
		if (tmp < 0)
			sum += (tmp * 1);
		else
			sum += (tmp);
	}
	if (sum > 0)
		printf("%d\n", sum);
	return (0);
}
