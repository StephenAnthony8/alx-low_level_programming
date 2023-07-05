#include "main.h"
/**
 * _pow_recursion - returns the x exponent y
 * @x: base number
 * @y: exponent
 * Return: Final value
 */
int _pow_recursion(int x, int y)
{
	int i;

	i = 1;

	if (y < 0)
		return (-1);
	else if (y != 0)
	{
		i = _pow_recursion(x, y - 1);
		i *= x;
	}
	return (i);
}
