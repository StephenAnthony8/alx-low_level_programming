#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees up memory from the previous 2D pointer
 * @grid: 2D pointer
 * @height: rows to be cleared
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL)
	{
		for (; height >= 0; height--)
			if (grid[height] != NULL)
				free(grid[height]);
		free(grid);
	}
}
