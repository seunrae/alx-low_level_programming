#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints all the numbers in a variadic function
 * @separator: input parameter
 * @n: input parameter
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
va_start(args, n);
	if (separator == NULL)
	{
	return;
	}
	for (i = 0; i < n; i++)
	{
	int x = va_arg(args, int);
		if (i > 2)
		{
		printf("%d", x);
		}
		else
		{
		printf("%d%s", x, separator);
		}
	}
va_end(args);
putchar('\n');
}
