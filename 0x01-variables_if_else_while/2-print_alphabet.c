#include <stdio.h>

/**
 * main - Print alphabet in lowercase
 *
 * Return: Always (0)
 *
 */
int main(void)
{
	char lwc = 'a';

	while (lwc <= 'z')
	{
		putchar(lwc);
		lwc++;
	}
	putchar('\n');
	return (0);
}
