#include "main.h"
/**
 * print_triangle - prints triangle on terminal
 *@size: size of the triangle
 */


void print_triangle(int size)
{
	int a, p;

	if (size > 0)
	{
		for (p = 0; p < a; p++)
		{
			for (a = 0; a < size; a++)
				_putchar('#');
			_putchar('#');

			if (a == size - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
