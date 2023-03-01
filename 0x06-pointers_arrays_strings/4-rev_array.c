#include "main.h"

/**
 * reverse_array - rev
 * @a: array
 * @n: its size
 *
 * Description: 'reverse'
 *
 * Return: nada
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int tempo;
	int  temp;

	if (n % 2 == 0)
	{
		while (i < n / 2)
		{
			tempo = a[j];
			temp = a[i];
			a[i] = tempo;
			a[j] = temp;
			i++;
			j--;
		}
	}
	else
	{
		while (i < j / 2)
		{
			tempo = a[j];
			temp = a[i];
			a[i] = tempo;
			a[j] = temp;
			i++;
			j--;
		}
	}
}
