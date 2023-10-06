#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table struct
 * @key: string to be hashed
 * @value: pair value of key
 * Return: 1: success 0: failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *set = NULL;
	char *value_cpy = NULL, *key_cpy = NULL;

	if (!ht || !key || !value || !ht->array)
		return (0);
	value_cpy = malloc(sizeof(char) * (strlen(value) + 1));
	if (!value_cpy)
		return (0);
	key_cpy = malloc(sizeof(char) * (strlen(key) + 1));
	if (!key_cpy)
	{
		free(value_cpy);
		return (0);
	}
	strcpy(key_cpy, key);
	strcpy(value_cpy, value);
	set = malloc(sizeof(hash_node_t));
	if (!set || !key_cpy || !value_cpy)
	{
		free(key_cpy);
		free(set);
		free(value_cpy);
		return (0);
	}
	set->key = key_cpy;
	set->value = value_cpy;
	return (place_set(ht, set));
}
/**
 * place_set - slots the node into the hash list
 * @ht: hash list
 * @set: node to be slotted it
 * Return: 1 on success, 0 on failure
 */
int place_set(hash_table_t *ht, hash_node_t *set)
{
	unsigned long int index;
	hash_node_t *tmp;

	index = key_index((unsigned char *)set->key, ht->size);
	if (ht->array[index])
	{
		tmp = ht->array[index];
		while (tmp)
		{
			if (!strcmp(tmp->key, set->key))
			{
				free(set->key);
				free(tmp->value);
				tmp->value = set->value;
				free(set);
				return (0);
			}
			tmp = tmp->next;
		}
	}
	set->next = (ht->array[index] ? ht->array[index] : NULL);
	ht->array[index] = set;
	return (ht->array[index] ? 1 : 0);
}
