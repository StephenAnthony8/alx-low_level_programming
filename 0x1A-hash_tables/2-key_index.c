#include "hash_tables.h"
/**
 * key_index - returns the index of a key after hashing it
 * @key: string to be hashed
 * @size: size of array used
 * Return: the key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_val;

	key_val = hash_djb2(key) % size;
	return ((unsigned long int)key_val);
}
