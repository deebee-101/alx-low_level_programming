#include "main.h"
#include <string.h>

/**
 * *_strstr - strstr
 * @haystack: hay
 * @needle: syringe
 *
 * Description: 'finds n in h'
 *
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;
	int j;
	int loc = 0;
	char *b;
	int count;
	int target = strlen(needle);

	while (haystack[i] != '\0')
	{
		j = 0;

		if (haystack[i] == needle[j])
		{
			while (needle[j] != '\0')
			{
				if (haystack[i] == needle[j])
				{
					count += 1;
				}
				else
				{
					break;
				}
				i++;
				if ( i >= strlen(haystack))
				{
					break;
				}
				j++;
			}
			if (count == target)
			{
				loc = i - target;
				b = &haystack[loc];
				return (b);
			}
		}
		i++;
	}
	return (NULL);
}
