#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
char *concat;
char *cont;
concat = string_nconcat("Best ", "School !!!", 6);
cont = string_nconcat("Surprice broh", "I wonder whats happening today", 8);
printf("%s\n", cont);
printf("%s\n", concat);
free(concat);
free(cont);
return (0);
}
