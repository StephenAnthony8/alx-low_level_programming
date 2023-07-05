#include "main.h"
/**
 * _sqrt_recursion2 - iterates through possible values
 * @n: number being divided
 * @i: iteration number
 * Return: valid value
 */
int _sqrt_recursion2(int n, int i)
{
	if ((n / i == i) && (n % i == 0))
		return (i);
	else if (n / 2 > i)
	{
		i = _sqrt_recursion2(n, i + 1);
		return (i);
	}
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns natural sq root of n or -1 if unavailable
 * @n: square number
 * Return: valid value
 */
int _sqrt_recursion(int n)
{
	float i;

	if (n < 0)
		return (-1);
	i = 1.0;
	i = _sqrt_recursion2(n, i);

	return (i);
}
