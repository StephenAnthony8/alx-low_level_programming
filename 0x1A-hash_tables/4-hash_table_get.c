#include "hash_tables.h"
/**
 * hash_table_get - returns a value from the hash table
 * @ht: hash table
 * @key: key value for comparison
 * Return: NULL on failure, value on success
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *list = NULL;
	char *value = NULL;
	unsigned long int i;

	if (!ht || !key)
		return (NULL);
	else if (!ht->array)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	list = (ht->array[i]);
	while (list)
	{
		value = list->value;
		if (strcmp(list->key, key))
			list = list->next;
		else
			break;

	}
	return (value);
}
