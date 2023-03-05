#include "main.h"

/**
 * *_strchr - checks str
 * @s: string
 * @c: character
 *
 * Description: 'checks'
 *
 * Return: char
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *b;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			b = &s[i];
			return (b);
		}
		i++;
	}
	return NULL;
}
