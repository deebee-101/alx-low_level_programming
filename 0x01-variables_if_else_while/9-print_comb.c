#include <stdio.h>

int main(void)
{
	int index = 0;
	while(index < 10)
	{
		putchar(index + '0');
		if(index < 9)
		{
			putchar(',');
			putchar(' ');
		}
		index++;
	}
	return (0);

}