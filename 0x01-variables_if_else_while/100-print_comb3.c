#include <stdio.h>

/**
 * main entry point for the program
 *
 * 
 * */
int main(void)
{
int i; 
int firstNum = '0' + 0;
for (i = 1; i < 10; i++)
{
	if(i > 1 && i < 10)
	{
	putchar(',');
	putchar(' ');
	}
putchar(firstNum);
putchar('0' + i);
}
putchar('\n');
}
