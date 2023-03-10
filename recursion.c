#include <stdio.h>
#include <math.h>

/**
 * factorial - A function that calculated the factorial
 * of a given number
 * @n: Any given number
 * Return: The factorial
 */
unsigned int factorial(unsigned int n)
{
	if (n <= 1) /* BASE CASE */
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
int main(void)
{
	printf("Factorial is %i\n", factorial(5));

	return (0);
}
