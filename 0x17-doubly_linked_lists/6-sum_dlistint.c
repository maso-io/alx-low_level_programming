#include "lists.h"
/**
 * sum_dlistint - gets the sum of all elements of a dlistint_t
 * @head: pointer to head node
 *
 * Return: sum of all the data (n)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (!head)
		return (0);
	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
