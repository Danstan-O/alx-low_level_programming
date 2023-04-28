#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * list_len - prints all elements in a list
 * list - our struct
 * @h: the input
 * Return: the return of print_list
 */

size_t list_len(const list_t *h)
{
size_t n = 0;
while (h != NULL)
{
n++;
h = h->next;
}
return (n);
}
