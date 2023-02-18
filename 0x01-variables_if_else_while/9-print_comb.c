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
	int index = 0;

	while (index < 10)
	{
		putchar(index + '0');
		if (index < 9)
		{
			putchar(',');
			putchar(' ');
		}
		index++;
	}
	putchar('\n')
	return (0);

}
