#include "main.h"
/**
*_sqrt_recursion - function returns natural square root
*sqrt - function calculates natural square root
*@n: first parameter
*@x: second parameter
*Return: Always 0 (Success)
*/
int _sqrt_recursion(int n);
int _sqrt(int y, int x);

int _sqrt(int y, int x)
{
if ((x * x) == y)
return (x);
