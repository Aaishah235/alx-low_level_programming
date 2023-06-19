#include <stdio.h>

/**
 * main - Print all single digit numbers in base 10 without using print
 *
 * Return: 0
 *
 */
int main(void)
{
	int numb;

	for (numb = 0; numb < 10; numb++)
	{
		putchar(numb + '0');
	}
	putchar('\n');
	return (0);
}
