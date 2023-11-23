#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

/**
 * p_str - writes string to stdout
 * @str: string
 * @ln: length of string
 *
 * Return: number of characters writen
 */
int p_str(char *str, u_int ln)
{
	int t;

	if (!str)
	{
		write(1, "[0] (nil)\n", 10);
		return (0);
	}
	t = 0;
	t += write(1, "[", 1);
	p_uint(ln);
	t += write(1, "]", 1);
	t += write(1, " ", 1);
	t += write(1, str, (int)ln);
	t += write(1, "\n", 1);

	return (t);
}

/**
 * _strdup - creates a duplicate of a string
 * @s: string to duplicate
 *
 * Return: pointer to newly duplicated string
 */
char *_strdup(const char *s)
{
	int i;
	char *d_s;

	if (!s)
		return (NULL);
	for (i = 0; s[i] != '\0'; i++)
		continue;
	d_s = (char *)malloc(sizeof(char) * i);
	if (!d_s)
		return (NULL);
	for (i = 0; s[i] != '\0'; i++)
		d_s[i] = s[i];
	d_s[i] = '\0';
	return (d_s);
}
/**
 * main - prints string
 *
 * Return: always 0 on success
 */
int main(void)
{
	int l_s, l_n, l_s1, l_n1;

	l_s = printf("hello, world\n");
	l_s1 = prints_string("hello, world\n");
	l_n1 = p_uint(123);
	printf("\n");
	l_n = printf("%d", 123);

	printf("\nl_s: %d\tl_n: %d\tl_s1: %d\tl_n1: %d\n", l_s, l_n, l_s1, l_n1);
	return (0);
}
