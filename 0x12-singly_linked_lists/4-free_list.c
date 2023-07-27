#include "lists.h"
/**
 * free_list - frees the singly linked list
 * @head: linked list initialization
 */
void free_list(list_t *head)
{
	list_t *h;

	while (head)
	{
		h = head->next;
		free(head->str);
		free(head);
		head = h;
	}
}
