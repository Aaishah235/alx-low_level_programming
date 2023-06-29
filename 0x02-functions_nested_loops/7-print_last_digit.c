#include "main.h"

/**
 * print_last_digit - Return the value of the last digit
 * @b: Last digit to be returned
 * Return: 0
 *
 */

int print_last_digit(int b)
{

	int lastd;

		lastd = b % 10;

	if (lastd < 0)
	{
		lastd = lastd * -1;
	}
	_putchar(lastd + '0');
	return (lastd);
}
