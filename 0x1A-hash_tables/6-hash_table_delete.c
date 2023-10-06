#include "hash_tables.h"
/**
 * hash_table_delete - clears a hash table
 * @ht: hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp = NULL, *cleanup = NULL;

	if (ht)
		if (ht->array)
		{
			for (i = 0; i < ht->size; i++)
			{
				tmp = ht->array[i];
				while (tmp)
				{
					cleanup = tmp;
					tmp = tmp->next;
					free(cleanup->key);
					free(cleanup->value);
					free(cleanup);
				}
			}
			free(ht->array);
			free(ht);
		}
}
