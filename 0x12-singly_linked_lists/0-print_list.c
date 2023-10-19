#include "lists.h"
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
 * p_uint - writes integer to stdout
 * @n: int to write
 */
void p_uint(u_int n)
{
	u_int digit;

	if (n / 10)
		p_uint(n / 10);
	digit = (n % 10) + '0';
	write(1, &digit, 1);
}
/**
 * print_list - prints all the elemnts of a list_t list
 * @h: pointer to head node
 *
 * Return: the number of hs
 */
size_t print_list(const list_t *h)
{
	size_t i;

	if (!h)
		return (-1);

	i = 0;
	while (h)
	{
		p_str(h->str, h->len);
		h = h->next;
		i++;
	}
	return (i);
}
