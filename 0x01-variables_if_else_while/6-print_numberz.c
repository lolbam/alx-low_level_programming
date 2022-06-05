#include <stdio.h>
/**
 * main - prints numbers
 * Return: returns 0 always
 */

int main(void)
{
	int p;

	for (p = 0; p <= 9; p++)
	{
		putchar(p % 10 + '0');
	}
	putchar('\n');
	return (0);
}
