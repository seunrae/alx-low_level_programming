#include <stdio.h>
#include "dog.h"
/**
 *
 *
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	printf("Name: %s\n", d->name ? d->name : "(nil)");
		if (d->age >= 0)
		{
		printf("Age: %f\n", d->age);
		}
		else
		{
		printf("Age: (nil)\n");
		}
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
return;
}
