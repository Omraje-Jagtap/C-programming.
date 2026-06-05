#include<stdio.h>
int main(){
    /*the practice question: take side from user and print the area or square*/

    float side,square;  //the square this decleration is area of square
    printf("enter the the side of square:");
    scanf("%f",&side);
    square=side*side;
    printf("the area of square is:%f",square);
    return 0;
}

