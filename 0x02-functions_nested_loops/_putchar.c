#include <unistd.h>

/**
 * _putchar - Program that print _putchar followed by a new line
 *
 * Return: 1
 *
 */
int _putchar(char c)
{

	return (write(1, &c, 1));

}
