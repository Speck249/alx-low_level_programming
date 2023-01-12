#include "main.h"
#include <stdlib.h>
/**
*malloc_checked - function allocates memory using malloc
*@b: parameter
*Return: no return value
*/

void *malloc_checked(unsigned int b)
{
unsigned int *ptr;

if (b == 0)
return (NULL);

ptr = (int *)malloc(sizeof(int) * b);

if (ptr == NULL)
exit(98);

else
return (ptr);

free(ptr);
}
