#include "main.h"
#include <ctype.h>

/**
 * _islower - find lower
 * @c - input parameter
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

