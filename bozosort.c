#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int arr[] = {8, 1, 3, 5, 2, 11, 12, 4, 6, 7, 0, 9, 10};
const int m = sizeof(arr) / sizeof(int); 
long counter = 0;

bool issorted();
void sort();
int randomnum(int lower, int upper);

int main(void)
{
	// Change the seed value for random() function so everytime user executes the program, it chooses the seed value randomly depending on current time.
	srand(time(0));

	// Check if it's already sorted
	if (issorted(arr))
	{
		printf("Array is already sorted. Quitting the program\n");
		return 0;
	}
    
	// Start counting time before entering to the loop. Source: https://www.tutorialspoint.com/c_standard_library/c_function_clock.htm
	clock_t start_t, end_t;
	double total_t;
	start_t = clock();

	// Loop until it figures out how to sort array
	while (!issorted(arr))
	{
		sort();
	}

	// If sorting is finished, stop the timer and do calculation to get the CPU time
	end_t = clock();
	total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC; // CLOCKS_PER_SEC == 1000000
    
	// If array is sorted, print the array and exit the program
	printf("[");
	for (int i = 0; i < m; i++)
	{
		printf("%i", arr[i]);
		if (i != m - 1)
		{
            printf(",");
		}
	}
	printf("]\n");
   
	printf("Total swap: %li\n", counter);
	printf("CPU time: %f\n", total_t);
	return 0;
}

bool issorted()
{
	for (int i = 1; i < m; i++)
    {
        if (arr[i - 1] > arr[i])
		{
			return false;
		}
	} 
	return true;
}

void sort()
{
	// Some temporary variables and minimun, maximun variable for random() 
	int temp, buffer, buffer2, lower = 0, upper = m;
        
	// Store two different random integers between 0 - m into buffer variables and use these buffers for indexing two random array which will swap
    buffer = randomnum(lower, upper);
	buffer2 = randomnum(lower, upper);

    temp = arr[buffer];
	arr[buffer] = arr[buffer2];
	arr[buffer2] = temp;
	counter++;
}

// This will return integer between 0 - m Source: https://www.geeksforgeeks.org/generating-random-number-range-c/
int randomnum(int lower, int upper)
{
    return (rand() % (upper - lower + 1)) + lower;
}
