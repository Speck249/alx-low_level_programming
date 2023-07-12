#include "search_algos.h"
/**
*binary_search - function searches for value in sorted array
*@array: first parameter
*@size: second parameter
*@value: third parameter
*Return: corret value
*/

int binary_search(int *array, size_t size, int value)
{
int i;
int first_half;
int second_half;
int mid;

if (array == NULL)
{
return (-1);
}

first_half = 0;
second_half = size - 1;

while (first_half <= second_half)
{
printf("Searching in array: ");
for (i = first_half; i <= second_half; i++)
{
printf("%d", array[i]);

if (i < second_half)
{
printf(", ");
}
}
printf("\n");

mid = (first_half + second_half) / 2;
if (array[mid] == value)
return (mid);

else if (array[mid] < value)
first_half = mid + 1;

else
second_half = mid - 1;
}
return (-1);
}
