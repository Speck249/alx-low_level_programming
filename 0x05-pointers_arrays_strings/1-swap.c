#include "main.h"
/**
*swap_int - swaps values of two integers
*@a: first parameter
*@b: second parameter
*Return: no return value
*/

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
