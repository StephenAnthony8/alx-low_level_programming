#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *n;
	size_t count = 0;

	n = (listint_t *)h;
	while (n)
	{
		printf("%d\n", n->n);
		n = n->next;
		count++;
	}
	return (count);
}
