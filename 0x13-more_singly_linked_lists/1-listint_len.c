#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: input parameter
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t count = 0;

	if (ptr == NULL)
		return (0);
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
