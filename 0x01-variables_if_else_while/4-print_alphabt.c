#include <stdio.h>

/**
 * main - Print all alphabets in lowercase except q and e
 *
 * Return: Always (0)
 *
 */
int main(void)
{
	char lqe = 'a';

	while (lqe <= 'z')
	{
		if (lqe != 'e' && lqe != 'q')
		{
		putchar(lqe);
		lqe++;
		}
	}
	putchar('\n');
	return (0);
}
