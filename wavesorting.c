#include <stdio.h>
#include <stdlib.h>

// Function to compare two elements for sorting in ascending order
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

// Function to sort the array in wave form
void sortInWaveForm(int arr[], int n) {
    // Step 1: Sort the array
    qsort(arr, n, sizeof(arr[0]), compare);

    // Step 2: Swap adjacent elements at even indices
    for (int i = 0; i < n - 1; i += 2) {
        // Swap arr[i] with arr[i+1]
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    // Ask the user for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Create an array of size n
    int arr[n];

    // Read the array elements from the user
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the function to sort the array in wave form
    sortInWaveForm(arr, n);

    // Print the result
    printf("Array in wave form: ");
    printArray(arr, n);

    return 0;
}
