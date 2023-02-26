#include <ctype.h>
#include "main.h"

/**
 * int _isdigit - digit
 * @c: parameter
 * Description: 'digit'
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
		return (0);
}
