#include <stdio.h>
#include <ctype.h>

/**
 * main - print alphabet in different cases
 * Return: 0(success)
 *
 */
int main(void)
{
	int i;
	int j;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	for (j = 65; j <= 90; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
