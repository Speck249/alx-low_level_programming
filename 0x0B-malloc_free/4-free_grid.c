#include "main.h"
/**
*free_grid - function creates and intializes a char array
*@grid: first parameter
*@height: second parameter
*Return: no return value
*/

void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
