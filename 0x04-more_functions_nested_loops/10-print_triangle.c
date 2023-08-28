#include "main.h"
#include <stdio.h>

/**
 * print_triangle - check the code.
 * @size: input parameter
 * Return: Always 0.
 */
void print_triangle(int size)
{
int i = 1, j, hash;
	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
		while (i <= size)
		{
		j = size - i;
		hash = 1;
			while (j >= 1)
			{
			_putchar(' ');
			j--;
			}
			while (hash <= i)
			{
			_putchar('#');
			hash++;
			}
		_putchar('\n');
		i++;
		}
	}
}
