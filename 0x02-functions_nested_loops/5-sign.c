#include "main.h"

/**
 * print_sign - print the sign
 * @n: parameter for input
 *
 * Description: 'check the sign'
 *
 * Return: 1, 0, or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar ('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar (0 + '0');
	}
	else
	{
		return (-1);
		_putchar ('-');
	}
}
