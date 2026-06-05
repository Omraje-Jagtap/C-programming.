// Title: Iterating Through an Array using Pointers
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr; // ptr points to the first element (arr[0])

    printf("Array elements accessed using pointers:\n");
    for (int i = 0; i < n; i++) {
        
        printf("Element %d: %d\n", i, *(ptr + i));
    }

    return 0;
}