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
	listint_t *tmp, *new_n;

	tmp = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (tmp)
			tmp = tmp->next;
		else
			return (NULL);
	}
	new_n = malloc(sizeof(listint_t));
	if (!new_n)
		return (NULL);
	new_n->next = tmp->next;
	tmp->next = new_n;
	new_n->n = n;
	return (new_n);
}
