#include "main.h"

/**
 * void print_line - line
 * @n - variable
 *
 * Description: 'ine'
 *
 * Return: nothing
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
