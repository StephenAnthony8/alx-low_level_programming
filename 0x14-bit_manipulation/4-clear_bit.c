#include "main.h"
/**
 * clear_bit - sets the value of a specified bit to 0
 * @n: number to be modifier
 * @index: position of index to be modified
 * Return: 1 or 0 depending on outcome
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitMask, flip_num;

	if (index > 63)
		return (-1);
	bitMask = 1 << index;
	flip_num = ~(*n);
	flip_num |= bitMask;
	*n = ~flip_num;
	return (1);
}
