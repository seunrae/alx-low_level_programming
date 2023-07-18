#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - check the code
 * @n: input parameter
 * Return: Always 0.
 */
void print_to_98(int n)
{
int i = 0;
	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
			printf("%d, ", i);
			}
			else
			{
			printf("%d", i);
			}
		}
	printf("\n");
	}
	else if (n == 98)
	{
	printf("%d\n", 98);
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
                        {
                        printf("%d, ", i);
                        }
			else
                        {
                        printf("%d", i);
                        }
		}
	printf("\n");
	}
}
