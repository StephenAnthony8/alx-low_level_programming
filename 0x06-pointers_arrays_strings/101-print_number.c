#include "main.h"
/**
 * number_converter - converts the positive values
 * @n: value to be converted
 */
void number_converter(int n)
{
	int t = 10;

	while ((n / t != 0))
		t = (t * 10);
	t = t / 10;
	while (t != 0)
	{
		_putchar((n / t) + '0');
		n = n % t;
		t = t / 10;
	}
}
/**
 * print_number - checks the state of number then runs number_ converter
 * @n: value to be printed
 */
void print_number(int n)
{
	if (n > 0)
		number_converter(n);
	else if (n < 0)
	{
		n = -n;
		_putchar('-');
		number_converter(n);
	}
	else
		_putchar('0');
}
