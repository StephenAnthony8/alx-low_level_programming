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
	int **arr, i, j, k;

	k = j = i = 0;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		return (NULL);
		free(arr);
	}
	for (; i < width; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}

	for (; j < height; j++)
		for (; k < width; k++)
			arr[j][k] = 0;
	return (arr);
}
