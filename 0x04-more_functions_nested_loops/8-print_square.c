#include "main.h"

/**
 * void print_square - square
 * @size: square size
 *
 * Description: prints square
 *
 * Return: nothing
 */

void print_square(int size)
{
	int i = 0;
	int j;

	while (i < size)
	{
		j = 0;

		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
