#include "main.h"
/**
*_isalpha -  function checks for alphabetic character
*
*@c - character to be evaluated
*
*Return: Always 0 (Success)
*/

int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
