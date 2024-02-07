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
	int i, left, right, middle;

	left = 0;
	right = size - 1;

	if (array)
		while (left <= right)
		{
			printf("searching in array: ");
			for (i = left; i <= right; i++)
				printf("%d%s", array[i], (i == right ? "\n" : ", "));

			middle = (left + right) / 2;

			if (array[middle] > value)
				right = middle - 1;
			else if (array[middle] < value)
				left = middle + 1;
			else
				return (middle);
		}
	return (-1);
}
