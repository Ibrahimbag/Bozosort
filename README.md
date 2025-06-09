# Bozosort
Bozosort is a random [sorting algorithm](https://en.wikipedia.org/wiki/Sorting_algorithm); it's a combination of [Bogosort](https://en.wikipedia.org/wiki/Bogosort) and [Bubble Sort](https://en.wikipedia.org/wiki/Bubble_sort).

This algorithm is designed to sort an array by swapping two elements randomly until the array is sorted, whereas [Bogosort](https://en.wikipedia.org/wiki/Bogosort) shuffles the whole array randomly in each swap.

## Installation and Usage
```bash
# Clone the repository
$ git clone https://github.com/Ibrahimbag/Bozosort.git

# Change working directory to the bozosort folder
$ cd Bozosort

# Compile it 
$ cc main.c bozosort.c

# Then execute the compiled binary
$ ./a.out <number1> <number2> ...

# You can use the "time" command to know how much It took to finish
$ time ./a.out <number1> <number2> ...
```
## Algorithm Overview
1. **Check for Sorted Array**: Before starting the sorting process, the program checks if the array is
      already sorted.
2. **Sorting Process**: The sorting process begins by entering a loop that continues until the array
      is sorted. Inside this loop, the program performs a random swap of two elements in the array.
3. **Random Swap**: The swap is performed by generating two random indices. The elements at these indices are then swapped.

Since it is based on permutation, the worst case time complexity of this algorithm is O(n!). \
If it's already sorted, then the program just iterates through the array and exits without any swaps, so it's Ω(n)

| Case             | Time Complexity |
| ------------- |:-------------:|
| Worst              | O(n!)     |
| Best               | Ω(n)     |