#include "main.h"
int check_prime(int n, int index);
/**
 * is_prime_number - check if number is a prime
 * @n: number to check
 *
 * Return: 1 is number is prime, otherwise 0.
 */

int is_prime_number(int n)
{
	if (n == 1 || (n * -1) == 1 || n == 0)
		return (0);
	if (n < 0)
		return (check_prime((n * -1), 2));
	return (check_prime(n, 2));
}

/**
 * check_prime - check if number is prime
 * @n: number to check
 * @index: index to check number against
 *
 * Return: 1 if prime, otherwise 0.
 */

int check_prime(int n, int index)
{
	if ((n % index) == 0 && index < n)
		return (0);
	if (n == (index + 1))
		return (1);
	return (check_prime(n, index + 1));
}
