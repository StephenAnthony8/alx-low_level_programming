#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints out numbers
 * @separator: delimiter
 * @n: number of values
 * @...: arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int j;

	va_start(args, n);
	for (j = i = 0; i < n; i++)
	{
		j = va_arg(args, int);
		if (separator && i < n - 1)
			printf("%d%s", j, separator);
		else
			printf("%d", j);
	}
	printf("\n");
	va_end(args);
}
