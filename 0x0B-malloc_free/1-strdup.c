#include "main.h"
#include <stdlib.h>
/**
*_strdup -  function returns pointer to memory
*@str: parameter
*Return: Always 0 (Success)
*/

char *_strdup(char *str)
{
int i, j;
char *ptr;

if (str == NULL)
return (NULL);

while (str[i])
i++;

ptr = (char *)malloc(sizeof(char) * (i + 1));

if (ptr == NULL)
return (NULL);

while (j < i)
{
str[j] = ptr[j];
j++;
}

ptr[j] = '\0';
return (ptr);
}
