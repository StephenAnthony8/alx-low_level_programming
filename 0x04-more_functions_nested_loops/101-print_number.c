#include "main.h"
/**
 * calculate_number - iterates through the values of the number
 * @m: input value
 */
void calculate_number(int m)
{
	int n = 10, o;

	o = m;
	if (m < 10)
	{
		_putchar((m + '0'));
		return;
	}

	while (m != 0)
	{
		if ((m / n) > 9)
		{
			n = n * 10;
		}
		else if ((m / n) <= 9)
		{
			_putchar((m / n) + '0');
			m = m % n;
			n = n / 10;

		}
	}
	while (o % 10 == 0)
	{
		_putchar((o % 10) + '0');
		o = o / 10;
	}
}
/**
 * print_number - prints out numbers using _putchar()
 * @n: input value
 */

void print_number(int n)
{
	if (n > 0)
		calculate_number(n);
	else if (n < 0)
	{
		_putchar('-');
		n = (-n);
		calculate_number(n);
	}
	else
		_putchar((n + '0'));
}
