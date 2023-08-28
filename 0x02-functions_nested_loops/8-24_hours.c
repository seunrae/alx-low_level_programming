#include <stdio.h>

/**
 * jack_bauer - check the code
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
int i, j;
	for(i = 0; i < 24; i++)
	{
		for(j = 0; j < 60; j++)
		{
		putchar(i / 10 + '0');
		putchar(i % 10 + '0');
		putchar(':');
		putchar(j / 10 + '0');
		putchar(j % 10 + '0');
		putchar('\n');
		}
	}
}
int main(void)
{
jack_bauer();
return (0);
}
