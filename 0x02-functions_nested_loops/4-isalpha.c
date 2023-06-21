#include "main.h"

/**
 * _isalpha - Check for letter, lowercase and uppercase
 * @c: Check for the character
 * Return: 1 for letter, lowercase and uppercase
 *
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
