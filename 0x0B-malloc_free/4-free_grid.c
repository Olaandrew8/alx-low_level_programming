#include <stdlib.h>
#include "main.h"

/**
 * free_grid - func frees the memory allocate for the grid
 * created by alloc_grid()
 * @grid: grid to free
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int z;

	if (grid == NULL || height == 0)
		return;

	for (z = 0; z < height; z++)
		free(grid[z]);

	free(grid);
}
