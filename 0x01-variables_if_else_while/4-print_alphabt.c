#include <stdio.h>

/**
 * main - Print all alphabets in lowercase except q and e
 *
 * Return: Always (0)
 *
 */
int main(void)
{
	char lqe;

	for (lqe = 'a'; lqe <= 'z'; lqe++)
	{
		if (lqe != 'e' && lqe != 'q')
		{
		putchar(lqe);
		}
	}
	putchar('\n');
	return (0);
}
