#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <string.h>

/* function that creates an array of chars, and init it with given char */
char *create_array(unsigned int, char);
/* returns pointer to a new duplicant string of str */
char *_strdup(char *str);
/* concatenates two strings */
char *str_concat(char *s1, char *s2);

#endif
