#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int index = 0;

	while (index < 26)
	{
		if (alpha[index] == 'e' || alpha[index] == 'q')
		{
			index++;
			continue;
		}
		else
		{
			putchar(alpha[index++]);
		}

	}
	putchar('\n');
	return (0);

}
