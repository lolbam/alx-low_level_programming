#include "main.h"
/**
 * print_numbers - prints numbers 0-9 followded by a new line
 * @n: is the number printed
 * Return: returns 0
 */
void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		_putchar (n);
	_putchar ('\n');
}
