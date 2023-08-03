#include "main.h"
/**
 * print_binary - prints the binary value of n
 * @n: Number to be converted
 */
void print_binary(unsigned long int n)
{
	unsigned int m = 2, count;

	if (n > 1)
	{
		while (n >= (m * 2))
			m *= 2;
		while (n != 0 && m)
		{
			n -= m;
			_putchar('1');
			for (count = 0; m > n && m; count++)
			{
				m /= 2;
				if (count == 0)
					continue;
				else
					_putchar('0');
			}
		}
	}

	else
		_putchar(n + '0');
}
