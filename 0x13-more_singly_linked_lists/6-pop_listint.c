#include "lists.h"
/**
 * pop_listint - removes & replaces initial head node
 * @head: pointer to struct pointer
 * Return: node n element
 */
int pop_listint(listint_t **head)
{
	listint_t *new_h;
	int n_data = 0;

	if (*head == NULL)
		return (0);
	new_h = *head;
	*head = (*head)->next;
	n_data = new_h->n;
	free(new_h);
	return (n_data);
}
