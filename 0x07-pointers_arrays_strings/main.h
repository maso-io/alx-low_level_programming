#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdio.h>

/* prints character */
int _putchar(char);
/* fills memory with constant byte */
char *_memset(char *s, char b, unsigned int n);
/* copies memory area */
char *_memcpy(char *dest, char *src, unsigned int n);
/* locates a character in a string */
char *_strchr(char *s, char c);
/* gets the length of prefix substring */
unsigned int _strspn(char *s, char *accept);
/* searches a string for first occurance of any byte in set */
char *_strpbrk(char *s, char *accept);
/* locates a substring from a given string */
char *_strstr(char *haystack, char *needle);
/* prints chessboard */
void print_chessboard(char (*a)[8]);
/* prints the sum of the two diagonals of a square matrix */
void print_diagsums(int *a, int size);
/* sets value of pointer to a char */
void set_string(char **s, char *to);

#endif
