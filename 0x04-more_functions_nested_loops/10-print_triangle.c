#include "main.h"
/**
 * print_triangle - prints a triangle
 * @n: number of times to print _
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
		for (i = 1; i <= size; i++)
		{
		
			for (j = (size - i); j >= 1; j--)
				_putchar(' ');
			for (k = i; k >= 1; k--)
				_putchar('#');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
