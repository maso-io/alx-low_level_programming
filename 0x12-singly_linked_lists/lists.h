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
#endif
