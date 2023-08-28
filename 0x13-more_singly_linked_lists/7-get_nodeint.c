#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - get a number from a linked list using
 * an index
 * @head: input parameter
 * @index: input parameter
 * Return: value
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *new;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (count == index)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);
			*new = *head;
			return (new);
		}
		count++;
		head = head->next;
	}
	return (NULL);
}
