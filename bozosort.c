#include "bozosort.h"
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

static bool is_sorted(int arr[], int arr_size, int order)
{
	for (int i = 1; i < arr_size; i++)
	{
		if (order == ASCENDING && arr[i - 1] > arr[i])
		{
			return false;
		}
		else if (order == DESCENDING && arr[i - 1] < arr[i])
		{
			return false;
		}
	}
	return true;
}

static int get_random_index(int arr_size, int exclude)
{
	while (true)
	{
		int index = rand() % arr_size;
		if (index != exclude)
		{
			return index;
		}
	}
}

static void swap(int arr[], int arr_size)
{
	int index1 = get_random_index(arr_size, -1);
	int index2 = get_random_index(arr_size, index1);

	int temp = arr[index1];
	arr[index1] = arr[index2];
	arr[index2] = temp;
}

int bozosort(int arr[], int arr_size, int order)
{
	srand((unsigned int) time(NULL));

	int swap_count = 0;
	while (!is_sorted(arr, arr_size, order))
	{
		swap(arr, arr_size);
		swap_count++;
	}

	return swap_count;
}
