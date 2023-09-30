#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints minimum number of coins to create change
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int cent;
	int count;

	if (argc != 2)
	{
		printf("Error\n");
	}

	count = 0;
	if (argv[1] != NULL)
	{
	cent = atoi(argv[1]);
	while (cent)
	{
		if (cent >= 25)
		{
			cent -= 25;
			count++;
		}
		else if (cent >= 10)
		{
			cent -= 10;
			count++;
		}
		else if (cent >= 5)
		{
			cent -= 5;
			count++;
		}
		else if (cent >= 3)
		{
			cent -= 3;
			count++;
		}
		else if (cent >= 2)
		{
			cent -= 2;
			count++;
		}
		else
		{
			cent -= 1;
			count++;
		}
	}
	printf("%d\n", count);
	}
	return (0);
}
