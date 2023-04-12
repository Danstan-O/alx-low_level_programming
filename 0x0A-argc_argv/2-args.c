#include <stdio.h>
#include <stdlib.h>

/**
 * main - our main entry point to the program
 * Return: returns a 0
 * @argc: the intake parameter
 * @argv: the intake array
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
