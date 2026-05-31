#include <stdio.h>

int main() {
    int i, n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int last_digit = n % 10;

    // Start at n, continue as long as i is greater than or equal to the last digit
    for (i = n; i >= last_digit; i--) {
        printf("%d\n", i);
    }
    
    return 0;
}