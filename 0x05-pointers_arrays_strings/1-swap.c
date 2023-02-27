#include "main.h"

/**
 * swap_int - swaps
 * @a: first param
 * @b: second param
 *
 * Description: 'swaps'
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
