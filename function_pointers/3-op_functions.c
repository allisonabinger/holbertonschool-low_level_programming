#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of a and b
 * @a: first integer
 * @b: second integer
 * Return: sum of a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns difference of a and b
 * @a: first integer
 * @b: second integer
 * Return: differene of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns a * b
 * @a: first integer
 * @b: second integer
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns a divided by b
 * @a: first integer
 * @b: second integer
 * Return: a divided by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns remainder of a divided by b
 * @a: first integer
 * @b: second integer
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
