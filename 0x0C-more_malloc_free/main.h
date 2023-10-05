#ifndef _MORE_MEMORY_
#define _MORE_MEMORY_

/* for use of NULL */
#include <stddef.h>
/* for use of malloc, calloc, realloc */
#include <stdlib.h>

/* redefine reference to unsigned int */
typedef unsigned int uint;

/* write character to stdoutput */
int _putchar(char);

/* allocates memory using malloc */
void *malloc_checked(uint);

/* concatenates two strings */
char *string_nconcat(char *s1, char *s2, uint n);

/* allocates memory for an array */
void *_calloc(uint, uint);

/* creates an array of integers */
int *array_range(int, int);

/* reallocates memory using malloc */
void *_realloc(void *, uint, uint);

#endif
