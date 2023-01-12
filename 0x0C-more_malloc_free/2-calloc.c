#include "main.h"
#include <stdlib.h>
/**
*_calloc - function allocates memory for an array
*@nmemb: first parameter
*@size: second parameter
*Return: no return value
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
void *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(size * nmemb);

if (ptr == NULL)
return (NULL);

for (i = 0; i < (nmemb * size); i++)
ptr[i] = 0;

return (ptr);
}
