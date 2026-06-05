// Title: Basic Pointer Declaration and Dereferencing
#include <stdio.h>

int main() {
    int num = 42;
    int *ptr; // Declare a pointer to an integer

    ptr = &num; // Assign the memory address of 'num' to the pointer 'ptr'

    printf("Value of num: %d\n", num);
    printf("Memory address of num (&num): %p\n", (void*)&num);
    printf("Value stored in ptr (address): %p\n", (void*)ptr);
    printf("Value pointed to by ptr (*ptr): %d\n", *ptr);

    // Modifying the value using the pointer
    *ptr = 100;
    printf("\nNew value of num after modifying via *ptr: %d\n", num);

    return 0;
}