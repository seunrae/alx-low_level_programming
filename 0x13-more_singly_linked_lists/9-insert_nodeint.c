#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position.
 * @head: input parameter
 * @idx: input parameter
 * @n: input parameter
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int i;

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		listint_t *current = *head;

		for (i = 0; i < idx - 1; i++)
		{
			if (current == NULL)
			{
				free(new);
				return (NULL);
			}
			current = current->next;
		}
		if (current == NULL)
		{
			free(new);
			return (NULL);
		}

		new->next = current->next;
		current->next = new;
	}
	return (new);
}
