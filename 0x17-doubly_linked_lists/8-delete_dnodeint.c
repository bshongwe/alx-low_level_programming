#include "lists.h"

/**
 * delete_dnodeint_at_index - func deletes dlistint_t linked
 * node at index of a
 * @head: list head pointer
 * @index: new node index
 * Return: Success (1), or fail (-1)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *hd_1;
	dlistint_t *hd_2;
	unsigned int a;

	hd_1 = *head;

	if (hd_1 != NULL)
		while (hd_1->prev != NULL)
			hd_1 = h1->prev;

	a = 0;

	while (hd_1 != NULL)
	{
		if (a == index)
		{
			if (a == 0)
			{
				*head = hd_1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				hd_2->next = hd_1->next;

				if (hd_1->next != NULL)
					hd_1->next->prev = hd_2;
			}

			free(hd_1);
			return (1);
		}
		hd_2 = hd_1;
		hd_1 = hd_1->next;
		a++;
	}

	return (-1);
}
