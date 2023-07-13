#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: Number of elements to be allocated
 * @size: memory size
 * Return: void type pointer to the continuous memory block
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (!(nmemb || size))
		return (0);
	arr = malloc(nmemb * size);
	if (!arr)
	{
		free(arr);
		return (0);
	}
	return (arr);

}
