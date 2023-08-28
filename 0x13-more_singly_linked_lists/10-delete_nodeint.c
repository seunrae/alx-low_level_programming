#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at
 * index of a listint_t linked list.
 * @head: input parameter
 * @index: input parameter
 * Return: the address of the new node, or NULL if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	else
	{
		listint_t *current = *head;
		listint_t *previous = NULL;

		for (i = 0; i < index; i++)
		{
			if (current == NULL)
			{
				return (-1);
			}
			previous = current;
			current = current->next;
		}
		if (current == NULL)
		{
			return (-1);
		}

		previous->next = current->next;
		free(current);
		return (1);
	}
}
