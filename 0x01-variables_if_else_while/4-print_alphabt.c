#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, except q and e.
 * Return: returns 0 always
 */

int main(void)
{
	char p;

	for (p = 'a'; p <= 'z'; p++)
	{
		if (p != 'e' && p != 'q')
			putchar(p);
	}
	putchar('\n');
	return (0);
}
