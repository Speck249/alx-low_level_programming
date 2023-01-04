#include "main.h"

int _prime_number(int, int);
/**
*is_prime_number - recursive function
*@n: parameter
*Return: returns number
*/

int is_prime_number(int n)
{
return (_prime_number(n, 1));
}

/**
*_prime_number - checks for a prime number
*@n: first parameter
*@x: second parameter
*Return: value for prime number
*/

int _prime_number(int n, int x)
{
if (n <= 1)
return (0);

if (n % x == 0 && x > 1)
return (0);

if ((n / x) < x)
return (1);

return (_prime_number(n, x + 1));
}
