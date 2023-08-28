#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: input parameter
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *new;

	if (head == NULL)
		return;
	new = *head;
	while (new != NULL)
	{
		listint_t *current = new;

		new = new->next;
		free(current);
	}
*head = NULL;
}
