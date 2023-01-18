#include "function_pointers.h"
/**
*int_index - function searches for an integer
*@array: first parameter
*@size: second parameter
*@cmp: third paramter
*Return: returns -1 when size <= 0 & matches are unfound
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp)
{
if (size <= 0)
return (-1);

for (i = 0; i < size; i++)
if (cmp(array[i]);
return (i);
}

return (-1);
}
