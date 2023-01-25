#include <stdio.h>

#define MAX_SIZE 100 // maximum size of the array

int main()
{
	int array[MAX_SIZE]; // array to store the numbers
	int num_elements; // number of elements in the array
	int i; // loop variable
	int sum = 0; // variable to store the sum of the elements in the array
	float average; // variable to store the average of the elements in the array
		       
	// prompt user to enter the number of elements in the array
	printf("Enter the number of elements in the array: ");
	scanf("%d", &num_elements);

	// prompt user to enter the elements of the array
	printf("Enter the elements of the array: ");
	for (i = 0; i < num_elements; i++)
	{
	    scanf("%d", &array[i]);
	    sum += array[i]; // add the element to the sum
	}

	// calculate the average of the elements in the array
	average = (float) sum / num_elements;

	// print the numbers greater than the average
	printf("Numbers greater than the average: ");
	for (i = 0; i < num_elements; i++)
	{
	    	if (array[i] > average)
		{
       			printf("%d ", array[i]);
	   	 }
	}

	return 0;
}
