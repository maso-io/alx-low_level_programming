#ifndef _MAIN_
#define _MAIN_

#include <stddef.h>
#include <stdlib.h>

/**
 * u_int - Typedef for unsigned int
 */
typedef unsigned int u_int;

/* converts a binary number to an unsigned int */
u_int binary_to_uint(const char *b);
/* prints the binary representation of a number */
void print_binary(unsigned long int);
/* returns the value of a bit at a given index */
int get_bit(unsigned long int n, unsigned int index);
/* set the value of a bit at a given index to a 1 */
int set_bit(unsigned long int *n, u_int index);
/* clear the value of a bit at a given index to a 0 */
int clear_bit(unsigned long int *n, u_int index);
/*
 * returns the number of bits you would need to flip to get from one number to
 * another
 */
u_int flip_bits(unsigned long int n, unsigned long int m);
/* checks for endianness */
int get_endianness(void);

#endif /* main.h */
