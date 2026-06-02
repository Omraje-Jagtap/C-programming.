#include<stdio.h>

// WAP using function to print a square of a given number.

void square(int n);

int main(){

    int n;
    printf("enter the number to make its square:");
    scanf("%d",&n);
    square(n);
    return 0;
}

void square(int n){

   int square = n*n;
   printf("the square of number is :%d",square);

}