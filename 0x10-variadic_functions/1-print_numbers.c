#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between the numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const u_int n, ...)
{
	u_int i;
	va_list ap;

	if (n > 0)
	{
	va_start(ap, n);
	if (!separator)
	{
		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
				printf("%d\n", va_arg(ap, int));
			else
				printf("%d", va_arg(ap, int));
		}
		va_end(ap);
		return;
	}
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d\n", va_arg(ap, int));
		else
			printf("%d%s", va_arg(ap, int), separator);
	}
	va_end(ap);
	}
}
