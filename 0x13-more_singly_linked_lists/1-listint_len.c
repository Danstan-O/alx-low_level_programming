#include "lists.h"

/**
 * listint_len - prints list
 * @h: our input
 * Return: returns a size_t.
 */

size_t listint_len(const listint_t *h)
{
size_t n = 0;
while (h != NULL)
{
n++;
h = h->next;
}
return (n);
}
