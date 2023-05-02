#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - adds a node
 * @head: our input
 * Return: returns a size_t.
 */

int pop_listint(listint_t **head)
{
listint_t *temp;
int n;

if (!head || !*head)
{
return (0);
}
n = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (n);
}
