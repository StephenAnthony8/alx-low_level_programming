#include "lists.h"
/**
 * sum_listint - adds the n elements in the list
 * @head: initial node in list
 * Return: sum of elements in list
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
