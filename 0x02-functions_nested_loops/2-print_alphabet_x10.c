#include "main.h"
/**
 * main - enter
 *
 * Desription: 'print 10 alpha'
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int index = 0;
	int i;

	while (index < 10)
	{
		i = 0;

		while (i < 26)
		{
			_putchar (alpha[i]);
			i++;
		}
		_putchar ('\n');
		index++;
	}
}

