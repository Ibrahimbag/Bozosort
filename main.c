#include "bozosort.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	// Check if there are any arguments
	if (argc < 2)
	{
		fprintf(stderr, "Usage: %s <number1> <number2> ...\n", argv[0]);
		return 1;
	}

	// Check if all arguments are integers
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				fprintf(stderr, "All arguments must be integers\n");
				return 1;
			}
		}
	}

	// Convert arguments to integers and store them in an array
	int arr_size = argc - 1;
	int arr[arr_size];
	for (int i = 0; i < arr_size; i++)
	{
		arr[i] = atoi(argv[i + 1]);
	}

	// Sort the array using bozosort and print the result
	int swap_count = bozosort(arr, arr_size);
	for (int i = 0; i < arr_size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("Number of swaps: %d\n", swap_count);

	return 0;
}
