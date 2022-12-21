#include "main.h"
/**
*reverse_array - reverses the content of an array of integers
*@a: first parameter
*@n: second parameter
*Return: no return value
*/

void reverse_array(int *a, int n)
{
int i, temp;

for (i = n; i > n / 2; i--)
{
temp = a[n - 1 - i];
a[n - 1 - i] = a[i];
a[i] = temp;
}
}
