#include<stdio.h>
#include "main.h"
/**
 * main - Prints _puchar as a message
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	int str;
	int s = 28;

	for (str = 97; str < s; str++)
	{
		_putchar(str);
	}
	_putchar('\n');
}
