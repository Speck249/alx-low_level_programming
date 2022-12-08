#include <stdio.h>

/*
 * Entry point - main
 * printf - prints result to console
 * sizeof() - returns memory size in byte
 * return - indicates execution status (0 - Success & 1 - Failure)
 */

int main () {

printf(“Size of a char: %d byte(s)\n”, sizeof(char));
printf(“Size of an int: %d byte(s)\n”, sizeof(int));
printf(“Size of a long int: %d byte(s)\n”, sizeof(long int));
printf(“Size of a long long int: %d byte(s)\n”, sizeof(long long int));
printf(“Size of a float: %d bytes(s)\n”, sizeof(float));

return 0;
}

