#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: memory amount to be allocated
 * Return: memory allocated
 */
void *malloc_checked(unsigned int b)
{
	void *arr = malloc(b);

	if (!arr)
	{
		free(arr);
		exit(98);
	}
	return (arr);
}
