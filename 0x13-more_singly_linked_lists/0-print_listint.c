#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_listint - function that prints a linked list
 * and returns its numbers of elements
 * @h: input parameter
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
const listint_t *ptr = h;
size_t count = 0;
	if (ptr == NULL)
		return (-1);
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
return (count);
}
