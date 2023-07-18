#include <unistd.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
void print_alphabet(void)
{
char a = 'a';
	while (a <= 'z')
	{
	_putchar(a);
	a++;	
	}

}
