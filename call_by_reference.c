// Title: Swapping Two Numbers (Call by Reference)
#include <stdio.h>

void swap(int *a, int *b) {  // Function that takes two pointers as arguments
    int temp;
    temp = *a; 
    *a = *b;   
    *b = temp; 
}

int main() {
    int x = 10, y = 20;

    printf("Before swapping: x = %d, y = %d\n", x, y);

    swap(&x, &y); // Pass the addresses of x and y

    printf("After swapping:  x = %d, y = %d\n", x, y);

    return 0;
}