#include "main.h"
#include <stdlib.h>

/**
* free_grid - free grid
* @grid: array
* @height:rows
*
* Return: nothing.
*/
void free_grid(int **grid, int height)
{
int i;

if (grid == NULL || height == 0)
return;

for (i = 0; i < height; i++)
free(grid[i]);

free(grid);
}
