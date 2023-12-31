#include "main.h"
/**
 * print_last_digit - returns the last digit of a number
 * @i: input integer
 * Return: Returns the modulo value
 */
int print_last_digit(int i)
{
	if (i >= 0)
	{
		_putchar((i % 10) + '0');
		return ((i % 10));
	}
	else if (i <= -1000)
	{
		_putchar((-(i % 10)) + '0');
		return (-(i % 10));
	}

	else
	{
		_putchar((-i % 10) + '0');
		return ((-i % 10));
	}

}
