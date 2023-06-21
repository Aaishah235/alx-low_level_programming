#include <unistd.h>

/**
 * _putchar - Write the characterc to stdout
 * @C: The character to print
 * Return: 1
 *
 */
int _putchar(char c)
{

	return (write(1, &c, 1));

}
