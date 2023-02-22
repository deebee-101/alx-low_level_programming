#include "main.h"
#include <ctype.h>

/**
 * _isalpha - is it alpha
 * @c: this is the input
 *
 * Description: finds alpha
 *
 * Return: success 1 not 0
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
		return (0);
}
