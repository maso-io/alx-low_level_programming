#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>

/* fills memory with constant byte */
char *_memset(char *s, char b, unsigned int n);
/* copies memory area */
char *_memcpy(char *dest, char *src, unsigned int n);
/* locates a character in a string */
char *_strchr(char *s, char c);
/* gets the length of prefix substring */
unsigned int _strspn(char *s, char *accept);
/* searches a string for any bytes of set */
char *_strpbrk(char *s, char *accept);

#endif
