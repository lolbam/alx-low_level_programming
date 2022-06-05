#include <stdio.h>
/**
 * main - prints numbers with commas
 * Return: returns 0 always
 */

int main(void)
{
	int p;

	for (p = 0; p <= 9; p++)
	{
		putchar(p % 10 + '0');
		if (p != 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
