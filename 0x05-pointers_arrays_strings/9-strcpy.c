#include "main.h"
#include <string.h>

/**
 * _strcpy - copy
 * @dest: destination
 * @src: source
 *
 * Description: 'copy'
 *
 * Return: nope
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	char tempo;
	int len = strlen(src);

	while (i <= len)
	{
		tempo = src[i];
		dest[i] = tempo;
		i++;
	}
	return (dest);
}
