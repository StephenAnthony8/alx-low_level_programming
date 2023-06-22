#include "main.h"
/**
 * print_diagonal - prints a diagonal line n times
 * @n: number of times to print _
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
		for (i = 1; i <= n; i++)
		{
			j = i;
			while (j > 1)
			{
				_putchar(' ');
				j--;
			}
			_putchar('\\');
			_putchar('\n');

		}
	else
		_putchar('\n');
}
