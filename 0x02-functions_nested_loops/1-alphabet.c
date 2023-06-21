#include "main.h"

/**
 * print_alphabet - Print alphabet in lowercase
 *
 * Return: o
 *
 */
void print_alphabet(void)
{
	int alph;

	for (alph = 11; alph <= 36; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
