#include <stdio.h>

/**
 * main - Prints FizzBuzz
 * Description: multiples of 3 print Fizz, multiples of
 * 5 print Buzz, multiples of both 5 and 3 print FizzBuzz
 *
 * Return: 0;
 */
int main (void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if ((x % 5 == 0) && (x % 3 == 0))
		{
			printf("FizzBuzz");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", x);
		}
		if (x != 100)
		{
			printf(" ");
		}
	}
	return (0);
}
