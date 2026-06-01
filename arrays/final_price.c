#include<stdio.h>

// find the price of the 3 items with gst using array.

int main(){

    float price[3];
    float gst,sum,final;

    printf("enter the price of 3 items:");
    scanf("%f %f %f",&price[0],&price[1],&price[2]);

     sum = price[0]+price[1]+price[2];

     gst = (sum * 18)/100;
     final = sum + gst;

     printf("the final price with gst is:%f",final);


}