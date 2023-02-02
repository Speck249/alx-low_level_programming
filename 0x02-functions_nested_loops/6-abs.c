#include "main.h"
/**
*_abs - Computes absolute value of an integer
*@x: parameter
*Return: Always 0 (Success)
*/

int _abs(int x)
{
int y;

y = (x < 0) ? (x * -1) : x;
return (y);
}
