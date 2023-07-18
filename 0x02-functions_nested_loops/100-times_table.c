#include "main.h"
#include <stdio.h>
/**
 * print_times_table - check the code.
 * @n: input parameter
 * Return: Always 0.
 */
void print_times_table(int n)
{
int i, j, result;
	if (n > 15)
	{
	}
	else
	{
		for (i = 0; i <= n; i++)
        	{
                	for (j = 0; j <= n; j++)
                	{
                	result = i * j;
                        	if (j == 0)
                        	{
                        	printf("%d,", result);
                        	}
                        	else
                        	{
                                	if (j == n)
                                	{
                                	printf("%4d", result);
                                	}
                                	else
                                	{
                                	printf("%4d,", result);
                                	}
                        	}
                	}
        	printf("\n");
        	}
	}
	
}
