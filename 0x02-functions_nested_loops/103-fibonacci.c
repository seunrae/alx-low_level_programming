#include <stdio.h>

/**
 * main -  main function
 * Return: 0
 */
int main(void)
{
int numlimit = 4000000;
int firstnum = 1;
int secondnum = 2;
int next;
int sum = 2;

	while (next <= numlimit)
	{
	next = firstnum + secondnum;
		if (next % 2 == 0)
		{
		sum = sum + next;
		}
	firstnum = secondnum;
	secondnum = next;
	}
printf("%d\n", sum);
return (0);
}
