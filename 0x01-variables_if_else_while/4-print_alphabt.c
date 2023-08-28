#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a[26] = "abcdfghijklmnoprstuvwxyz";
int length = strlen(a);
int i;
for (i = 0; i <= length - 1; i++)
{
putchar(a[i]);
}
putchar('\n');
return (0);
}
