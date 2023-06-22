#include "main.h"
/**
 * _isupper - checks whether a variable is an uppercase character
 * @c: variable being checked
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
