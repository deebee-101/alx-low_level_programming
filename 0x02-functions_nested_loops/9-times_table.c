#include "main.h"

/**
 * times_table - times 9
 *
 * @void: nothing
 *
 * Description: 'prints times table'
 *
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i =0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int times = i * j;

			if (times > 10)
			{
				int first = times / 10;
				_putchar (first + '0');
				_putchar (times % 10 + '0');
				_putchar (',');
				_putchar (' ');
			}
			else
			{
				_putchar (times + '0');
				_putchar (',');
				_putchar (' ');
				_putchar (' ');
			}
		}
		_putchar ('\n');
	}
}
 
