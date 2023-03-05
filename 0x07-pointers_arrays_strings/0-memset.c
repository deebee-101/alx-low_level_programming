#include "main.h"

/**
 * *_memset - sets mem
 * @s: string
 * @b: byte
 * @n: int
 *
 * Description: 'sets mem'
 *
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
