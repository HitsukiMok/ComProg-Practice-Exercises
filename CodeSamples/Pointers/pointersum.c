#include <stdio.h>

// function initializaiton (functions are below main)
// w/o pointers
int sumWithoutPointers(int arr[], int size);
float avgWithoutPointers(int arr[], int size);

// w/ pointers
int sumWithPointers(int *ptr, int size);
float avgWithPointers(int *ptr, int size);


int main() {
    int arr[] = {5, 10, 15, 20, 25}; // Sample integer array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    printf(" Using Array Indexing (w/o pointers )\n");
    printf("Sum: %d\n", sumWithoutPointers(arr, size));
    printf("Average: %.2f\n\n", avgWithoutPointers(arr, size));

    printf(" Using Pointer Arithmetic\n");
    printf("Sum: %d\n", sumWithPointers(arr, size));
    printf("Average: %.2f\n", avgWithPointers(arr, size));

    return 0;
}



// sum of elements in the array w/o pointers
int sumWithoutPointers(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i]; 
    }
    return sum;
}

// average of elements in the array w/o pointers
float avgWithoutPointers(int arr[], int size) {
    int totalSum = sumWithoutPointers(arr, size);
    return (float)totalSum / size;
}

//sum of elements in the array w/ pointers
int sumWithPointers(int *ptr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(ptr + i); 
    }
    return sum;
}

// average of elements in the array w/ pointers
float avgWithPointers(int *ptr, int size) {
    int totalSum = sumWithPointers(ptr, size);
    return (float)totalSum / size;
}