#include "main.h"

/**
 * void print_diagonal - diag
 * @n: variable
 *
 * Description: 'diag'
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i = 0;
	int j;

	while ( i < n)
	{
		j = 0;

		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
