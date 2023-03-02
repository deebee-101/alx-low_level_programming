#include "main.h"
#include <ctype.h>
/**
 * *string_toupper - to up
 * @s: param
 *
 * Description: 'upper'
 *
 * Return: char
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (islower(s[i]))
		{
			s[i] = toupper(s[i]);
		}
		i++;
	}
	
	return (s);
}
