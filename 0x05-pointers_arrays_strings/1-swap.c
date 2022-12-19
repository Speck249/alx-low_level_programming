#include "main.h"
/**
*swap_int - swaps the values of two integers
*@a: parameter
*@b: parameter
*Return: no return value
*/

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
