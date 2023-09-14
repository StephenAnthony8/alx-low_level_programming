#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: list initialization point
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	size_t check = 0;

	if (head == NULL)
		return;
	if (head->next && head->prev == NULL)
		check = 1;
	else if (head->prev && head->next == NULL)
		check = 2;
	else if (head->prev && head->next)
		check = 3;

	while (head != NULL)
	{
		if (check == 3)
		{
			head = head->prev;
			if (head->prev)
				continue;
			else
				check = 1;
		}
		tmp = head;
		head = check == 1 ? head->next : head->prev;
		free(tmp);
	}

}
