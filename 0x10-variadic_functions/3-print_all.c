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
	char *r_str;
	int i = 0, check = 0;

	va_start(args, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case ('c'):
				printf("%c", va_arg(args, int));
				check = 1;
				break;
			case ('i'):
				printf("%d", va_arg(args, int));
				check = 1;
				break;
			case ('f'):
				printf("%f", va_arg(args, double));
				check = 1;
				break;
			case ('s'):
				r_str = va_arg(args, char *);
				if (r_str == NULL)
					r_str = "(nil)";
				printf("%s", r_str);
				check = 1;
				break;
		}
		if ((format[i + 1] != '\0') && (check))
			printf(", ");
		i++;
		check = 0;
	}
	printf("\n");
	va_end(args);
}
