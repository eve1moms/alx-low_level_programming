#include "main.h"
#include<stdlib.h>
/**
* free_grid - rees a 2 dimensional grid previously created by your alloc_grid
* @grid: the 2D array to be freed
* @height: the height of the grid
*/
void free_grid(int **grid, int height)
{
	int n; /* n represents the index*/

	for (n = 0; n < height; n++)
		free(grid[n]);
	free(grid);
}
