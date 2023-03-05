#include "main.h"

/**
 * *_memcpy - copy mem
 * @dest: destination
 * @srs: source
 * @n: integer
 *
 * Description: 'copy memory'
 *
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
