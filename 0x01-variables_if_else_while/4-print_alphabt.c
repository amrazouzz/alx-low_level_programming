#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * main - Prints the alphabet.
 *
 *Return: Always zero
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(a[i]);
		}
	}
	putchar('\n');
	return (0);
}
