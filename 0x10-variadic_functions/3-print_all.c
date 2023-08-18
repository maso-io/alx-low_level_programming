#include "variadic_functions.h"
/**
 * print_all - function that prints everything
 * @format: specify what to be printed when
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	size_t i, j, len;
	const char specifier[] = "cifs";

	i = 0;
	len = strlen(format);
	va_start(ap, format);
	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (specifier[j] == format[i])
			{
				if (specifier[j] == 'c')
					printf("%c", va_arg(ap, int));
				else if (specifier[j] == 'i')
					printf("%d", va_arg(ap, int));
				else if (specifier[j] == 'f')
					printf("%f", va_arg(ap, double));
				else if (specifier[j] == 's')
					printf("%s", va_arg(ap, char *));
				if (j != 3 && i != len)
					printf(", ");
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
