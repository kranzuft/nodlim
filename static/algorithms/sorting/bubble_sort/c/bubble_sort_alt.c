#include <stdio.h>  /* printf */
#include <stdlib.h> /* atoi */

typedef int item;
const int MAX_NUMBERS = 10000;

void BubbleSort(int unsorted[], int size);
int compexch(int *A, int *B);

int main(int argc, char* argv[]) {
    item numbers[MAX_NUMBERS];      /* stores unsorted values */
    int size;                       /* Number of items input by user */

    size = argc - 1;

    // Exit if not enough input
    if (argc < 2) {
        printf("Error: argument not provided. Cannot sort arguments!\n");

        return 1;
    }

    // Convert character pointers to integers
    for (int i = 1; i < argc; i++) {
        numbers[i - 1] = atoi(argv[i]);
    }

    // Sort input
    BubbleSort(numbers, size);

    // Output sorted input
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}

/* Bubble Sort
 * Sorts elements by comparing adjacent elements until sorted */

void BubbleSort(item s[], int size) {
    int sectcomp, sectswap;
    int sorted = 0;
    unsigned long comp = 0;
    unsigned long swap = 0;

    // Output comparison and swap headings
    printf("%24s%24s\n", "Comparisons", "Swaps");

    // Sort items until sorted
    while (!sorted || size == 1) {
        sorted = 1, sectcomp = 0, sectswap = 0;

        // Swap items consecutively to end of array
        for (int i = 0; i < size - 1; ++i, sectcomp++) {
            if ( compexch( &(s[i]), &(s[i + 1]) ) ) {
                sorted = 0;
                sectswap++;
            }
        }

        comp += sectcomp, swap += sectswap;
        printf("%18ld%6d%18ld%6d\n", comp, sectcomp, swap, sectswap);

        size--;         // prevents sorting sorted elements
    }
}

/* Compares two elements, A and B,
 * and swaps if A > B. */
int compexch(item *A, item *B) {
    if (*A > *B) {
        item temp = *A;
        *A = *B;
        *B = temp;

        return 1;
    }

    return 0;
}