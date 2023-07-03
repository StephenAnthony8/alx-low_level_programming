#include "main.h"
/**
 * print_chessboard - prints out a chessboard
 * @a: 2D array
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	i = 0;
	while (i <= 7)
	{
		j = 0;
		while (j <= 7)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
