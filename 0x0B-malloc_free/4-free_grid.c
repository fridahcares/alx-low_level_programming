#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - function that frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @height: height of the array
 * @grid: dimensional grid array
 * Return: 0
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
