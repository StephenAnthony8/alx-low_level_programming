#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: lower end int
 * @max: higher end int
 * Return: returns the array
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (!arr)
	{
		free(arr);
		return (0);
	}
	for (i = 0; min <= max; i++, min++)
	{
		arr[i] = min;
	}
	return (arr);
}
