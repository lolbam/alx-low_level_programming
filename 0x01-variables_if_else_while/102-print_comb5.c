#include <stdio.h>
/**
 * main - prints numbers 00 to 99 with commas
 * Return: returns 0 always
 */

int main(void)
{
	int p;

	for (p = 0; p <= 99; p++)
	{
		putchar(p / 10 + '0');
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
