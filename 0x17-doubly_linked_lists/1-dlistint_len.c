#include "lists.h"
/**
 * dlistint_len - calculates number of elements in a list
 * @h: initializing node of list
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *tmp = (dlistint_t *)h;
	size_t count = 0;

	for (; tmp != NULL; count++)
		tmp = tmp->next;
	return (count);
}
