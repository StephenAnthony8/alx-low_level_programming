#include "main.h"
/**
 * _abs - calculates the absolute value of a number
 * @i: input integer
 * Return: Returns the absolute value
 */
int _abs(int i)
{
	int j;

	j = 0;

	if (i >= 0)
	{
		return (i);
	}
	else
	{
		for (i; i < 0; i++)
			j++;
		return (j);
	}
}
