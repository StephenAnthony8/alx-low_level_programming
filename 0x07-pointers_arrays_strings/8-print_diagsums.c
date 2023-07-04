#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - Prints out the sum of the square matrix cast into pointer a
 * @a: 2D array cast to a pointer
 * @size: size of the columns
 */
void print_diagsums(int *a, int size)
{
	int i, j, rtn, rtn_r;

	rtn_r = rtn = i = 0;
	j = size - 1;
	for (; i < size; i++)
	{
		rtn = rtn + a[i * size + i];
		rtn_r = rtn_r + a[i * size + j];
		j--;
	}
	printf("%d, %d\n", rtn, rtn_r);

}
