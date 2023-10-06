#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table struct
 * @key: explanatory
 * @value: pair value of key
 * Return: 1: success 0: failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *set;
	hash_node_t **ht_arr;
	char *value_cpy;
	unsigned long int index;

	if (!ht || !key || !value)
		return (0);
	if (!ht->array)
		return (0);
	value_cpy = malloc(sizeof(char) * strlen(value));
	if (!value_cpy)
		return (0);
	strcpy(value_cpy, value);
	set = malloc(sizeof(hash_node_t));
	if (!set)
	{
		free(value_cpy);
		return (0);
	}
	set->key = (char *)key;
	set->value = value_cpy;
	index = key_index((unsigned char *)key, ht->size);
	ht_arr = ht->array;

	set->next = (ht_arr[index] ? ht_arr[index] : NULL);
	ht_arr[index] = set;
	return (1);
}
