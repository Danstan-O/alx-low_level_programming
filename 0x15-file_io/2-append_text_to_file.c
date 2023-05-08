#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - our major entry point
 * Return: returns an integer
 * @filename: the name of our file
 * @text_content: our second input
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fb, i, r;

if (!filename)
{
return (-1);
}


fb = open(filename, O_WRONLY | O_APPEND);

if (fb == -1)
{
return (-1);
}

if (text_content)
{
for (i = 0; text_content[i]; i++)
;

r = write(fb, text_content, i);

if (r == -1)
{
return (-1);
}

}

close(fb);
return (1);
}
