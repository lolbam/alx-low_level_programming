#include <stdio.h>
/**
 * main - print numbers of base 10
 * Return: returns 0 always
 */

int main(void)
{
	int p;

	for (p = 0; p <= 15; p++)
		printf("%x", p);
	putchar('\n');
	return (0);
}
