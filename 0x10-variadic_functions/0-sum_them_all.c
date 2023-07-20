#include "variadic_functions.h"
#include "stdarg.h"
/**
 * sum_them_all - adds all argument parameters
 * @n: number of parameters
 * @...: parameters to be added
 * Return: added sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int j;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (j = i = 0; i < n; i++)
		j += va_arg(args, int);
	va_end(args);
	return (j);
}
