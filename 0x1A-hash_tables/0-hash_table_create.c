#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table's cells
 * Return: Null on failure or hash table pointer on success
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hsh_tab = NULL;
	hash_node_t **hsh_arr = NULL;
	unsigned long int i;
	/* int size_p = 0;*/

	/* size_p = sizeof(hash_node_t *); */
	hsh_tab = malloc(sizeof(hash_table_t));
	if (!hsh_tab)
		return (NULL);
	hsh_arr = malloc(sizeof(hash_node_t *) * size);
	if (!hsh_arr)
	{
		free(hsh_tab);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	       hsh_arr[i] = NULL;
	hsh_tab->size = size;
	hsh_tab->array = hsh_arr;
	return (hsh_tab);
}
