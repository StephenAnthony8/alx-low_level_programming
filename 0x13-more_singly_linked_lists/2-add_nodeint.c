#include "lists.h"
/**
 * add_nodeint - adds a node to the beginning of the list
 * @head: current head node
 * @n: node int element
 * Return: new head node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_h;

	n_h = malloc(sizeof(listint_t));
	if (!n_h)
		return (NULL);
	n_h->n = n;
	if (!*head)
	{
		*head = n_h;
		(*head)->next = NULL;
		return (*head);
	}
	else
	{
		n_h->next = *head;
		*head = n_h;
	}
	return (*head);
}
