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
	long int prod, x, y;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if ((!atol(argv[1]) || !atol(argv[2])) && (*argv[1] != '0' && *argv[2] != '0'))
	{
		printf("Error\n");
		exit(98);
	}
	x = atol(argv[1]), y = atol(argv[2]);

	if (x < 0)
		x *= -1;
	if (y < 0)
		y *= -1;
	prod = x * y;
	printf("%ld\n", prod);

	return (0);
}
