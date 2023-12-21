#include <stdlib.h>
#include <time.h>

/**
 * main - tests an input with positive_or_negative()
 * Return: 0(success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	positive_or_negative(0);
	return (0);
}
