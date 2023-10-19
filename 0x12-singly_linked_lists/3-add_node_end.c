#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list-t list
 * @head: reference to head node
 * @str: string to add as data value
 *
 * Return: returns pointer to the new head node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	u_int c;
	list_t *node, *last_node;

	if (!head)
		return (NULL);
	last_node = *head;
	node = (list_t *)malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	node->str = strdup(str);
	if (!node->str)
		return (NULL);
	for (c = 0; str[c] != '\0'; c++)
		continue;
	node->len = c;
	node->next = NULL;

	if (!last_node)
	{
		*head = node;
		return (*head);
	}
	while (last_node->next)
	{
		last_node = last_node->next;
	}
	last_node->next = node;
	return (*head);
}
