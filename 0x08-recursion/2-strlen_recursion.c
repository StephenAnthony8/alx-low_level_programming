#include "main.h"
/**
 * _strlen_recursion_count - Iterates through  characters in a string
 * @s: string to be iterated through
 * @i: iteration count
 * Return: Value of i
 */
int _strlen_recursion_count(char *s, int i)
{
	if (s[i] != '\0')
	{
		i++;
		i = _strlen_recursion_count(s, i);

	}
	return (i);
}

/**
 * _strlen_recursion - counts the number of characters in a string
 * @s: string to be calculated
 * Return: Value of i
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	i = _strlen_recursion_count(s, i);
	return (i);
}
