#include "lists.h"
/**
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *next_n, *prev_n;

	tmp = *head;
	for (i = 0; i < index && tmp; i++)
	{
		prev_n = tmp;
		tmp = tmp->next;
		if (tmp)
			next_n = tmp->next;
		else
			return (-1);
	}
	if (i == 0)
		return (-1);
	prev_n->next = next_n;
	free(tmp);
	return (1);


}
