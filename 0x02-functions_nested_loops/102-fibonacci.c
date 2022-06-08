#include <stdio.h>
/**
 * main - prints fibonacci number upto 50
 * Return: returns 0
 */

int main(void)
{
	int c;
	int countto = 50;
	long a = 1;
	long b = 2;

	for (c = 1; c <= c / 2; c++)
	{
		printf("%li %li ", a, b);
		a = a + b;
		b = b + a;
	}
	if (c % 2 == 1)
		printf("%li", a);

	printf("\n");

	return (0);
}
