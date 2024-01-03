#include "main.h"

/**
 * _strlen - returns length of a string
 * Return: l
 * @s: parameter
 */


int _strlen(char *s)
{
	
	int l = 0, i = 0;

	while (s[i] < '\0')
	{
		l++;
		i++;
	}
	return (l);
}
