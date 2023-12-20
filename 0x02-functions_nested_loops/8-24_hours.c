#include "main.h"

/**
 * jack_bauer - prints change in time per minute
 * Return: nothing(success)
 *
 */

void jack_bauer(void)
{
	int i = 48, j, k, l, p;

	while (i < 52)
	{
		j = 48;
		while (j < 58)
		{
			k = 48;
			while (k < 1440)
			{
				l = 48;
				while (l < 54)
				{
					p = 48;
					while (p < 58)
					{
						_putchar(p);
						p++;
					}
					_putchar(l);
					l++;
				}
				_putchar(':');
				k++;
			}
			_putchar(j);
			j++;
		}
		_putchar(i);
		i++;
	}
}
