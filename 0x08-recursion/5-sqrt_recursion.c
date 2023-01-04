#include "main.h"

int _sqrt(int, int);

/**
*_sqrt_recursion - function returns natural square root
*@n: parameter
*Return: square root
*/

int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}

/**
*_sqrt - recursive square root
*@n: first parameter
*@x: second parameter
*Return: natural number
*/

int _sqrt(int n, int x)
{
int square = x * x;
if (square > n)
return (-1);

if (square == n)
return (x);

return (_sqrt(n, x + 1));
}
