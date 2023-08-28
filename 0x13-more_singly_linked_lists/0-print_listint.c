#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *
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
	count++;
	ptr = ptr->next;
	}
return (count);
}
