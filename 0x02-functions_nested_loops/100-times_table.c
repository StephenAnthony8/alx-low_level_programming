#include "main.h"
/**
 * print_times_table - creates a multiplication table upto n x n
 * @n: number of times table
 */
void print_times_table(int n)
{
	int i, j, l;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				l = j * i;
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (l < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(l + '0');
				}
				else if (l < 100)
				{
					_putchar(' ');
					_putchar(l / 10 + '0');
					_putchar(l % 10 + '0');
				}
				else
				{
					_putchar(l / 100 + '0');
					_putchar((l / 10) % 10 + '0');
					_putchar(l % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
