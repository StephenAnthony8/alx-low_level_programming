#include "main.h"
/**
 * print_rev - prints out a string followed by a new line
 * @s: string printed out
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	i = i - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
