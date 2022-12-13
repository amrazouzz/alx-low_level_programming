#include<stdio.h>
#include "main.h"
/**
 * main - Prints _puchar as a message
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	int str[] = {97, ..., 122 };
	int i,s;

	s = sizeof(str) / sizeof(int);
	for (i = 0; i < s; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
