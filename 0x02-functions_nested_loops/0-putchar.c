#include<stdio.h>
#include "main.h"
/**
 * main - Prints _puchar as a message
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int i, s;

	s = sizeof(str) / sizeof(int);
	for (i = 0; i < s; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
