#include "main.h"
/*
 * is_prime_number - checks if a number is prime
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int prime1(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime1(a, b + 1));
}

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime1(n, 2));
}
