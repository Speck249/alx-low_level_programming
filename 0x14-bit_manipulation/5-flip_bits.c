#include "main.h"
/**
*flip_bits - returns number of bits
*@n: first parameter
*@m: second parameter
*Return: bits for flipping through numbers
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int x;
unsigned long int result;

x = 0;
result = n ^ m;

while (result > 0)
{
x += (result & 1);
result >>= 1;
}
return (x);
}
