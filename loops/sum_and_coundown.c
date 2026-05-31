#include <stdio.h>

int main() {
    int sum = 0, i, n;
    
    printf("Enter the number: ");
    scanf("%d", &n);
    
    // Loop 1: Calculate the sum
    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }
    // Added a label and a newline (\n) at the end
    printf("Sum of 1 to %d: %d\n\n", n, sum); 
 
    // Loop 2: Countdown
    printf("Countdown:\n");
    for (int j = n; j >= 1; j--) {
        printf("%d\n", j);
    }
    
    return 0;
}