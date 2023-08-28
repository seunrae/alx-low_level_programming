#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - sums all the values ina linked list and returns the result
 * @head: input parameter
 * Return: result of the sum
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;
	listint_t *new;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		new = head;
		sum += new->n;
		head = head->next;
	}
	return (sum);
}
