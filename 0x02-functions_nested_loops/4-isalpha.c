#include "main.h"
/**
*_isalpha -  Checks for alphabetic character
*@c: parameter
*Return: Always 0 (Success)
*/

int _isalpha(int c)
{
if ((c > 64 && c < 91) || (c > 96 && c < 123))
return (1);

else
return (0);
}
