#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Check's if value of n > | < | = 0
 *
 * Return: 0 (end of main)
 */

int main(void)
{
	int n;
	int num;

	srand(time(0));
	num = rand() - RAND_MAX / 2;
	n = num % 10;

	if (n == 0)
	{
		printf("Last digit of %d is %d and is 0", num, n);
	}
	else if (n > 5)
	{
		printf("Last digit of %d is %d and is greater 5 and not 0\n", num, n);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", num, n);
	}

	return (0);
}
