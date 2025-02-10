#include "bozosort.h"
#include <stdio.h>
#include <stdlib.h>

static void validate_input(int argc, char *argv[]);

int main(int argc, char *argv[])
{
	// Check if arguments used correctly
	validate_input(argc, argv);

	// Convert arguments to integers and store them in an array
	int arr_size = argc - 1;
	int arr[arr_size];
	for (int i = 0; i < arr_size; i++)
	{
		arr[i] = atoi(argv[i + 1]);
	}

	// Get user input if they want their array sorted in ascending or descending order
	int order;
	printf("Enter 1 for ascending order or 0 for descending order: \n");
	do
	{
		scanf("%d", &order);
	} while (order != 0 && order != 1);

	// Sort the array using bozosort and print the result
	int swap_count = bozosort(arr, arr_size, order);
	for (int i = 0; i < arr_size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("Number of swaps: %d\n", swap_count);

	return 0;
}

static void validate_input(int argc, char *argv[])
{
	// Check if there are any arguments
	if (argc < 2)
	{
		fprintf(stderr, "Usage: %s <number1> <number2> ...\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	// Check if all arguments are integers
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				fprintf(stderr, "All arguments must be integers\n");
				exit(EXIT_FAILURE);
			}
		}
	}
}
