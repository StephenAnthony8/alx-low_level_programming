#include "main.h"
/**
 * reverse_array - Reverses the array provided
 * @n: number of elements in the array
 * @a: array
 */
void reverse_array(int *a, int n)
{
	int i, e;
	int v;

	i = 0;
	e = n - 1;
	while (i < e)
	{
		v = a[i];
		a[i] = a[e];
		a[e] = v;
		i++;
		e--;
	}
}
