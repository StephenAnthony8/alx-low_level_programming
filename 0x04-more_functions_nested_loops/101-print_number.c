#include "main.h"
/**
 * calculate_number - iterates through the values of the number
 * @m: input value
 */
void calculate_number(int m)
{
	int n = 10;

	while (m != 0)
	{
		if ((m / n) > 9)
			n = n * 10;
		else
		{
			_putchar((m / n) + '0');
			m = m % n;
			n = n / 10;
		}
	}
	if ((m == 0) && (n == 1))
		_putchar((m + '0'));

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
