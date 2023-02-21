#include "main.h"

/**
 * main - use putchar
 *
 *Description: 'function'
 *
 * Return: On success 0
 */
int main(void)
{
	char to_print[8] = "_putchar";
	int index = 0;

	while (index < 8)
	{
		_putchar (to_print[index]);
		index++;
	}
	_putchar ('\n');
	return (0);
}
