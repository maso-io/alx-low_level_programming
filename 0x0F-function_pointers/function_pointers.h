#ifndef _FUNCTION_POINTERS_
#define	_FUNCTION_POINTERS_

/* NULL implementation */
#include <stddef.h>
/* malloc implementation */
#include <stdlib.h>

 /* writes character to std output */
int _putchar(char c);
/* function that prints a name */
void print_name(char *name, void (*f)(char *));
/* executes call-back function on each element */
void array_iterator(int *array, size_t size, void (*action)(int));
/* searches for an integer */
int int_index(int *array, int size, int (*cmp)(int));

#endif /* End FUNCTION POINTERS */
