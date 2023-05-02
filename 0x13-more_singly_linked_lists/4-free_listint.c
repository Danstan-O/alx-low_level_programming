#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - adds a node
 * @head: our input
 * Return: returns a size_t.
 */

void free_listint(listint_t *head)
{
listint_t *temp;
while (head)
{
temp = head->next;
free(head);
head = temp;
}

}
