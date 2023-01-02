#include "main.h"
/**
*strchr - function locates a character in a string
*@s: first parameter
*@c: second parameter
*Return: Always 0 (Success)
*/

char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (s + i);
}
return ('\0');
}
