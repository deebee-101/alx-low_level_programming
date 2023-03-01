#include "main.h"
#include <string.h>

/**
 * *_strcat - cat
 * @dest: destination
 * @src: source
 *
 * Description: 'Concatenate'
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = strlen(dest);
	int j = strlen(src);
	int k = 0;
	char tempo;

	while (k <= j)
	{
		tempo = src[k];
		dest[i] = tempo;
		k++;
		i++;
	}
	return (dest);
}
