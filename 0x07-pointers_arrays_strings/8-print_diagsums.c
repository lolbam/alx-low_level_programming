#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -  prints the sum of the two diagonals
 *                   of a square matrix of integers.
 * @a: matrix
 * @size: size of matrix rows and columns
 *
 */
void print_diagsums(int *a, int size)
{
	int i, s = 0, sum = 0, sum1 = 0;

	s = (size * size) - 1;
	for (i = 0; i <= s; i = i + (size + 1))
	{
		sum = sum + a[i];
	}
	for (i = (size - 1); i < s; i = i + (size - 1))
	{
		sum1 = sum1 + a[i];
	}
	printf("%d, %d\n", sum, sum1);
}
