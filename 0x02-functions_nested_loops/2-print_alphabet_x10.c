#include "main.h"

/**
 * print_alphabet_x10 - puts out the alphabet onto the stdout ten times
 */
void print_alphabet_x10(void)
{
	int i, j;

	j = 0;
	while (j != 10)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
		j++;
	}
}
