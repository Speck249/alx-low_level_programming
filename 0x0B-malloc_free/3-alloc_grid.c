#include "main.h"
#include <stdlib.h>
/**
*alloc_grid - function returns pointer to 2D array
*@width:first parameter
*@height: second parameter
*Return: Always 0 (Success)
*/

int **alloc_grid(int width, int height)
{
int a, b, c, d;
int **m;

if (width <= 0 || height <= 0)
return (NULL);

m = malloc(height * sizeof(int *));

if (m == NULL)
{
free(m);
return (NULL);
}

for (a = 0; a < height; a++)
{
m[a] = malloc(width * sizeof(int));
if (m[a] == NULL)
{
for (b = a; b >= 0; b--)
{
free(m[b]);
}
free(m);
return (NULL);
}
}

for (c = 0; c < height; c++)
{
for (d = 0; d < width; d++)
m[c][d] = 0;
}
return (m);
}
