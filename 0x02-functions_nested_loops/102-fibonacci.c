#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long int firstnum = 1;
unsigned long int secondnum = 2;
unsigned long int next;
int i;
printf("%lu, ", firstnum);
	for (i = 1; i < 50; i++)
	{
	printf("%lu", secondnum);
	next = firstnum + secondnum;
	firstnum = secondnum;
	secondnum = next;
		if (i != 49)
		{
			printf(", ");
		}
	}
printf("\n");
return (0);
}
