#include<stdio.h>
#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase.
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	int str, i;
	i = 0;

	while (i < 10)
	{
		for (str = 97; str <= 122; str++)
		{
			_putchar(str);
		}
		i++;
	}
	_putchar('\n');
}
