#include <stdio.h>

/**
 *  main - Shows Pointers
 *
 *  Return: Always 0
 */
int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;
	/* * - Shows that variable p is a pointer*/
	printf("Size of pointer is:%lu\n", sizeof(p));
	printf("Address of pointer p is:%p\n", &p);

	/* Because &n gives us the address of the variable n, the variable p now holds the address of the variable n */
	printf("Address of n is:%p\n", &n);
	printf("Value of pointer p is:%p\n", p);

	/*Derefrencing Pointers*/
	*p = 402;
	/* in this case the symbol '*' is used for derefrencing*/

	printf("Value of n is:%d\n", n);

	return (0);
}
