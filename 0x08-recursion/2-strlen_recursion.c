#include "main.h"
/**
*_strlen_recursion - function returns length of a string
*@s: parameter
*Return: Always 0 (Success)
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);

s++;
return (1 + _strlen_recursion(s));
}
