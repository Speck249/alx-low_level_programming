#include "main.h"
#include <stdio.h>
/**
*print_diagsums - function prints sum of two diagonals
*@a: first parameter
*@size: second parameter
*Return: no return value
*/

void print_diagsums(int *a, int size)
{
int i, b = 0, c = 0;

for (i = 0; i < size; i++)
{
b += a[(size + 1) * i];
c += a[(size - 1) * (i + 1)];
}
printf("%d, %d", b, c);
}
