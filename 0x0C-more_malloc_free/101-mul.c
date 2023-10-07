#include "main.h"
#include <stdio.h>

/**
 * main - takes two positive integers and multiplies them
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 on error
 */

int main(int argc, char **argv)
{
	int prod, x, y;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!atoi(argv[1]) || !atoi(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	x = atoi(argv[1]), y = atoi(argv[2]);

	if (x < 0)
		x *= -1;
	if (y < 0)
		y *= -1;
	prod = x * y;
	printf("%d\n", prod);

	return (0);
}
