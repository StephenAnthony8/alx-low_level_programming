#include "main.h"
/**
 * print_chessboard - prints out a chessboard
 * @a: 2D array
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i;
	int j;

	i = 0;
	while (a[i][0] != '\0')
	{
		j = 7;
		while (j >= 0)
		{
			_putchar(a[i][j]);
			j--;
		}
		_putchar('\n');
		i++;
	}
}
