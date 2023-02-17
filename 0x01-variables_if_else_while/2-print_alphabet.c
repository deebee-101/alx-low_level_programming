#include <stdio.h>

int main(void)
{
	char alpha[26] =  "abcdefghijklmnopqrstuvwxyz";
	int index = 0;

	while(index < 26)
	{
		putchar(alpha[index]);
		index++;
	}
	putchar('\n');
	return (0);
}
