#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint - adds a node
 * @head: our input
 * @n: our input variable
 * Return: returns a size_t.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *ptr = malloc(sizeof(listint_t));
ptr->n = n;
ptr->next = NULL;

ptr->next = *head;
*head = ptr;
return (*head);
}
