#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints list
 * @h: our input
 * Return: returns a size_t.
 */

size_t print_listint(const listint_t *h)
{
size_t n = 0;
while (h != NULL)
{
printf("%d\n", h->n);
n++;
h = h->next;
}
return (n);
}
