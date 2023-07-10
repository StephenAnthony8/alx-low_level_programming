#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array filled with specified character
 * @size: unsigned integer count
 * @c: character to fill array with
 * Return: returns the character
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (0);

	arr = malloc((sizeof(c) * size));

	if (arr != NULL)
		while (i < size)
		{
			arr[i] = c;
			i++;
		}
	else
		return (0);
	return (arr);
}
