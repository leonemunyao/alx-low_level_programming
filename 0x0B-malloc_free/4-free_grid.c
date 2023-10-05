#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2-dimensonal grid
 * @grid: the grid
 * @height: the height of the grid
 *
 * Return: Always 0
 */

void free_grid(int **grid, int height)
{
if (grid != NULL && height != 0)
{
for (height = 0 ; height > 0 ; height--)
{
free(grid[height]);
}
free(grid);
}
}
