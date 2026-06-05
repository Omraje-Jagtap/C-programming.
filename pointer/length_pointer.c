// Title: Finding the Length of a String
#include <stdio.h>

// Function to calculate string length using a pointer
int stringLength(char *str) {
    int length = 0;
    
    while (*str != '\0') {
        length++;
        str++; 
    }
    
    return length;
}

int main() {
    char greeting[] = "Hello, World!";
    

    int len = stringLength(greeting); // Pass the base address of the character array
    
    printf("The string \"%s\" has a length of %d characters.\n", greeting, len);

    return 0;
}