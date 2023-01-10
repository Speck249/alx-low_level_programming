#include "main.h"
#include <stdlib.h>
/**
*free_grid - function creates and intializes a char array
*@grid: first parameter
*@height: second parameter
*Return: no return value
*/

void free_grid(int **grid, int height)
{
if (grid != NULL && height != 0)
{
for (; height >= 0; height--)
free(grid[height]);
free(grid);
}
}
