#include "lists.h"
/**
 * delete_dnodeint_at_index - removes a node at specified index
 * @head: initialization node
 * @index: index to remove node at
 * Return: -1 on failure or 1 on success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t cycle = 0, i = 0;
	dlistint_t *h = (dlistint_t *)*head;

	if (*head == NULL)
		return ((index == 0 ? 1 : -1));
	if (h)
	{
		if (!h->next && h->prev)
			cycle = 2;
		if ((h->prev && h->next) || (cycle == 2))
			while (h->prev)
				h = h->prev;
	}
	for (; i != index; i++)
	{
		if (!h)
			return (-1);
		h = h->next;
	}
	if (h->prev)
		(h->prev)->next = h->next;
	else
		*head = h->next;
	if (h->next)
		(h->next)->prev = h->prev;
	free(h);
	return (1);

}
