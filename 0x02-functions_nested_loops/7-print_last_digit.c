#include "main.h"
/**
 * print_last_digit - prints it
 * @n: the function variable
 *
 * Description: 'prints last'
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int  last = n % 10;

	if (last < 0)
	{
		_putchar (-last  + '0');
		return (-last);
	}
	else
	{	
		_putchar (last + '0');
		return (last);
	}
}
