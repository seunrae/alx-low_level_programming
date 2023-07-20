#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - check the code.
 * @n: input parameter
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int i, j;
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
				{
				_putchar('\\');
				}
				else
				{
				_putchar(' ');
				}
			}
		_putchar('\n');
		}
	}
}
