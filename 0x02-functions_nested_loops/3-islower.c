#include "main.h"
/**
*main - function checks for lowercase character
*
*Return: Always 0 (Success)
*/

int _islower(int c)
{
char c = 97;
if (c <= 122)
{
return (1);
} 
else
{
return (0);
}
_putchar('\n');
}
