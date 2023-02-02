#include "main.h"
/**
*set_bit - sets value of a bit to 1
*@n: first parameter
*@index: second parameter
*Return: 1 at success, -1 otherwise
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
