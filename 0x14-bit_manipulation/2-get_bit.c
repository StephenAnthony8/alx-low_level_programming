#include "main.h"
/**
 * get_bit - prints the binary value of n
 * @n: Number being accessed
 * @index: index position
 * Return: returns -1 or value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int base = 2, value = 0, i;

	if (index > 63)
		return (-1);
	for (i = 0; i < 63; i++)
	{
		value = n % base;
		n /= base;
		if (i == index)
			return (value);
	}
	return (value);
}
