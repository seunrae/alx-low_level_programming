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
int x;
va_list args;
va_start(args, n);
	for (i = 0; i < n; i++)
	{
	x = va_arg(args, int);
	printf("%d", x);
		if (i < n - 1 && separator != NULL)
		{
		printf("%s", separator);
		}
	}
va_end(args);
putchar('\n');
}
