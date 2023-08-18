#ifndef _VARFUNC_
#define _VARFUNC_

#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/* writes the character c to stdout */
int _putchar(char c);
/* return sum of all parameters */
int sum_them_all(const unsigned int n, ...);
/* prints numbers, followed by a new line. */
void print_numbers(const char *separator, const unsigned int n, ...);
#endif
