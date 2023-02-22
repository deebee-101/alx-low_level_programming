#include "main.h"
#include <ctype.h>

/**
 * _islower - find lowe
 *
 * Description: 'is it lower'
 *
 * Return: 1 if lower 0 if not
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
		return (0);
}

