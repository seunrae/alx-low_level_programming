#include <stdio.h>
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add -  add two numbers
 * @a: input parameter
 * @b: input parameter
 * Return: result of operation on two numbers
 *
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - subtracts two numbers
 * @a: input parameter
 * @b: input parameter
 * Return: result of operation on two numbers
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - multiplies two numbers
 * @a: input parameter
 * @b: input parameter
 * Return: result of operation on two numbers
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - divides two numbers
 * @a: input parameter
 * @b: input parameter
 * Return: result of operation on two numbers
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - returns the result of the remainder of a and b
 * @a: input parameter
 * @b: input parameter
 * Return: result of operation on two numbers
 */
int op_mod(int a, int b)
{
return (a % b);
}
