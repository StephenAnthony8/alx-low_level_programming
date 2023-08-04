#include "main.h"

/**
 * print_binary - prints the binary value of n
 * @n: Number to be converted
 */
void print_binary(unsigned long int n)
{
	unsigned long int b_mask, c_val, i;

	b_mask = 1;
	c_val = n;

	if (!n)
	{
		_putchar('0');
		return;
	}
	for (i = 0; c_val >= 1; i++)
	{
		c_val = c_val >> 1;
		if (i < 63)
			b_mask = b_mask << 1;
	}
	if (i != 64)
		b_mask = b_mask >> 1;

	while (b_mask)
	{
		if ((n & b_mask) == 0)
			_putchar('0');
		else
			_putchar('1');
		b_mask = b_mask >> 1;
	}
}
