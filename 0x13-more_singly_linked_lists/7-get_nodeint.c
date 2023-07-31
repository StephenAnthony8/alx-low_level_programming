#include "lists.h"
/**
 * get_nodeint_at_index - does as name says
 * @head: linked list start
 * @index: nth node
 * Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head->next)
			head = head->next;
		else
			return (NULL);
	}
	if (!head)
		return (NULL);
	else
		return (head);
}
