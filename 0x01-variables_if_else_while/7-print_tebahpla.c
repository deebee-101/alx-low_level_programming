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
	char alpa[26] = "abcdefghijklmnopqrstuvwxyz";
	int index = 26;

	while (index > 0)
	{
		index--;
		putchar(alpa[index]);
	}

	putchar('\n');
	return (0);


}
