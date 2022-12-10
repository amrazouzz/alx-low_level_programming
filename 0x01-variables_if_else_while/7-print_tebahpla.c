#include<stdio.h>

/**
 * main - Prints the alphabet.
 *
 *Return: Always zero
 */

int main(void)
{
	char a[26] = "abcdefghijklmnopqrstuvwxyz";

	int i;

	for (i = 26; i >= 0; i--)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return (0);
}
