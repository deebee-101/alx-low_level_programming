#include "main.h"
/**
 * main - alphabet
 *
 * Desciption: 'print alpha'
 *
 * return: On success 0
 */

void print_alphabet(void)
{
	/*prints alphabets*/
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int index = 0;

	while (index < 26)
	{
		_putchar (alpha[index]);
		index++;
	}
	_putchar ('\n');
}
