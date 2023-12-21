#include "main.h"
#include <stdlib.h>

/**
 * print_to_98 - prints from entered digit till 98
 * @n: parameter
 * Return: 0(success)
 *
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar('0' + i);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			_putchar('0' + i);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
