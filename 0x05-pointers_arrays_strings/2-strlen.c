#include "main.h"

/**
 * _strlen - returns length of a string
 * Return: l
 * @s: parameter
 */


int _strlen(char *s)
{
	int i, l = 0;

	for (i = s[0]; i < '\0'; i++)
	{
		l++;
	}
	return (l);
}
