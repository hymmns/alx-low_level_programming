#include <stdlib.h>

/**
 * free_grid - frees 2 dimensional grid.
 * @grid: char pointer - grid.
 * @height: int - height.
 *
 * Return: Always void.
 */
void free_grid(int **grid, int height)
{
	int index = 0;

	for (; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}
