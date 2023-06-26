#include "main.h"
/**
 * puts_half - prints out the greater half of the string followed by a new line
 * @str: string printed out
 */
void puts_half(char *str)
{
	int i = 0, j = 0;

	while (str[i] != '\0')
		i++;
	j = i / 2;
	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
