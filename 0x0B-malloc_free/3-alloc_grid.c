#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creates a 2D array
 * @width: inside pointers dimension
 * @height: outside pointers dimensions
 * Return: 2D array or NULL
 */
int **alloc_grid(int width, int height)
{
	int **arr, i;

	i = 0;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (; i < width; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
			return (NULL);
	}

	for (; height - 1 > 0; height--)
		for (; width - 1 >= 0; width--)
			arr[height][width] = 0;
	return (arr);
}
