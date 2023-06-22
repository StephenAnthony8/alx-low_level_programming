#include "main.h"
/**
 * _isupper - Checks whether a variable is an uppercase character
 * @c: variable being checked
 * Return: returns either 0 or 1 depending on checks
 */
int _isupper(int c)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
