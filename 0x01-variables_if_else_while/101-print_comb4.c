#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'comb4'
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
			int indomie = india + 1;

			while (indomie < 10)
			{
				putchar(index + '0');
				putchar(india + '0');
				putchar(indomie + '0');
				if (index < 7)
				{
					putchar(',');
					putchar(' ');
				}
				indomie++;
			}
			india++;
		}
		index++;
	}
	putchar('\n');
	return (0);
}
