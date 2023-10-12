#ifndef _VARIADIC_FUNCTIONS_
#define	_VARIADIC_FUNCTIONS_

/* +write() */
#include <unistd.h>
/* +NULL */
#include <stddef.h>
/* +malloc() */
#include <stdlib.h>
/* +variadic function macros */
#include <stdarg.h>

/**
 * u_int - Type definition for unsigned int
 */
typedef unsigned int u_int;
/* returns the sum of all its parameters */
int sum_them_all(const u_int n, ...);
/* prints numbers followed by a new-line */
void print_numbers(const char *separator, const u_int n, ...);
/* prints strings followed by a new-line */
void print_strings(const char *separator, const u_int n, ...);
/* function that prints anything */
void print_all(const char * const format, ...);

#endif /* VARIADIC FUNCTIONS */
