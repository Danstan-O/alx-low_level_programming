#include <stdio.h>
#include "main.h"

/**
 * read_textfile - our major entry point
 * Return: returns the ssize_t
 * @filename: the name of our file
 * @letters: our second input
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

int fb;
ssize_t n, nr;
char *fo;

if (!filename)
{
return (0);
}


fb = open(filename, O_RDONLY);
if (fb == -1)
{
return (0);
}

fo = malloc(sizeof(char) * (letters));

if (!fo)
{
return (0);
}

n = read(fb, fo, letters);
nr = write(STDOUT_FILENO, fo, n);

close(fb);
free(fo);
return (nr);
}
