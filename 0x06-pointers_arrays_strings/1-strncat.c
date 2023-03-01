#include "main.h"
#include <string.h>

/**
 * *_strncat - cat
 * @dest: destination
 * @src: source
 * @n: integer
 *
 * Description: 'Concatenate'
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = strlen(dest);
	int k = 0;
	char tempo;

	while (k < n)
	{
		tempo = src[k];
		dest[i] = tempo;
		i++;
		k++;
	}
	return (dest);

}
