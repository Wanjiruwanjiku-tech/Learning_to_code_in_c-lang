#include <stdio.h>

/**
 * main - The main Entry point
 * Description: A user inputs a number and checks if
 * True
 * Return: the Integer guessed
 */
int main(void)
{
	int number = 9;
	
	printf("\tWelcome to the Guessing game\n");
	printf("\tPlease pick a number of choice from 0 to 10\n");
	scanf("%d", &number);

	if (number == 9)
	{
		printf("%d: JACKPOT. Your guess is correc🎉\n", number);
	}

	else if (number == 0)
	{
		printf("%d: Too Far from Home :\\\n", number);
	}
	else if (number == 7)
	{
		printf("%d: Almost there! :|\n", number);
	}
	else
	{
		printf("%d: Not close😭\n", number);
	}
	return (0);
}
