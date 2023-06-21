#include "main.h"

/**
 * int _islower.c - Check for lowercase character
 *
 * Return: 1 for lowercase and 0 for others
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
