#include "main.h"
/**
* free_grid - function to free grid
* @grid: width of grid
* @height: height of grid
* Return: Nothing.
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
