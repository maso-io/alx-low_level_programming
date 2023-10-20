#include "lists.h"
/* returns the length of a string */
u_int _strlen(const char *s);
/**
 * add_node - adds new node at the beginning of a list
 * @head: reference to head node
 * @str: string to add as data
 *
 * Return: pointer to newly updated lists_t list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	if (!head)
		return (NULL);
	node = (list_t *)malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	node->str = strdup(str);
	if (!node->str)
	{
		free(node);
		return (NULL);
	}
	node->len = _strlen(str);
	node->next = *head;
	*head = node;
	return (*head);
}
/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length of a string
 */
u_int _strlen(const char *s)
{
	u_int i;

	if (!s)
		return (0);
	for (i = 0; s[i] != '\0'; i++)
		continue;
	return (i);
}

