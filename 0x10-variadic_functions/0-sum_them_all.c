#include "variadic_functions.h"
/**
 * sum_them_all - returns sum of all parameters
 * @n: parameter
 *
 * Return: integer sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	size_t sum, i;

	if (n == 0)
		return (0);

	va_start(ap, n); /* init arg. list */
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int); /* return val, and mod ap to point to it */

	va_end(ap); /* end use of ap */
	return (sum);
}
