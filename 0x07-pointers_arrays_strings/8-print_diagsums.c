#include "main.h"

/**
 * print_diagsums - sum diag
 * @a: aray
 * @size: its size
 *
 * Description: 'sum size'
 *
 * Return: nada
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j = 0;
	int sum1 = 0;
	int sum2 = 0;
	int length = size * size;

	for (i = 0; i < length; i += size + 1)
	{
		sum1 += a[i];
	}
	for (j = size - 1; j < length - 1; j += size - 1)
	{
		sum2 += a[j];
	}
	printf("%d, %d\n", sum1, sum2);
}
