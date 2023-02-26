#include "main.h"

/**
 * void print_numbers - print
 * @void
 *
 * Description: 'print'
 *
 * Return: nothing
 */

void print_numbers(void)
{
	int index = 0;

	while (index < 10)
	{
		_putchar(index +'0');
		index++;
	}
	_putchar('\n'); 
}


