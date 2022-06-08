#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @r: is the digit
 * Return: returns the value of the last digit
 */
int print_last_digit(int r)
{
	int p;
	
	p = r % 10;

	if (p < 0)
		p *= -1;
	_putchar(p + '0');


	return (p);

}
