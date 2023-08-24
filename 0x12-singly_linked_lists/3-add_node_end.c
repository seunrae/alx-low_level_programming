#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - function that appends a node to the end of a linked list
 * @head: input parameter
 * @str: input parameter
 * Return: added element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;

	if (str == NULL)
		return (NULL);
	current = malloc(sizeof(list_t));
	if (current == NULL)
		return (NULL);
	current->str = strdup(str);
	if (current->str == NULL)
	{
		free(current);
		return (NULL);
	}
	current->len = strlen(str);
	current->next = NULL;
	if (*head == NULL)
		*head = current;
	else
	{
		list_t *newNode = *head;

		while (newNode->next != NULL)
			newNode	= newNode->next;
		newNode->next = current;

	}
	return (current);
}
