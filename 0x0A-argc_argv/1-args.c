#include <stdio.h>
#include <stdlib.h>

/**
 * main - the major entry point
 * @argc: the integer param
 * @argv: an array of arguments
 * Return: returns a 0
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
printf("%d\n", argc - 1);
return (0);
}
