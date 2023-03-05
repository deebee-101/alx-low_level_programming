#include "main.h"

/**
 * _strspn - span
 * @s: string
 * @accept: acept
 *
 * Description: 'span accept'
 *
 * Return: integer
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int b = 0;

	while (s[i] != '\0')
	{
		int j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				b = b + 1;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			break;
		}
		i++;
	}
	return (b);
}
