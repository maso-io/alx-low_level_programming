#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_ - prints the everything before last element
 * @c: character
 * @ap: argument pointer
 */
void print_(char c, va_list ap)
{
	char *str;

	switch (c)
	{
	case 'c':
		printf("%c, ", (char)va_arg(ap, int));
		break;
	case 'i':
		printf("%d, ", va_arg(ap, int));
		break;
	case 'f':
		printf("%f, ", (float) va_arg(ap, double));
		break;
	case 's':
		str = va_arg(ap, char *);
		if (!str)
		{
			printf("(nil), ");
			break;
		}
		printf("%s, ", str);
		break;
	default:
		break;
	}
}

/**
 * print_all_last - prints the last of everything
 * @c: character
 * @ap: argument pointer
 */
void print_all_last(char c, va_list ap)
{
	char *str;

	switch (c)
	{
	case 'c':
		printf("%c", (char)va_arg(ap, int));
		break;
	case 'i':
		printf("%d", va_arg(ap, int));
		break;
	case 'f':
		printf("%f", (float) va_arg(ap, double));
		break;
	case 's':
		str = va_arg(ap, char *);
		if (!str)
		{
			printf("(nil)");
			break;
		}
		printf("%s", str);
		break;
	default:
		break;
	}
}

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the argument
 */
void print_all(const char * const format, ...)
{
	int i, x;
	va_list ap;

	i = 0, x = 0;
	va_start(ap, format);
	while (format && format[x] != '\0')
		x++;
	while (i < x - 1)
	{
		print_(format[i], ap);
		i++;
	}
	print_all_last(format[i], ap);
	printf("\n");
	va_end(ap);
}
