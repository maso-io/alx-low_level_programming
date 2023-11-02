#ifndef _RECURSION_
#define _RECURSION_

#include <stddef.h>

/* _putchar char to std output */
void _putchar(char c);
/* prints string char by char to std output */
void _puts_recursion(char *s);
/* prints a string in reverse */
void _print_rev_recursion(char *s);
/* returns the length of a string */
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
/* compares two strings */
int wildcmp(char *s1, char *s2);

#endif
