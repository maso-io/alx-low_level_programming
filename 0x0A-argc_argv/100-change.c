#include <stdlib.h>
#include <stdio.h>

/**
 * change - calculate the amount of change you get
 * @money: money to convert to cent count
 *
 * Return: interger number of coins required.
 */
int change(int money)
{
	int count, cents;

	count = 0;
	cents = money;
	while (cents)
	{
		if (cents >= 25)
		{
			cents -= 25;
			count++;
		}
		else if (cents >= 10)
		{
			cents -= 10;
			count++;
		}
		else if (cents >= 5)
		{
			cents -= 5;
			count++;
		}
		else if (cents >= 2)
		{
			cents -= 2;
			count++;
		}
		else
		{
			cents -= 1;
			count++;
		}
	}
	return (count);
}
/**
 * main - prints minimum number of coins to create change
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int cents;
	int count;

	if (argc != 2)
	{
		printf("Error\n");
	}
	if (argc == 2)
	{
		if (atoi(argv[1]) < 0)
			printf("0\n");
		if (atoi(argv[1]) && atoi(argv[1]) > 0)
		{
			cents = atoi(argv[1]);
			count = change(cents);
			printf("%d\n", count);
		}
	}
	return (0);
}
