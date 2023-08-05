#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of multiplication
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (success), otherwise 1.
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
