#include "main.h"
#include <stdlib.h>
/**
*_strdup -  function returns pointer to memory
*@str: parameter
*Return: Always 0 (Success)
*/

char *_strdup(char *str)
{
unsigned int i, j;
char *ptr;

if (str == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++);

ptr = (char *)malloc(sizeof(char) * (i + 1));

if (ptr == NULL)
return (NULL);

for (j = 0; j <= i; j++)
{
str[j] = ptr[j];
}

return (ptr);
}
