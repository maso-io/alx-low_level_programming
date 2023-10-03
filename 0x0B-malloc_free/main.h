#ifndef _MAIN_H_
#define	_MAIN_H_

/* used for NULL pointer */
#include <stddef.h>
/* used for malloc, realloc, calloc, free */
#include <stdlib.h>

/* re-define unsgined int */
typedef unsigned int uint;

/* writes character to std output */
int _putchar(char);

/* creates an array of char and initializes it with a specified char */
char *create_array(unsigned int, char);

/*
 * returns a pointer to a newly allocated space in memory with a copy of given
 * string
 */
char *_strdup(char *str);

/* concatenates two strings */
char *str_concat(char *s1, char *s2);

/* returns a pointer to a 2_D array of integers */
int **alloc_grid(int, int);

/* function that free a 2D array allocated with malloc */
void free_grid(int **grid, int height);

/* concatenates all the arguments of your program */
char *argstostr(int ac, char **av);

/* splits string into words */
char **strtow(char *str);

#endif
