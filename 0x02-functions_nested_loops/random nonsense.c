#include "main.h"
/**
 * positive_values - calculates the positive values
 * @n: value to be calculated
 */
void positive_values(int n)
{
	int o, t, h;

		for (; n < 98; n++)
		{
			o = ((n % 10) + '0');
			t = (((n % 100) / 10) + '0');
			if (n >= 10)
				_putchar(t);
			_putchar(o);
			_putchar(',');
			_putchar(' ');
		}
		for (; n > 98; n--)
		{
			o = ((n % 10) + '0');
			t = (((n % 100) / 10) + '0');
			h = (((n % 1000) / 100) + '0');
			if (n >= 100)
				_putchar(h);
			if (n >= 10)
				_putchar(t);
			_putchar(o);
			_putchar(',');
			_putchar(' ');
		}
		if (n == 98)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar('\n');
		}
}

/**
 * negative_values - calculates the negative values
 * @n: value to be calculated
 */
void negative_values(int n)
{
	int j;

	n = (-n);
	for (; n > 0; n--)
		if (n != 0)
		{
			_putchar('-');
			if (n >= 100)
				_putchar((((n % 1000) / 100) + '0'));
			if (n >= 10)
				_putchar((((n % 100) / 10) + '0'));
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			j = n;
		}
	positive_values(j);
}

/**
 * print_to_98 - prints out all numbers to the value 98
 * @n: initial value
 */
void print_to_98(int n)
{
	if (n >= 0)
		positive_values(n);
	else
		negative_values(n);
}
