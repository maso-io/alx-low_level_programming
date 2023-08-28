#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct list_s - singly linked list, list_t
 * @str: string (malloc'ed string)
 * @len: length of string
 * @next: pointer to next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
/* writes charactuer to stdout */
void _putchar(char c);
/* prints element of a list_t list */
size_t print_list(const list_t *h);
/* returns number of nodes in a list_t */
size_t list_len(const list_t *h);
/* adds a new node to the begining of a list */
list_t *add_node(list_t **head, const char *str);
/* add a new node to the end of a list node */
list_t *add_node_end(list_t **head, const char *str);
/* frees a linked list */
void free_list(list_t *head);
#endif
