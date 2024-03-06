# Bozosort
Bozosort is a random [sorting algorithm](https://www.javatpoint.com/sorting-algorithms). The algorithm is designed
to sort an array by swapping two elements randomly until the array is sorted. Whereas, [Bogosort](https://en.wikipedia.org/wiki/Bogosort) shuffles the whole array randomly in each swap. 
## Installation
```bash
# Clone the repository
$ git clone https://github.com/Ibrahimbag/Bozosort.git

# Change working directory to the bozosort folder
$ cd Bozosort

# Compile it 
$ gcc bozosort.c

# Then execute the compiled binary
$ ./a.out
```
## Algorithm Overview
1. **Check for Sorted Array**: Before starting the sorting process, the program checks if the array is
      already sorted.
2. **Sorting Process**: The sorting process begins by entering a loop that continues until the array
      is sorted. Inside this loop, the program performs a random swap of two elements in the array.
3. **Random Swap**: The swap is performed by generating two random indices. The elements at these indices are then swapped.

Since it is based on permutation, the worst case time complexity of this algorithm is O(n!) or if the given array is already sorted, then it is O(n).

| Case             | Time Complexity |
| ------------- |:-------------:|
| Worst              | O(n!)     |
| Best               | O(n)     |