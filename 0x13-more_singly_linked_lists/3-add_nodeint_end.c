#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node to end of linked list
 * and returns the node
 * @head: input parameter
 * @n: input parameter
 * Return: number of elements
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		listint_t *current =  *head;

		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
	return (new);
}
