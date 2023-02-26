#include <stdio.h>

/**
 *  the modulus sign is used to return the remainder
 *  when an integer is divided by another
 *
 *  Represented by the percent sign '%'
 */

int main(void)
{
	int a = 17;
	int b = 5;
	int remainder;

	remainder = a % b;

	printf("The Renainder when %d is divided by %i is %d\n", a, b, remainder);

	return (0);
}
