#include "lists.h"
/**
 * print_dlistint - prints the n values in the list
 * @h: initializing list node
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *tmp = (dlistint_t *)h;
	size_t count = 0;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		count++;
	}
	return (count);
}
