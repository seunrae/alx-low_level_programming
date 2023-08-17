#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sums all the parameters in a variadic function
 * @n: input parameter
 * Return: the total sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int s = 0;
va_list args;
va_start(args, n);
	for (i = 0; i < n; i++)
	{
	int x = va_arg(args, int);

	s += x;
	}
return (s);
}
