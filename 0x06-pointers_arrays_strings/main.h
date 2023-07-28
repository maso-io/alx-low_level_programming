#ifndef MAIN_H
#define MAIN_H

/* prints one character */
int _putchar(char);
/* concatenates two strings */
char *_strcat(char *dest, char *src);

/* concatenates n bytes to dest string */
char *_strncat(char *dest, char *src, int n);

/* copies src to dest string */
char *_strncpy(char *dest, char *src, int n);

/* compares two strings */
int _strcmp(char *s1, char *s2);

/* reverses the contents of an array */
void reverse_array(int *a, int n);

/* changes all letters to upper */
char *string_toupper(char *);

/* Capitalizes all words */
char *cap_string(char *);

/* encodes string to 1337 */
char *leet(char *);

/* encodes using rot13 */
char *rot13(char *);

/* prints integer */
void print_number(int n);
#endif
