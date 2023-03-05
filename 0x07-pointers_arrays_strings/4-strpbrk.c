#include "main.h"

/**
 * *_strpbrk - first
 * @s: string
 * @accept: look here
 *
 * Description: 'finds first'
 *
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	char *b;

	while (s[i] != '\0')
	{
		int j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				b = &s[i];
				return (b);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
