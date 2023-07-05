#include "main.h"
/**
 * factorial - calculates the factorial of the value n
 * @n: initial value
 * Return: returns factorial value n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	if (n != 1)
	{
		n = n * factorial(n - 1);
		return (n);
	}
	else 
		return (n);

}
