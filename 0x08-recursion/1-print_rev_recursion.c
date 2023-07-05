#include "main.h"
/**
 * _print_rev_recursion2 - iterates through the string
 * @s: string to be iterated through
 * @i: iteration count
 */
void _print_rev_recursion2(char *s, int i)
{
	if (s[i] != '\0')
	{
		i++;
		_print_rev_recursion2(s, i);
		_putchar(s[i - 1]);
	}
	if (i > 0)
		i--;

}
/**
 * _print_rev_recursion - prints out a string in reverse
 * @s: string to be printed in reverse
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	_print_rev_recursion2(s, i);
}
