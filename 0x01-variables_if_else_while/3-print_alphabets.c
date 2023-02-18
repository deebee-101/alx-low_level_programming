#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'alpha'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int index = 0;
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	char ABET[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (index < 26)
	{
		putchar(alph[index]);
		index++;
	}
	index = 0;
	while (index < 26)
	{
		putchar(ABET[index]);
		index++;
	}
	putchar('\n');
	return (0);
}
