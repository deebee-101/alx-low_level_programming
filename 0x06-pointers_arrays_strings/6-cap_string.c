#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * *cap_string - cap it
 * @s: some string
 *
 * Description: 'capital'
 *
 * Return: char
 */

char *cap_string(char *s)
{
	int i = 0;
	char spec[] = ",;. !?\"(){}\t\n";
	int n = strlen(s);

	while (i < n)
	{
		if ((i == 0) && (isalpha(s[i])))
		{
			s[i] = toupper(s[i]);
		}
		else if (strchr(spec, s[i]))
		{
			if (isalpha(s[i + 1]))
			{
				s[i + 1] = toupper(s[i + 1]);
			}
		}
		i++;
	}
	return (s);
}
