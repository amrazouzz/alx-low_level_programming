#include<stdio.h>

/**
 * main - Prints the alphabet.
 *
 *Return: Always zero
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		puchar(i);
	}
	putchar('\n');
	return (0);
}
