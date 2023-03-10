#include <stdio.h>

/**
 * main - using sizeof() dynamically to determine
 * the size of types 'int', 'char', float''
 *
 * Return:Always 0
 */
int main(void)
{
	int n;

	printf("Size of type char on my computer is:%lu bytes\n", sizeof(char));
	printf("Size of type int on my computer is:%lu bytes\n", sizeof(int));
	printf("Size of type float on my computer is:%lu bytes\n", sizeof(float));
	printf("Size of the variable n on my computer is:%lu bytes\n", sizeof(n));

	return (0);
}
