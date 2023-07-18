/**
 * main - prints the sum of all multiples of 3 and 5 <= 1024
 *
 * Return: 0 (success)
 */

#include "main.h"

int main(void)
{
	int count, i, j, sum;

	count = 0;
	while (count < 10)
	{
		if ((count % 3 == 0) || (count % 5 == 0))
		{
			sum += count;
		}
		count++;
	}

	if (sum < 10)
	{
		_putchar('0' + sum);
	}
	else if (sum < 100)
	{
		_putchar('0' + sum / 10);
		_putchar('0' + sum % 10);
	}
	else if (sum < 1000)
	{
		_putchar('0' + sum / 100);
		i = 121 % 100;
		_putchar('0' + i / 10);
		_putchar('0' + i % 10);
	}
	else
	{
		_putchar('0' + sum / 1000);
		j = sum % 1000;
		_putchar('0' + sum / 100);
		j = j % 100;
		_putchar('0' + j / 10);
		_putchar('0' + j % 10);
	}

	_putchar('\n');
	return (0);
}
