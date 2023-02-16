#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charity;
	int inte;
	long int lot;
	long long int l;
	float buoyancy;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(charity));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(inte));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(lot));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(buoyancy));
	return (0);
}
