#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings from variadic functions
 * @separator: input parameter
 * @n: input parameter
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
char *x;
unsigned int i;
va_start(args, n);
	if (separator == NULL)
	{
	return;
	}
	for (i = 0; i < n; i++)
	{
	x = va_arg(args, char *);
		if (x == NULL)
		{
		printf("(nil)");
		}
		else
		{
		printf("%s", x);
		}
		if (i != (n - 1) && separator != NULL)
		{
		printf("%s", separator);
		}
	}
printf("\n");
va_end(args);
}
