#include "lists.h"
/**
 * list_len - Prints all the elements of the list_t list
 * @h: list of nodes to be iterated through
 * Return: returns the count of th nodes iterated through
 */
size_t list_len(const list_t *h)
{
	list_t *ptr;
	size_t count = 0;

	ptr = (list_t *)h;

	for (; ptr != NULL; count++)
		ptr = ptr->next;
	return (count);
}
