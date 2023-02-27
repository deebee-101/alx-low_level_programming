#include "main.h"
#include <string.h>

/**
 * print_rev - reverse
 * @s: parameter
 *
 * Description: 'reverse'
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i = strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
