#include "lists.h"
#include "lists.h"
/**
 * print_list - Prints all the elements of the list_t list
 * @h: list to be printed
 * Return: returns the count of th nodes iterated through
 */
size_t print_list(const list_t *h)
{
	list_t *ptr;
	size_t count = 0;

	ptr = (list_t *)h;

	while (ptr != NULL)
	{
		count++;
		if (ptr->str != NULL)
			printf("[%d] %s\n", ptr->len, ptr->str);
		else
			printf("[0] (nil)\n");
		ptr = ptr->next;
	}
	return (count);
}
