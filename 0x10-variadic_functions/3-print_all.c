#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints out all types of characters
 * @format: string parameters
 * @...: arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *r_str, *delimiter = "";
	int i = 0;

	va_start(args, format);
	if (format)
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case ('c'):
					printf("%s%c", delimiter, va_arg(args, int));
					break;
				case ('i'):
					printf("%s%d", delimiter, va_arg(args, int));
					break;
				case ('f'):
					printf("%s%f", delimiter, va_arg(args, double));
					break;
				case ('s'):
					r_str = va_arg(args, char *);
					if (r_str == NULL)
						r_str = "(nil)";
					printf("%s%s", delimiter, r_str);
					break;
			}
			delimiter = ", ";
			i++;
		}
	printf("\n");
	va_end(args);
}
