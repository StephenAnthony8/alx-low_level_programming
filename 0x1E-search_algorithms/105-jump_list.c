#include "search_algos.h"
#include <math.h>
/**
 * jump_list - jumplist algorithm with linked lists
 * @list: linked list to be used
 * @size: size of linked list
 * @value: comparison value
 * Return: Null on fail || node with value
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *tmp, *tmp2, *tmp3;
	int i, j, sq, cnt;
	char *str1 = "Value checked at index", *str2 = "Value found between indexes";

	cnt = sq = (int)(sqrt((double)(size)));
	while (list)
	{
		i = sq;
		tmp = list;
		for (i = sq, tmp = list; tmp && (i > 0); i--, tmp3 = tmp, tmp = tmp->next)
			if (tmp->n >= value)
				break;
		if (i == 0 && tmp)
		{
			printf("%s [%ld] = [%d]\n", str1, tmp->index, (tmp ? tmp->n : tmp3->n));
			list = tmp;
			continue;
		}
		else if (!tmp || (tmp->n >= value))
		{
			j = list->index;
			for (tmp2 = list; cnt >= 0 && tmp2; cnt--, tmp3 = tmp2, tmp2 = tmp2->next)
				if (cnt == 0 || (!tmp2->next))
					printf("%s [%ld] = [%d]\n", str1, tmp2->index, tmp2->n);
			printf("%s [%d] and [%ld]\n", str2, j, (tmp2 ? tmp2->index : tmp3->index));
			for (i = sq; list && i > 0; i--, list = list->next)
			{
				printf("%s [%ld] = [%d]\n", str1, list->index, list->n);
				if (list->n == value)
					return (list);
			}
			if (i == 0)
				break;
		}
	}
	return (NULL);
}
