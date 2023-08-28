#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: input parameter
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
	listint_t *new = head;

	head = head->next;
	free(new);
	}
}
