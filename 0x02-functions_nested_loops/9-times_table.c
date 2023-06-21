#include "main.h"
/**
 * times_table - creates a multiplication table upto 9x9
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = j * i;
			if ((k / 10) != 0)
			{
				_putchar(((k / 10) + '0'));
				_putchar(((k % 10) + '0'));
			}
			else
			{
				_putchar(' ');
				_putchar(((k % 10) + '0'));
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
