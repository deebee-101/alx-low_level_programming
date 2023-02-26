#include <ctype.h>
#include "main.h"
/**
 * int _isupper - upper
 * @c: variable
 *
 * Description: 'upper'
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
		return (0);
}
