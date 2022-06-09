#include "main.h"
/**
 * print_diagonal - draws a diagonal on the terminal
 * @n: is the length of diagonals
 */
void print_diagonal(int n)
{
	int a, p;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (p = 0; p < a; p++)
				_putchar(' ');
			_putchar('\\');

			if (a == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
