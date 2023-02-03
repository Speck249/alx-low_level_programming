#include "main.h"
/**
*_isupper - checks for uppercase character
*@c: parameter
*Return: 1 for uppercase character, or 0 otherwise
*/

int _isupper(int c)
{
if (c > 64 && c < 91)
return (1);

else
return (0);
}
