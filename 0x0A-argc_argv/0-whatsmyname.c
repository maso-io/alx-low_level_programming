#include <stdio.h>

/**
 * main - prints name of program to stdout
 * @argc: argument count
 * @argv: argument array
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", *argv);
	return (0);
}
