#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _putchar(char c);

int main(void)
{
char str[8] = "_putchar";
int i = 0;
	while (strcmp(str, "\0") != 0)
	{
	_putchar(str[i]);
	i++;	
	}
return (0);
}
int _putchar(char c)
{
	return (write(1, &c, 1));
}
