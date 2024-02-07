#include "search_algos.h"
/**
 * binary_search - searches through the array via binary search
 * @array: array to be searched
 * @size: size of array
 * @value: value to be searched
 * Return: returns -1 on failure | array[index] on success
 */
int binary_search(int *array, size_t size, int value)
{
	int *print_arr, i, left, right, mid;

	left = 0;
	right = size - 1;
	if (array)
		while (left <= right)
		{
			/* print array */
			print_arr = array;
			printf("Searching in array: ");
			for (i = left; i <= right; i++)
			{
				printf("%d%s", print_arr[i], (i < right ? ", " : "\n"));
			}
			/* get the midpoint of the array */
			mid = ((right + left) / 2);

			/* check if midpoint is larger or smaller than original*/
			if (value > array[mid])
				left = (mid + 1);
			else if (value < array[mid])
				right = (mid - 1);
			else
				return (mid);
		}
	return (-1);
}
