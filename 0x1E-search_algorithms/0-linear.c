#include "search_algos.h"
/**
 * linear_search - searches through a sorted index in linear form
 * @array: array to be searched
 * @size: size of array
 * @value: value to be searched
 * Return: returns -1 on failure | array[index] on success
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i, rtn = -1;

	if (array && (size > 0))
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (value == array[i])
			{
				rtn = i;
				break;
			}
		}
	}
	return (rtn);
}
