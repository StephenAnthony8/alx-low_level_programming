#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at the given index
 * @h: initialization node
 * @idx: index to insert at
 * @n: n value of node being inserted
 * Return: NULL on failure / node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t cycle = 0, i = 0;
	dlistint_t *head = *h;
	dlistint_t *tmp = malloc(sizeof(dlistint_t));

	if (head)
	{
		if (!head->next && head->prev)
			cycle = 2;
		if ((head->prev && head->next) || (cycle == 2))
			while (head->prev)
				head = head->prev;
	}
	if (tmp)
		tmp->n = n;
	if (!head)
	{
		if (idx != 0)
			free(tmp);
		return (*h);
	}
	for (; i != idx; i++)
	{
		if (!head)
		{
			free(tmp);
			return (NULL);
		}
		head = head->next;
	}
	(head->prev)->next = tmp;
	tmp->next = head;
	tmp->prev = head->prev;
	head->prev = tmp;
	return (tmp);
}
