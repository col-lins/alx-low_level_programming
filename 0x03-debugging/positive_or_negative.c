#include <stdio.h> "main.h"

/**
 * main - Determines if a number is positive, negative or zero.
 *
 * @n : integer to be checked.
 */
void positive_or_negative (int i)
{
	int n;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
