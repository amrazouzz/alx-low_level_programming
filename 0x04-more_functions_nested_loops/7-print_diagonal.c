#include "main.h"
/**
 * print_diagonal - prints diagonal line n times.
 * @n: times diagonal line is printed.
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
			_putchar(47);
		}
	}
	_putchar('\n');
}
