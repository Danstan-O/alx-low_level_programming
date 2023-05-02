#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint_end - adds a node
 * @head: our input
 * @n: our input variable
 * Return: returns a size_t.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *ptr, *temp;
ptr = *head;
temp = (listint_t *)malloc(sizeof(listint_t));

if (!temp)
{
return (NULL);
}

temp->n = n;
temp->next = NULL;

if (*head == NULL)
{
*head = temp;
return (temp);
}

while (ptr->next != NULL)
{
ptr = ptr->next;
}

ptr->next = temp;
return (*head);
}
