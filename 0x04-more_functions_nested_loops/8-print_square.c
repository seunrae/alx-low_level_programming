#include "main.h"
#include <stdio.h>

/**
 * print_square - check the code.
 * @size: input parameter
 * Return: Always 0.
 */
void print_square(int size)
{
int i = 0, j;
	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
		while (i < size)
		{
		j = 0;
			while (j < size)
			{
			_putchar('#');
			j++;
			}
		_putchar('\n');
		i++;
		}
	}
}
