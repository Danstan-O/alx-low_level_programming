#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - prints all elements in a list
 * @str: - the string input
 * @head: the input
 * Return: the return of print_list
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *newNode;

unsigned int len = 0;
newNode = malloc(sizeof(list_t));

while (str[len])
{
len++;
}
newNode->str = strdup(str);
newNode->len = len;
newNode->next = *head;
if (!newNode)
{
return (NULL);
}
*head = newNode;
return (*head);
}
