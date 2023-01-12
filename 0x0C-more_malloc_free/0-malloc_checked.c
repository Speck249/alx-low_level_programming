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

ptr = (int *)malloc(sizeof(int));

if (ptr == NULL)
free(ptr);
exit(98);

else
return (ptr);

free(ptr);
}
