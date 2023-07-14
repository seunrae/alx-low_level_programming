#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i; 
int firstNum = '0' + 0;
for (i = 1; i < 10; i++)
{
	if (i > 1 && i < 10)
	{
	putchar(',');
	putchar(' ');
	}
putchar(firstNum);
putchar('0' + i);
}
putchar('\n');
return (0);
}
