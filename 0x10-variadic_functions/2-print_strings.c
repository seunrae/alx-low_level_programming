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
unsigned int i;
va_list args;
va_start(args, n);
	if (separator == NULL)
	{
	return;
	}
	for (i = 0; i < n; i++)
	{
	char *x = va_arg(args, char*);
		if (x == NULL)
		{
		puts("(nil)");
		}
		while (*x != '\0')
		{
		putchar(*x);
		x++;
		}
		while (*separator != '\0')
		{
		putchar(*separator);
		separator++;
		}
	}
putchar('\n');
}
