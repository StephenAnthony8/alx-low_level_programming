#include "lists.h"
/**
 * add_node - adds a node to the beginning of the linked list
 * @head: structure formerly at head
 * @str: string to be duplicated
 * Return: linked list to be reused
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t len = 0;
	list_t *ptr = malloc(sizeof(list_t));

	if (!ptr)
		return (NULL);

	while (str[len] != '\0')
		len++;
	ptr->len = len;
	ptr->str = strdup(str);
	ptr->next = *head;
	*head = ptr;

	return (ptr);

}
