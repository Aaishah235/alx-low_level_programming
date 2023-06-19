#include <stdio.h>

/**
 * main - Print all numbers of base16 in lowercase
 *
 * Return: 0
 *
 */
int main(void)
{
	int b16 = 0;
	char lwc = 'a';

	while (b16 < 10)
	{
		if (lwc <= 'f')
		{
			putchar(lwc);
			lwc++;
		}
		putchar(b16);
		b16++;
	}
	putchar('\n');
	return (0);
}
