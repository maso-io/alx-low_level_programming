#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

/* prints char to stdout */
int _putchar(char);
/* prints a string followed by new line */
void _puts_recursion(char *s);
/* prints a string in reverse */
void _print_rev_recursion(char *s);
/* returns length of string */
int _strlen_recursion(char *s);
/* returns the factorial of a given number */
int factorial(int n);
/* return x raised to power y */
int _pow_recursion(int x, int y);
/* returns the square-root of a number */
int _sqrt_recursion(int n);
/* checks if integer is a prime number */
int is_prime_number(int n);
/* checks if string is a palindrome */
int is_palindrome(char *s);

#endif
