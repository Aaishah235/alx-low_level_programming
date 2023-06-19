#include <stdio.h>

/**
 * main - Print all single digit number of base 10 starting from 0
 *
 * Return: 0
 *
 */
int main(void)
{
	int bas;

	for (bas = 0; bas <= 10; bas++)
	{
		printf("%d", bas);
	}
	putchar('\n');
	return (0);
}
