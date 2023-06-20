#include <stdio.h>

/**
 * main - Print all possible combinations of single-digit numbers
 *
 * Return: 0
 *
 */
int main(void)
{
	int comb;

	for (comb = 0; comb <= 9; comb++)
	{
		putchar((comb % 10) + '0');
		if (comb == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
