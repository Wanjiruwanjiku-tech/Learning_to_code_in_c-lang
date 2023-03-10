#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the age and shows if young, Adult or
 * geriatric
 * Return: 0
 */
int main(void)
{
	int age;

	printf("Enter Your Age: ");
	scanf("%d", &age);

	if (age <= 20)
	{
		printf("You are young\n");
	}
	else if (age > 20 && age <= 50)
	{
		printf("You are an Adult");
	}
	else if (age > 50)
	{
		printf("You are Geriatric");
	}
	printf("\n");

	return (0);
}
