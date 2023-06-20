#include <stdio.h>

/**
 * main - Print all numbers of base16 in lowercase
 *
 * Return: 0
 *
 */
int main(void)
{
	int b16;
	char lwc;

	for (b16 = 0; b16 < 10; b16++)
		putchar((b16 % 10) + '0');

	for (lwc = 'a'; lwc <= 'f'; lwc++)
		putchar(lwc);

	putchar('\n');
	return (0);
}
