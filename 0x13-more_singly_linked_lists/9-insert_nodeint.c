#include "lists.h"
/**
 * insert_nodeint_at_index - does as it says
 * @head: pointer to inital node in list
 * @idx: node insertion position
 * @n: value to be inserted
 * Return: inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *curr_n, *tmp, *new_n;/* *prev_n;*/

	tmp = *head;
	new_n = malloc(sizeof(listint_t));
	if (!new_n)
		return (NULL);
	new_n->n = n;
	if (idx > 0)
	{
		for (i = 0; i < idx && tmp; i++)
		{
			curr_n = tmp;
			tmp = curr_n->next;
		}
		curr_n->next = new_n;
		new_n->next = tmp;
	}
	else
	{

		*head = new_n;
		(*head)->next = tmp;

	}
	return (new_n);
}
