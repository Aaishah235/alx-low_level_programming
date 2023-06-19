#include <stdio.h>

/**
 * main - Print the lowercase alphabet in reverse
 *
 * Return: 0
 *
 */
int main(void)
{
	char rvs = 'z';

	while (rvs >= 'a')
	{
		putchar(rvs);
		rvs--;
	}
	putchar('\n');
	return (0);
}
