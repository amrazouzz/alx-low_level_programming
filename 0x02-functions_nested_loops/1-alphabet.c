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

	for (str = 97; str <= 122; str++)
	{
		_putchar(str);
	}
	_putchar('\n');
}
