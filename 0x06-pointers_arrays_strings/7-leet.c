#include "main.h"
#include <ctype.h>

/**
 * *leet - leet
 * @s: var
 *
 * Description: 'leet'
 *
 * Return: char
 */

char *leet(char *s)
{
	int i = 0;
	char alpha[] = "aeotl";
	char lit[] = "43071";

	while (s[i] != '\0')
	{
		int j = 0;
		while (alpha[j] != '\0')
		{
			if (toupper(alpha[j]) == toupper(s[i]))
			{
				s[i] = lit[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
