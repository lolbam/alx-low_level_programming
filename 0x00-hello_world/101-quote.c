#include <stdio.h>
#include <unistd.h>

/**
 * main - This function prints out the string to the standard error
 * and that piece of art is useful" - Dora Korpar, 2015-10-19
 * Return: the function returns 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
