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
                                	printf("%3d", result);
                                	}
                                	else
                                	{
                                	printf("%3d,", result);
                                	}
                        	}
                	}
        	printf("\n");
        	}
	}
	
}
int main(void)
{
    print_times_table(15);
    /**
    _putchar('\n');
    print_times_table(5);
    _putchar('\n');
    print_times_table(98);
    _putchar('\n');
    print_times_table(12);
  */  
    return (0);
}
