#include <stdio.h>
#include "main.h"

/**
 * create_file - our major entry point
 * Return: returns the an integer
 * @filename: the name of our file
 * @text_content: our second input
 *
 */

int create_file(const char *filename, char *text_content)
{
int fb, i, rwr;

if (!filename)
{
return (-1);
}


fb = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0060);
if (fb == -1)
{
return (-1);
}

if (!text_content)
{
text_content = "";
}

for (i = 0; text_content[i]; i++)
;

rwr = write(fb, text_content, i);

if (rwr == -1)
{
return (-1);
}

close(fb);
return (1);
}
