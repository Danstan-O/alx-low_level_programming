#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements in a list
 * list - our struct
 * @h: the input
 * Return: the return of print_list
 */
size_t print_list(const list_t *h)
{
size_t n = 0;

while (h)
{
if (!h)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
n++;
}
return (n);
}
