#ifndef _FUNC_POINTER_
#define	_FUNC_POINTER_

#include <stddef.h>

/* function that prints pointer */
void print_name(char *name, void (*f)(char *));
/* function that executes function on an array of elements */
void array_iterator(int *array, size_t size, void (*action)(int));
/* function that searches for an integer */
int int_index(int *array, int size, int (*cmp)(int));
#endif
