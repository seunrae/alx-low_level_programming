#include "main.h"
#include <stdio.h>

/**
 * more_numbers - check the code.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int i = 0, j, k;
int firstnum, secondnum;
	while (i <= 10)
	{
	j = 0;
	k = 10;
		while (j < 10)
		{
		_putchar(j + '0');
		j++;
		}
		while (k < 15)
		{
		firstnum = k / 10;
		secondnum = k % 10;
		_putchar(firstnum + '0');
		_putchar(secondnum + '0');
		k++;
		}
	i++;
	}
}
