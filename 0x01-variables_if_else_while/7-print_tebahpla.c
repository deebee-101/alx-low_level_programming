#include <stdio.h>

int main(void)
{
	char alpa[26] = "abcdefghijklmnopqrstuvwxyz";
	int index = 26;
	while(index > 0)
	{
		index--;
		putchar(alpa[index]);
	}

	putchar('\n');
	return (0);


}
