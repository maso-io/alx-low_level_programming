#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/* returns pointer to allocated amount of memory */
void *malloc_checked(unsigned int);
/* concatenates two string */
char *string_nconcat(char *s1, char *s2, unsigned int n);
/* allocates memory for an array */
void *_calloc(unsigned int nmemb, unsigned int size);
/* creates an array of integer */
int *array_range(int min, int max);

#endif
