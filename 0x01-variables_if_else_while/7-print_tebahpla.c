#include<stdio.h>

/**
 * main - Prints the alphabet.
 *
 *Return: Always zero
 */

int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
