#include "main.h"
/**
 * binary_to_uint - converts chars to unsigned ints
 * @b: string to be converted
 * Return: 0 or unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value, i;

	if (!b)
		return (0);

	for (value = i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' && value == 0)
			continue;
		else if (i == 0)
			value = b[i] - '0';
		else if (b[i] >= '0' && b[i] <= '1')
			value = ((value * 2) + (b[i] - '0'));
		else
			return (0);
	}
	return (value);
}
