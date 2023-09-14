#include "lists.h"
/**
 * sum_dlistint - adds sum of all n node values
 * @head: initialization node
 * Return: sum or 0 if node is empty
 */
int sum_dlistint(dlistint_t *head)
{
	size_t cycle = 0, n = 0;

	if (head)
	{
		if (!head->next && head->prev)
			cycle = 2;
		else if (!head->prev && head->next)
			cycle = 1;
		if ((head->prev && head->next) || (cycle == 2))
		{
			while (head->prev)
				head = head->prev;
			cycle = 1;
		}
	}

	while (head)
	{
		n += head->n;
		head = head->next;
	}
	return (n);
}
