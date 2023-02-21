#include "main.h"
/**
 * main - alphabet
 *
 * Description: 'print alpha'
 *
 * return: On success 0
 */

void print_alphabet(void)
{
	/*
	 * Description: prints alphabets
	 */

	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int index = 0;

	while (index < 26)
	{
		_putchar (alpha[index]);
		index++;
	}
	_putchar ('\n');
}
