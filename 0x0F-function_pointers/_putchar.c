#include "function_pointers.h"
#include <unistd.h>
/**
 * _prints - writes i characters to the stdout
 * @s: characters to write
 *
 * Return: i (number of bytes written) , -1 on error
 */
int _prints(char *s)
{
	int i = 0;

	if (s)
		for (; *s != '\0'; s++, i++)
			write(1, s, 1);
	else
		return (-1);

	return (i);
}
