#include "lists.h"
/**
 * get_dnodeint_at_index - gets the nth index of the node
 * @head: initialization node
 * @index: element position
 * Return: NULL on failure or nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t cycle = 0, i = 0;

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
	for (; i != index; i++)
	{
		if (!head)
			break;
		head = head->next;
	}
	return (head);



}
