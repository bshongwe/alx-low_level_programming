#include "lists.h"

/**
 * print_listint_safe - func prints linked list in memory
 * @head: list head
 * Return: nodes num in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes_num = 0;
	listp_t *hptr, *new_node, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new_node = malloc(sizeof(listp_t));

		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)head;
		new_node->next = hptr;
		hptr = new_node;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (nodes_num);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes_num++;
	}

	free_listp(&hptr);
	return (nodes_num);
}

/**
 * free_listp - func frees linked list
 * @head: list head
 * Return: void
 */
void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
