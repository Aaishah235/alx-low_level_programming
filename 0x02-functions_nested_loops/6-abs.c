#include "main.h"

/**
 * _abs - Compute absolute value of an integer
 * @c: Number to be computed
 * Return: 0
 *
 */
int _abs(int c)
{
	if (c < 0)
	{
		int absvl;

		absvl = c * -1;
		return (absvl);
	}
	return (c);
}
