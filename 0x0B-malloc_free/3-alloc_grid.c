#include "main.h"

/**
 * alloc_grid - returns a pointer
 * @height: number of colums
 * @width: number of rows
 * Return: grid
 */

int **alloc_grid(int width, int height)
{
int **grid;
int k;
int j;
int l;

if (width <= 0 || height <= 0)
{
return (NULL);
}
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
{
return (NULL);
}
for (k = 0 ; k < height ; k++)
{
grid[k] = malloc(sizeof(int) * width);
if (grid[k] == NULL)
{
free(grid);
for (l = 0 ; l <= height ; l++)
{
free(grid[l]);
}
return (NULL);
}
for (j = 0 ; j < width ; j++)
{
grid[k][j] = 0;
}
}
return (grid);
}
