#include "main.h"
/**
 * _isdigit - checks whether a variable is a number character
 * @c: variable being checked
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
