#include "main.h"
/**
*read_textfile - reads text file & prints to POSIX standard output
*@filename: first parameter
*letters: second parameter
*Return: number of letters it could read & print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t r, w, o;
char *buffer;

if (*filename == NULL)
return (0);

buffer = malloc(sizeof(char) * letter);
if (buffer == NULL)
return (0);

r = read(o, buffer, letters);
w = write(STDOUT_FILENO, buffer, r);
o = open(filename, O_RDONLY);

if (r == -1 || w == -1 || o == -1 || w != r)
{
free(buffer);
return (0);
}

free(buffer);
close(o);

return(w);
}

