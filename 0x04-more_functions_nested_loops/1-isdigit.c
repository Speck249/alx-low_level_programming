#include "main.h"
/**
*_isdigit - checks for a digit
*@c: parameter
*Return: 1 for digit, or 0 otherwise
*/

int _isdigit(int c)
{
if (c > 47 && c < 58)
return (1);

else
return (0);
}
