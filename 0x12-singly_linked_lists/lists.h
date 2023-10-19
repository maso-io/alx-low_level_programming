#ifndef _LIST_T_
#define _LIST_T_

/* NULL definition */
#include <stddef.h>
/* write() def */
#include <unistd.h>
/* malloc def */
#include <stdlib.h>
/* strdup def */
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
/**
 * u_int - Typedef for unsigned int
 */
typedef unsigned int u_int;

/* writes character to stdout */
int _putchar(char);
/* writes string to stdout */
int p_str(char *, u_int);
/* writes numbers to stdout */
void p_uint(u_int n);
/* duplicates string */
char *_strdup(const char *s);
/* returns the length of a string */
u_int _strlen(const char *s);

/* prints all elements in a list_t */
size_t print_list(const list_t *h);
/* returns the number of elements in a linked list */
size_t list_len(const list_t *h);
/* adds new node at the beginning of a linked list */
list_t *add_node(list_t **head, const char *str);
/* adds a new node at the end of a linked list */
list_t *add_node_end(list_t **head, const char *str);
/* frees a list_t list */
void free_list(list_t *head);

#endif /* END LINKED LIST DEFINITION */
