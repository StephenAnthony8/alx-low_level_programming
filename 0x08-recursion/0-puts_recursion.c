#include "main.h"
/**
 * _puts_recursion2 - iterates through the string printing it
 * @i: element to be printed out
 * @s: string being iterated through
 */
void _puts_recursion2(char *s, int i)
{

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
		_puts_recursion2(s, i);
	}
	else
		_putchar('\n');
}

/**
 * _puts_recursion - prints out a string followed by a new line
 * @s: string to be printed out
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;
	_puts_recursion2(s, i);
}
