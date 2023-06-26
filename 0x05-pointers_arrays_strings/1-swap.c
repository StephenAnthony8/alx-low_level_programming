#include "main.h"
/**
 * swap_int - function that swaps the values of a and b
 * @a: first value
 * @b: second value
 */
void swap_int(int *a, int *b)
{
	int na, nb;

	na = *a;
	nb = *b;
	*a = nb;
	*b = na;
}
