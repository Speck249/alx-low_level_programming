#include "main.h"
#include <stdlib.h>
/**
*array_range - function creates an array of integers
*@min: first parameter
*@max: second parameter
*Return: Always 0 (success)
*/

int *array_range(int min, int max)
{
int i, *ptr;

if (min > max)
return (NULL);

ptr = malloc(sizeof(*ptr) * ((max - min) + 1));

if (ptr == NULL)
return (NULL);

for (i = 0; min <= max; min++, i++)
ptr[i] = min;

return (ptr);
}
