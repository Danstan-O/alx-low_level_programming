#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - adds a node
 * @head: our input
 * Return: returns a size_t.
 */

void free_listint2(listint_t **head)
{
listint_t *temp;



while (*head)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
*head = NULL;
}
