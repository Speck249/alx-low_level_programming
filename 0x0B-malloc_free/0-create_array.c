#include "main.h"
#include <stdlib.h>
/**
*create_array - function creates and intializes a char array
*@c:first parameter
*@size: second parameter
*Return: Always 0 (Success)
*/

char *create_array(unsigned int size, char c)
{
int i = 0;
char *s;

if (size == 0)
return (NULL);

s = malloc(sizeof(char) * size);

if (s == NULL)
return (NULL);

for (i = 0; i < size; i++)
s[i] = c;

return (s);
}
