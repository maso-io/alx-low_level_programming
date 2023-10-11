#ifndef _CALC_
#define _CALC_

/* for use of print */
#include <stdio.h>
/* use of null */
#include <stddef.h>
/* use of exit */
#include <stdlib.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
/* writes characters to stdout */
int _prints(char *);
/*  adds two integers */
int op_add(int, int);
/*  subtracts two integers */
int op_sub(int, int);
/*  multiplies two integers */
int op_mul(int, int);
/*  divides two integers */
int op_div(int, int);
/*  moulus of two integers */
int op_mod(int, int);
/* returns pointer to function to perform */
int (*get_op_func(char *s))(int, int);

#endif /* end CALC */
