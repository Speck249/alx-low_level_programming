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
unsigned int i = 0;
char *s;

if (size == 0)
return (NULL);

else
s = malloc(sizeof(char) * size);

if (s == NULL)
return (NULL);

else
while (i < size)
s[i] = c;
i++;
_putchar(s[i]);

return (0);
}
