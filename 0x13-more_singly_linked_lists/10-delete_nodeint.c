#include "lists.h"
/**
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *count_n, *next_n, *prev_n;

	count_n = tmp = *head;

	if (*head == NULL)
		return ( (index ? -1 : 1));
	for (i = 0; count_n; i++)
		count_n = count_n->next;
	if (i < index)
		return (-1);
	if (index > 0)
	{
		for (i = 0; i < index; i++)
		{
			prev_n = tmp;
			tmp = tmp->next;
			if (tmp)
				next_n = tmp->next;
			else
				next_n = NULL;
		}
		prev_n->next = next_n;
	}
	else
	{
		*head = tmp->next;
	}
	free(tmp);

	return (1);
}
