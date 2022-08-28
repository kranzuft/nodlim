#include <stdio.h>  // for printf

const int MAX_NUMBERS = 10000;

void bubbleSort(int[], int);
int swapAsc(int *, int *);
void printIntArray(int, int []);

int main(int argc, char* argv[]) {
	const int size = 10;	// Number of items
	int numbers[size] = {2, 6, 3, 9, 8, 7, 1, 5, 4, 10};

    // Output unsorted numbers
	printf("Unsorted: \t");
	printIntArray(size, numbers);

    // Sort numbers
    bubbleSort(numbers, size);

    // Output sorted numbers
	printf("Sorted: \t");
	printIntArray(size, numbers);

    return 0;
}

/* Bubble Sort
 * Sorts elements by comparing adjacent elements until
 * they are sorted. */
void bubbleSort(int items[], int size) {
	int sorted;
    // Sort items until sorted
    do {
    	sorted = 1; // Assume sorted
        // Swap items consecutively to end of array
        for (int i = size - 1; i > 0; --i) {
            if ( swapAsc( &items[i], &items[i - 1] ) ) {
                sorted = 0;
            }
        }
    } while (!sorted);
}

/* Compares two elements, A and B,
 * and swaps them if they aren't ascending. */
int swapAsc(int *A, int *B) {
    if (*B > *A) {
        int temp = *A;
        *A = *B;
        *B = temp;
        return 1;
    }
    return 0;
}

/** Print to standard out an array of integers.
    Integers are separated by a space. */
void printIntArray(int size, int items[]) {
	for (int i = 0; i < size; i++) {
		printf("%d ", items[i]);
	}
	printf("\n");
}
