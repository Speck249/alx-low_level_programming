#include "main.h"
#include <stdlib.h>
/**
*create_array - function creates and intializes a char array
*@c:first parameter
*@size: second parameter
*Returns: Always 0 (Success)
*/

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *a;

if (size == 0)
return (NULL);

a = malloc(sizeof(c) * size);

if (a == NULL)
return (NULL);

for (i = 0; i < size; i++)
a[i] = c;

return (a);
}
