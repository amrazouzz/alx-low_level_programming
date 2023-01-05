#include "main.h"
/*
 * _sqrt_recursion - returns natural square root
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
