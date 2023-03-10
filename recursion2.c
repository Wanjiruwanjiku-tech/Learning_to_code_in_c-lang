#include <stdio.h>

/**sumdigit -Adds the digits if a number
 *
 * @n: the number
 */
unsigned int sumdigit(unsigned int n)
{
	/* base case */
	if (n == 0)
	{
		return (0);
	}
	return ((n % 10) + (n / 10 ));
} /* n % 10 separates the last digit from n the / chops it off from n and repeats untill all digit have */
int main()
{
	printf("%i\n", sumdigit(43));

	return (0);
}
