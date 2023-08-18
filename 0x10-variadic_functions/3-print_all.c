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
	size_t i, len;
	char *s;

	i = 0;
	len = strlen(format);
	va_start(ap, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char *);
				((s != NULL) ? printf("%s", s) : printf("(nil)"));
				break;
		}
		if (i != len - 1 && (
				format[i] == 'c' ||
				 format[i] == 'i' ||
				 format[i] == 'f' ||
				 format[i] == 's')
			)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
