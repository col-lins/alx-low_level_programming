#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	else
	{
		printf("%d is zero", n);
	}
	return (0);
}
