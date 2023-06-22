#include "main.h"
/**
 * print_square - Prints out # to form a square of dimensions 'size'
 * @size: dimensions variable
 */
void print_square(int size)
{
	int m, n;

	m = size;
	if (size <= 0)
		_putchar('\n');
	while (size > 0)
	{
		for (n = 1; n <= m; n++)
			_putchar('#');
		size--;
		_putchar('\n');
	}

}
