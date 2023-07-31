#include "lists.h"
/**
 * free_listint - frees a singly linked list
 * @head: starting node
 */
void free_listint(listint_t *head)
{
	listint_t *f_l;

	while (head)
	{
		f_l = head;
		head = f_l->next;
		free(f_l);
	}
}
