#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'com3'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int index = 0;

	while (index < 10)
	{
		int india = index + 1;

		while (india  < 10)
		{
			putchar(index + '0');
			putchar(india + '0');
			if (index < 8)
			{
				putchar(',');
				putchar(' ');
			}
			india++;
		}
		index++;
	}
	putchar('\n');
	return (0);
}
