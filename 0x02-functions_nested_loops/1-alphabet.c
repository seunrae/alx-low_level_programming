#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char a = 'a';
	while (a <= 'z')
	{
	_putchar(a);
	a++;
	}
_putchar('\n');
}
