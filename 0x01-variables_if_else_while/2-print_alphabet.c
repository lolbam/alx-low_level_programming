#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * Return: returns 0 always
 */

int main(void)
{
	char p;

	for (p = 'a'; p <= 'z'; p++)
	{
		putchar(p);
	}	
	putchar('\n');
	return (0);
}
