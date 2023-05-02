#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_listint - adds a node
 * @head: our input
 * Return: returns a size_t.
 */

int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;

while (temp)
{
sum += temp->n;
temp = temp->next;
}

return (sum);

}
