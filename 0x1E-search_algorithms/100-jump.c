#include "search_algos.h"
#include <math.h>
/**
*jump_search - executes jump start algorithm
*@array: first parameter
*@size: second parameter
*@value: third parameter
*Return: correct value.
*/

int jump_search(int *array, size_t size, int value)
{
int i;
int jump;
int first_half;
int second_half;

if (array == NULL)
{
return (-1);
}

jump = sqrt(size);
first_half = 0;
second_half = jump;

while (second_half < (int)size && array[second_half] < value)
{
printf("Value checked array[%d] = [%d]\n", second_half, array[second_half]);
first_half = second_half;
second_half += jump;
}
printf("Value found between indexes [%d] and [%d]\n", first_half, second_half);

for (i = first_half; i < (int)size && i <= second_half; i++)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
}
return (-1);
}
