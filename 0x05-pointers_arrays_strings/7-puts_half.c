#include "main.h"
#include <string.h>

/**
 * puts_half - half
 * @str: variable
 *
 * Description: 'half'
 *
 * Return: void
 */

void puts_half(char *str)
{
	int k = strlen(str);
	int j = k / 2;
	int n = (k - 1) / 2;

	if (k % 2 == 0)
	{
		while (str[j] != '\0')
		{
			_putchar(str[j]);
			j++;
		}
	}
	else
	{
		while  (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
