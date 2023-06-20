#include <stdio.h>

/**
 * main - Print all possible combinations of two two-digit numbers ranging from 0-99
 *
 * Return: 0
 *
 */
int main(void)
{
	int dgn1, dgn2;

	for (dgn1 = 0; dgn1 <= 98; dgn1++)
	{
		for (dgn2 = dgn1 + 1; dgn2 <= 99; dgn2++)
		{
			putchar((dgn1 / 10) + '0');
			putchar((dgn1 % 10) + '0');
			putchar(' ');
			putchar((dgn2 / 10) + '0');
			putchar((dgn2 % 10) + '0');

			if (dgn1 == 98 && dgn2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
