#include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
int i;
	for (i = 0; i < n; i++)
	{
	printf("%d\n", *(a + i));
	}

}
