#include "main.h"
#include <ctype.h>

/**
 * int _islower(int c
 *
 * Description: 'is it lower'
 *
 * Return: 1 if lower o if not
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

