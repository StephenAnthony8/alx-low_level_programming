#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates memory to the minimum provided size
 * @old_size: size of ptr
 * @new_size: size of array to be created
 * @ptr: malloc'd array
 * Return: returns reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *arr;
	unsigned int count, i;

	if (new_size == old_size)
		return (ptr);
	if (ptr && !new_size)
	{
		free(ptr);
		return (0);
	}
	if (new_size > old_size)
		count = old_size;
	else if (new_size < old_size)
		count = new_size;

	arr = malloc(new_size);
	if (!ptr)
		return (arr);
	if (!arr)
	{
		free(ptr);
		free(arr);
		return (0);
	}
	for (i = 0; i < count; i++)
		((char *)arr)[i] = ((char *)ptr)[i];
	free(ptr);
	return (arr);

}
