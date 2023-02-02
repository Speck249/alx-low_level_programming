#include "main.h"
/**
*set_bit - sets value of a bit to 1
*@b: parameter
*Return: Always 0 (Success)
*/

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int result;

if (index >= 64)
return (-1);

result = 1 << index;
*n = (*n | result);

return (1);
}
