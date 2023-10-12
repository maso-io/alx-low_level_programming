#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - function that prints strings
 * @separator: used as sep btween strings
 * @n: number of strings passed
 */

void print_strings(const char *separator, const u_int n, ...)
{
	u_int i;
	char *str;
	va_list ap;

	va_start(ap, n);
	if (!separator)
	{
		str = va_arg(ap, char *);
		if (!str)
			str = "(nil)";
		for (i = 0; i < n; i++)
			printf("%s ", str);
		printf("\n");
		va_end(ap);
		return;
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			str = va_arg(ap, char *);
			if (!str)
				str = "(nil)";
			if (i == n - 1)
				printf("%s\n", str);
			else
				printf("%s%s ", str, separator);
		}
	}
	va_end(ap);
}
