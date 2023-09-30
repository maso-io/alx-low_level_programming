#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always return 0
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
