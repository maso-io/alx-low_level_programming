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
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		if (atoi(argv[i]) < 0)
			sum += (atoi(argv[i]) * -1);
		else
			sum += atoi(argv[i]);
	}
	if (sum > 0)
		printf("%d\n", sum);
	return (0);
}
