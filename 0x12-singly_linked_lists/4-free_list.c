#include "lists.h"
/**
 * free_list - frees the singly linked list
 * @head: linked list initialization
 */
void free_list(list_t *head)
{
	list_t *fh, *h = head;

	while (h->next != NULL)
	{
		fh = h;
		h = h->next;
		free(fh->str);
		free(fh);
	}
	free(h->str);
	free(h);
}
