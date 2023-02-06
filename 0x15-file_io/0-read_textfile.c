#include "main.h"
/**
*read_textfile - reads text file & prints to POSIX standard output
*@filename: first parameter
*letters: second parameter
*Return: number of letters it could read & print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t rd, wr, op;
char *buff;

if (!filename)
return (0);

buff = malloc(sizeof(char) * (letters));
if (!buffer)
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
return(wr);
}

