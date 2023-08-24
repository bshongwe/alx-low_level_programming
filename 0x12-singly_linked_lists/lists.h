#ifndef LIST_H
#define LIST_H

#include <string.h>

/**
 * struct list_s - func for singly linked list
 * @str: malloc input string
 * @len: str len
 * @next: sequential node points
 * Description: node structure for singly linked list
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
/* Task prototypes */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);

#endif /* end of List_H file */
