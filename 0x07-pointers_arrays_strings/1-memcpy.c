#include "main.h"
/**
 * _memcpy - Copies values in buffers of array src to array dest
 * @dest: array being copied into
 * @src: array being copied from
 * @n: number of values copied from array src
 * Return: returns new dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i != n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
