#include "main.h"
#include <stdlib.h>
/**
 *
 */
int *array_range(int min, int max)
{
	int * arr, i, count;

	if (min > max)
		return (0);
	count = (max - min);
	arr = malloc((sizeof(int) * count));
	if (!arr)
	{
		free(arr);
		return(0);
	}
	for (i = 0; i < count; i++, min++)
	{
		arr[i] = min;
	}
	return (arr);
}
