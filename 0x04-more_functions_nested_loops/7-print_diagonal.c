#include "main.h"
/**
 * print_line - prints a straight line.
 * @n: times straight line is printed.
 * Return: always no retrun.
 */

void print_line(int n)
{
	int i;
	
	if (n != 0 && n !< 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(95);
		}
	}
	_putchar('\n');
}
