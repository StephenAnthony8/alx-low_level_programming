#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end of the list
 * @head: initialization point of node
 * @n: value of node to be added
 * Return: added node or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = malloc(sizeof(dlistint_t));
	dlistint_t *cycle = *head;

	if (!tmp)
		return (NULL);
	if (cycle != NULL)
	{
		while (cycle->next != NULL)
			cycle = cycle->next;

		cycle->next = tmp;
	}
	else
		(*head) = tmp;
	tmp->n = n;
	tmp->prev = cycle;
	tmp->next = NULL;
	return (tmp);
}
