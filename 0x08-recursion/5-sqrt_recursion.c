#include "main.h"
/**
*_sqrt_recursion - function returns natural square root
*@n: parameter
*Return: Always 0 (Success)
*/

int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}

/**
*_sqrt - function calculates square root
*@n: first parameter
*@x: second parameter
*Return: Always 0 (Success)
*/

int _sqrt(int n, int x)
{
int square = x * x;
if (square > x)
return (-1);

if (square == n)
return (x);

return (_sqrt(n, x + 1));
}
