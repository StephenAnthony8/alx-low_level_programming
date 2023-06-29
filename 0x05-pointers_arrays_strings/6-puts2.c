#include "main.h"
/**
 * puts2 - prints out everyother char followed by a new line
 * @str: string printed out
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((i == 0) || (i % 2 == 0))
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
