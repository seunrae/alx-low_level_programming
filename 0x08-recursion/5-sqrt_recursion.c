#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _sqrt_recursion_helper - check code
 * @n: input parameter
 * @start: input parameter
 * @end: input parameter
 * Return: -1
 */
int _sqrt_recursion_helper(int n, int start, int end)
{
	if (start <= end)
	{
	int mid = start + (end - start) / 2;
	long square = (long)mid * mid;
		if (square == n)
		{
		return (mid);
		}
		else if (square < n)
		{
		return (_sqrt_recursion_helper(n, mid + 1, end));
		}
		else
		{
		return (_sqrt_recursion_helper(n, start, mid - 1));
		}
	}
return (-1);
}
/**
 * _sqrt_recursion - check the code
 * @n: input parameter
 * Return: the helper function.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
return (_sqrt_recursion_helper(n, 0, n));
}
