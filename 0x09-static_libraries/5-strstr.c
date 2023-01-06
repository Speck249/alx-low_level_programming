#include "main.h"
/**
*_strstr - function locates a substring
*@haystack: first parameter
*@needle: second parameter
*Return: Always 0 (Success)
*/

char *_strstr(char *haystack, char *needle)
{
int i = 0, j = 0;

while (haystack[i])
{
while (needle[j])
{
if (haystack[i + j] != needle[j])
{
break;
}
j++;
}

if (needle[j] == '\0')
{
return (haystack + i);
}
i++;
}
return ('\0');
}
