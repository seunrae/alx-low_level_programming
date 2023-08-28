#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that prints the content of a linked list
 * and return its number of elements
 * @h: input parameter
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
const listint_t *ptr = h;
size_t count = 0;
	if (ptr == NULL)
		return (0);
	while (ptr != NULL)
	{
	printf("%d\n", ptr->n);
	count++;
	ptr = ptr->next;
	}
return (count);
}
