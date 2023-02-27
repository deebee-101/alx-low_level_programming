#include <stdio.h>

/**
 * main - entry point
 *
 * Description: 'fizzbuzz'
 *
 * Return: always 0
 */

int main(void)
{
	int i = 1;

	while (i < 101)
	{
		if ((i % 3 == 0) && (i % 5 != 0))
		{
			printf("Fizz ");
		}
		else if ((i % 3 != 0) && (i % 5 == 0))
		{
			printf("Buzz ");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else
			printf("%d ", i);
		i++;
	}
	putchar('\n');
	return (0);
}
