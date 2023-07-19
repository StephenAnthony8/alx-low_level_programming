#include "function_pointers.h"
/**
 * int_index - returns the first index that matches the prerequisites
 * @array: iteration numbers
 * @size: size of array
 * @cmp: function with prerequisite
 * Return: returns index/-1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);

}
