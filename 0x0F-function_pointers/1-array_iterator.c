#include "function_pointers.h"
/**
 * array_iterator - executes a function on an array
 * @array: values to be iterated through
 * @size: length of the array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if ((array) && (action) && (size))
	for (i = 0; i < size; i++)
		action(array[i]);
}
