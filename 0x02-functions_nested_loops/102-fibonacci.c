#include <stdio.h>
/**
 * main - prints first 50 fibonacci numbers
 * Return: returns 0
 */

int main(void)
{
	int count;
	unsigned long p = 1, q = 2;
	unsigned sum;

	for (count = 1; count < 50; count++)
	{
		sum = p + q;
		printf("%lu", sum);

		p = q;
		q = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
