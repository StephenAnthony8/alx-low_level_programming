#include "hash_tables.h"
/**
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, check = 0;
	hash_node_t *tmp;

	if (!ht)
		return;
	if (!ht->array)
	{
		printf("{}\n");
		return;
	}
	putchar('{');
	while (!ht->array[i])
	{
		if (i >= ht->size)
			break;
		tmp = ht->array[i];
		i++;
	}
	check = i;
	if (check < ht->size)
	{
		tmp = ht->array[i];
		printf("'%s': '%s'", tmp->key, tmp->value);
		for (; i < ht->size; i++)
		{
			tmp = ht->array[i];
			while (tmp)
			{
				printf(", '%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
			}
		}
	}
	printf("}\n");

}
