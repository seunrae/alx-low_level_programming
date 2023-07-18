#include <stdio.h>
#include "main.h"
/**
 * print_sign - check the code
 * @n: input parameter
 * Return: Always 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
	putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	putchar('-');
	return (-1);
	}
	else
	{
	putchar(0 + '0');
	return (0);
	}
}
