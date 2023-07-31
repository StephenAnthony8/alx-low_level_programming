#include "lists.h"
/**
 * free_listint2 - frees the linked list & sets HEAD to NULL
 * @head: 2D pointer to the list starting point
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *h;

	h = *head;
	(*head) = NULL;
	while (h)
	{
		tmp = h;
		h = tmp->next;
		free(tmp);
	}
}
