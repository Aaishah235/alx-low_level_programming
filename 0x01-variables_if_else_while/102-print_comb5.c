#include <stdio.h>

/**
 * main - Print all possible combinations of two two-digit numbers ranging from 0-99
 *
 * Return: 0
 *
 */
int main(void)
{
	int dn1, dn2;

	for (dn1 = 0; dn1 <= 98; dn1++)
	{
		for (dn2 = dn1 + 1; dn2 <= 99; dn2++)
		{
			putchar((dn1 / 10) + '0');
			putchar((dn1 % 10) + '0');
			putchar(' ');
			putchar((dn2 / 10) + '0');
			putchar((dn2 % 10) + '0');

			if (dn1 == 98 && dn2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
