#include "main.h"
/**
*read_textfile - reads & prints text file to POSIX stdout
*@filename: first parameter
*@letters: second parameter
*Return: number of letters it could read & print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t rd, wr, op;
char *buff;

if (filename == NULL)
return (0);

buff = malloc(sizeof(char) * letters);
if (buff == NULL)
return (0);

rd = read(op, buff, letters);
wr = write(STDOUT_FILENO, buff, rd);
op = open(filename, O_RDONLY);

if (rd == -1 || wr == -1 || op == -1 || wr != rd)
{
free(buff);
return (0);
}

free(buff);
close(op);
return (wr);
}
