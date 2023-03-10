#include <stdio.h>

/**
 * main - shows the adresses of variables of type int and
 * char
 * Return: Alwsys 0
 */
int main(void)
{
	/*declare variables*/
	int n;
	char c;

	/* Use a printf statement to show adresses */
	printf("Adress of variable n is:%p\n", &n);

	/* & - To find Adress */
	/* Format specifier '%p' - prints adress */
	printf("Adress of variable c is:%p\n", &c);

	return (0);
}
