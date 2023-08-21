#ifndef _OP_
#define _OP_

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct op - struct op
 *
 * @op: the operator
 * @f: the function associated with the operand
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
/* add to ints return sum */
int op_add(int a, int b);
/* returns the difference of two ints */
int op_sub(int a, int b);
/* returns the product of a and b */
int op_mul(int a, int b);
/* returns the result of the division of a by b */
int op_div(int a, int b);
/* returns the remainder of the division of a by b */
int op_mod(int a, int b);
/* function pointer that returns func of int that takes two int */
int (*get_op_func(char *s))(int, int);
#endif
