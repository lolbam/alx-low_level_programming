#include "main.h"
/**
 * print_diagonal - draws a square on the terminal
 * @size: is the size of square
 */
void print_square(int size)
{
	int a, p;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (p = 0; p < size; p++)
				_putchar('#');

			if (a == size - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
