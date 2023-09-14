#include "lists.h"
/**
 * add_dnodeint - adds a node at the beginning of a list
 * @head: start of the list
 * @n: node n value
 * Return: node pointer or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = malloc(sizeof(dlistint_t));

	if (!tmp)
		return (NULL);
	if (*head != NULL)
		while ((*head)->prev != NULL)
			*head = (*head)->prev;
	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = *head;
	if (*head != NULL)
		(*head)->prev = tmp;
	*head = tmp;
	return (tmp);
}
