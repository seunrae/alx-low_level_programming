#include "main.h"
#include <stdio.h>

/**
 * more_numbers - check the code.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int i = 0, j;
	while (i < 10)
	{
	j = 0;
		while (j < 15)
		{
			if (j > 9)
			{
			_putchar(j / 10 + '0');
			}
		_putchar(j % 10 + '0');
		j++;
		}
	_putchar('\n');
	i++;
	}
}
