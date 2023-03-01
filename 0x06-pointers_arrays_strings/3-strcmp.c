#include "main.h"

/**
 * _strcmp - compare
 * @s1: first
 * @s2: second
 *
 * Description: 'compare'
 *
 * Return:difference
 */

int _strcmp(char *s1, char *s2)
{
	int sum1 = 0;
	int sum2 = 0;
	int comp = 0;
	int i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		sum1 += s1[i];
		sum2 += s2[i];
		i++;
	}
	comp = sum1 - sum2;
	return (comp);
}
