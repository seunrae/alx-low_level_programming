#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - check the code
 * @x: input parameter
 * @y: input parameter
 * Return: product of the power of x
 */
int _pow_recursion(int x, int y)
{
	if (y == 1)
	{
	return (x);
	}
	if (y < 0)
	{
	return (-1);
	}
	if (y == 0)
	{
	return (1);
	}
	else
	{
	y--;
	return (x * _pow_recursion(x, y));
	}
}
