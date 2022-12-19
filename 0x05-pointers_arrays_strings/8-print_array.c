#include <stdio.h>
/**
*print_array - prints n elements of an array of integers
*@a: parameters
*@n: parameters
*Return: returns no value
*/

void print_array(int *a, int n)
{
int i = 0;

for (; i < n; i++)
{

printf("%d", *(a + 1));

if (i != (n - 1))
printf(", ");
}
printf("\n");
}
