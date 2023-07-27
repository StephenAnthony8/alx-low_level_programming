#include "lists.h"
/**
 * add_node_end - adds a node at the end or instantiates it
 * @head: starting point
 * @str: string to duplicate
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	list_t *h;
	size_t len = 0;

	ptr->str = strdup(str);

	while (str[len] != '\0')
		len++;
	ptr->len = len;
	ptr->next = NULL;
	if (*head == NULL)
		*head = ptr;
	else
	{
		h = *head;
		while (h->next != NULL)
			h = h->next;
		h->next = ptr;
	}
	return (ptr);
}
