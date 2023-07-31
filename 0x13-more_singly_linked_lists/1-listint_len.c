#include "lists.h"
/**
 * listint_len - counts all the elements of a listint_t list
 * @h: pointer to initial linked list
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	listint_t *n;
	size_t count = 0;

	n = (listint_t *)h;
	while (n)
	{
		n = n->next;
		count++;
	}
	return (count);
}
