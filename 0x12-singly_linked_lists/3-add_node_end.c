#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - prints all elements in a list
 * @str: - the string input
 * @head: the input
 * Return: the return of print_list
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *endNode;
list_t *temp = *head;

unsigned int len = 0;
endNode = malloc(sizeof(list_t));

while (str[len])
{
len++;
}
endNode->str = strdup(str);
endNode->len = len;
endNode->next = NULL;
if (!endNode)
{
return (NULL);
}
if (*head == NULL)
{
*head = endNode;
return (*head);
}

while (temp->next)
{
temp = temp->next;
}
temp->next = endNode;
return (endNode);
}
