#include "main.h"
/**
 * _isdigit - checks whether a variable is a number character
 * @c: variable being checked
 * Return: returns either 0 or 1 depending on checks
 */
int _isdigit(int c)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
