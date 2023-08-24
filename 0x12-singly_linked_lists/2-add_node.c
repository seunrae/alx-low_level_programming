#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - function that adds a node to the beginning of a linked list
 * @head: input parameter
 * @str: input parameter
 * Return: added element
 */
list_t *add_node(list_t **head, const char *str)
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
	current->next = *head;
	*head = current;
	return (current);
}
