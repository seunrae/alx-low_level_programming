#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - removes the head of a linked list and returns its value
 * @head: input parameter
 * Return: value of the head of the node
 */
int pop_listint(listint_t **head)
{
	listint_t *new = *head;
	int num;

	if (*head == NULL)
		return (0);
	num = new->n;
	*head = (*head)->next;
	free(new);
	return (num);
}
