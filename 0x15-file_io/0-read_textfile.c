#include "main.h"
#include <stdlib.h>
/**
*read_textfile - reads & prints text file to POSIX stdout
*@filename: first parameter
*@letters: second parameter
*Return: number of letters it could read & print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t rd, wr;
int op;
char *buff;

if (filename == NULL)
return (0);

op = open(filename, O_RDONLY);

if (op == -1)
return (0);

buff = malloc(sizeof(char) * letters);
if (buff == NULL)
return (0);

rd = read(op, buff, letters);
wr = write(STDOUT_FILENO, buff, rd);

close (op);
free(buff);
return (wr);
}
