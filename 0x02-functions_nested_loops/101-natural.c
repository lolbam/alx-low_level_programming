#include <stdio.h>
/**
 * main - prints multiples of 3 and 5
 *
 * Return: always returns 0
 */

int main(void)
{
	int i, r = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			r = r + i;
	}

	printf("%d\n", r);

	return (0);
}
