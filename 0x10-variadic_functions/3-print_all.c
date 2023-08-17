#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - print everthing in a variadic function
 * @format: input parameter
 */
void print_all(const char * const format, ...)
{
char *sep = "", c, *s;
va_list args;
int i, index = 0;
float f;
va_start(args, format);
	while (format[index])
	{
		if (format[index] == 'c')
		{
		c = va_arg(args, int);
		printf("%s%c", sep, c);
		}
		else if (format[index] == 'i')
		{
		i = va_arg(args, int);
		printf("%s%d", sep, i);
		}
		else if (format[index] == 'f')
		{
		f = va_arg(args, double);
		printf("%s%f", sep, f);
		}
		else if (format[index] == 's')
		{
		s = va_arg(args, char *);
		if (s == NULL)
		{
		printf("%s(nil)", sep);
		}
		else
		{
		printf("%s%s", sep, s);
		}
		}
	sep = ", ";
	index++;
	}
va_end(args);
printf("\n");
}
