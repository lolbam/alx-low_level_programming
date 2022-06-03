#include <stdio.h>

/**
 *main - prints the size of various types on the computer
 *Return: returns 0
 */
int main(void)
{
	int i;
	long int l;
	long long int ll;
	char c;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(ll));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));

	return (0);

}
