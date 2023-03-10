#include <stdio.h>

int main ()
{
	/*Declare an array with 5 elements*/
	int myArray[5];

	/*initialize the elements*/

	myArray[0] = 1;
	myArray[1] = 2;
	myArray[2] = 3;
	myArray[3] = 4;
	myArray[4] = 5;

	/**
	 * Or we can initialize at time of declaration by
	 *
	 * int myArray[5] = {1, 2, 3, 4, 5};
	 */

	/*Print the Values*/
	printf("myArray[0] = %d\n", myArray[0]);
	printf("myArray[1] = %d\n", myArray[1]);
	printf("myArray[2] = %i\n", myArray[2]);
	printf("myArray[3] = %i\n", myArray[3]);
	printf("myArray[4] = %d\n", myArray[4]);
	printf("Size of array is: %lu\n", sizeof(myArray));

	return (0);
}
