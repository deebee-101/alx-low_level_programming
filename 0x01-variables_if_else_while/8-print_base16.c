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
	char num[10] = "0123456789";
	char alp[6] = "abcdef";

	while (index < 10)
	{
		putchar(num[index]);
		index++;
	}
	index = 0;
	while (index < 6)
	{
		putchar(alp[index]);
		index++;
	}
	putchar('\n');
	return (0);

}
