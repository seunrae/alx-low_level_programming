#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int i = 0, j;
	while (i <= 10)
	{
	j = 0;
		while (j < 15)
		{
		_putchar(j + '0');
		j++;
		}
	_putchar('\n');
	i++;
	}
_putchar('\n');
}
