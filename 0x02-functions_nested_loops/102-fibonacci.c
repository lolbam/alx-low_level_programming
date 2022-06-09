#include <stdio.h>
/**
 * main - prints first 50 fibonacci numbers
 * Return: returns 0
 */

int main(void)
{
	int count;
	unsigned long p = 0, q = 1;
	unsigned long sum;

	for (count = 0; count < 50; count++)
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
