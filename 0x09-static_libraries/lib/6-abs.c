#include "main.h"
/**
*_abs - function computes the absolute value of an integer
*@x: integer value
*Return: Always 0 (Success)
*/

int _abs(int x)
{
if (x < 0)
x = -x;
return (x);
}
