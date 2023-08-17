#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to function that takes in string
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	void (*fp)(char *);

	if (name != NULL && f != NULL)
	{
	fp = f;
	fp(name);
	}
}
