#include "lists.h"
/**
 * add_nodeint_end - adds a node to the end of the list
 * @head: initial node in list
 * @n: int to be added to new node
 * Return: last node in list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *e_n, *tmp;

	tmp = *head;
	e_n = malloc(sizeof(listint_t));
	if (!e_n)
		return (NULL);
	e_n->n = n;
	if (!*head)
	{
		*head = e_n;
		(*head)->next = NULL;
		return (*head);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = e_n;
	e_n->next = NULL;
	return (e_n);
}
