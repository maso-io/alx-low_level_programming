#ifndef MAIN_H
#define MAIN_H

/* prints one character */
int _putchar(char c);
/* updates int param to 98 */
void reset_to_98(int *n);
/* swaps values of two integers */
void swap_int(int *a, int *b);
/* returns length of a string */
int _strlen(char *s);
/* prints string to output */
void _puts(char *str);
/* prints a string in reverse */
void print_rev(char *s);
/* reverses a string */
void rev_string(char *s);
/* prints every other character */
void puts2(char *str);
/* prints half a string */
void puts_half(char *str);
/* prints n elements of an integer array */
void print_array(int *a, int n);
/* copies the string pointed to by src */
char *_strcpy(char *dest, char *src);

#endif
