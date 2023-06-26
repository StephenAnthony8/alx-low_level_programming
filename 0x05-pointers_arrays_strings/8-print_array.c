#include "main.h"
#include <stdio.h>
/**
 * print_array - prints out n elements of string a followed by a new line
 * @a: array
 * @n: count to be printed out
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (a[i] != a[(n - 1)])
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("%d\n", a[i]);
}
