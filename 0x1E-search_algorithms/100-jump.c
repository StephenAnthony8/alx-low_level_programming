#include "search_algos.h"
#include <math.h>
/**
 * jump_search - Utilizes the jump search algorithm for searching
 * @array: array to be searched through
 * @size: size of array
 * @value: value to search in array
 * Return: index on success || -1 on failure
 */
int jump_search(int *array, size_t size, int value)
{
	int sq, i, check;

	/* get square root & use it as jump */
	sq = (int)(sqrt((double)(size)));
	/* if n + 1 * sqrt >= value, linear */
	check = 1;
	i = 0;
	if (array)
		while (i < size)
		{

			if (((i + sq >= size) || (array[i + sq] >= value)) && (check))
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
				printf("Value found between indexes [%d] and [%d]\n", i, i + sq);
				check = 0;
			}

			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
			if ((i + sq >= size) || (array[i + sq] >= value))
				i++;
			else
				i += sq;
		}

	/* else return -1 */
	return (-1);
}
