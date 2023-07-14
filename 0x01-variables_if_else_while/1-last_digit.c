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
	int last_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_num = n % 10;

	if (n == 0)
	{
		printf("Last digit of %d is %d and is 0", n, last_num);
	}
	else if (n > 5)
	{
		printf("Last digit of %d is %d and is greater 5", n, last_num);
		printf("and not 0\n");
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6", n, last_num);
		printf("and not 0\n");
	}

	return (0);
}
