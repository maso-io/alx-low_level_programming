#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always return 0
 */

int main(int argc, char __attribute__((unused)) **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
