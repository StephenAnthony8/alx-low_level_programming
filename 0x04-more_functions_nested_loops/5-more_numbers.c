#include "main.h"
/**
 * more_numbers - prints numbers 0 to 9 10 times
 */
void more_numbers(void)
{
	int i, j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 1; i <= 14; i++)
		{
			if ((i / 10) != 0)
				_putchar((i / 10) + '0');

			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
