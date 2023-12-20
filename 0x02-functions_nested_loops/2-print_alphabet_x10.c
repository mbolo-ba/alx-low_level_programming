#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 * Return: 0(success)
 *
 */

void print_alphabet_x10(void)
{
	int i, j;

	i = 0;

	while (i < 10)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
	}
}
