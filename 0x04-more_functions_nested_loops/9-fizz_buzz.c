#include <stdio.h>
/**
 * main - Prints from 1 to 100
 * Description: Prints Fizz for mutliples of 3, prints Buzz for multiples of 5
 * and prints FizzBuzz for multiples of 15
 *
 * Return: 0 (sucess)
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 15) == 0)
			printf("FizzBuzz ");
		else if ((i % 3) == 0)
			printf("Fizz ");
		else if ((i % 5) == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
