#include "main.h"
/**
*main - function checks for alphabetic character
*
*Return: Always 0 (Success)
*/

int _isalpha(int c)
{
char c;
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return(1);
}
else
{
return(0);
}
_putchar('\n');
}
