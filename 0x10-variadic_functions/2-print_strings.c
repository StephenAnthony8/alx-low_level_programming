#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints arg strings
 * @separator: delimiter
 * @n: number of strings
 * @...:strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *j;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(args, char *);
		if (!j)
			j = "(nil)";
		if (separator && i < n - 1)
		{
			printf("%s%s", j, separator);
		}
		else
			printf("%s", j);
	}
	printf("\n");
}
