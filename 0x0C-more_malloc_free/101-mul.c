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
	int prod;

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
	prod = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", prod);

	return (0);
}
