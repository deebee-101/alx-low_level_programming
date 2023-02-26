#include "main.h"

/**
 * void print_most_numbers - some
 * @void: nothing
 *
 * Description: 'some'
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
	int i = 0;

	while(i < 10)
	{
		if ( i == 2 || i == 4)
		{
			i++;
			continue;
		}
		else
		{
			_putchar(i + '0');
			i++;
		}
	}
	_putchar('\n');
}
