#include <stdio.h>
/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: always (0)
 *
 */
int main(void)
{
	int n;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
