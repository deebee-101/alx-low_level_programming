#include "main.h"
#include  <string.h>

/**
 * *_strncpy - cat
 * @dest: destination
 * @src: source
 * @n: int
 *
 * Description: 'Copy'
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;
	char tempo;

	while (j < n && src[j] != '\0')
	{
		tempo = src[j];
		dest[j] = tempo;
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
