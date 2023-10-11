#ifndef _CALC_
#define _CALC_

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

#endif /* end CALC */
