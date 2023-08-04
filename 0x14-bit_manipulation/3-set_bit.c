#include "main.h"
/**
 * set_bit - sets a bit at the given index to 1
 * @n: number address
 * @index: position to set the bit
 * Return: returns 1 or -1 depending on success value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitMask;

	if (index > 63)
		return (-1);
	bitMask = 1 << index;
	*n |= bitMask;
	return (1);
}
