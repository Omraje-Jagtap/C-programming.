#include<stdio.h>

  // WAP to swap a numbers.

int swap(int a,int b);

int main(){
     int a,b;
    printf("enter the first no:");
    scanf("%d",&a);

    printf("enter the second no:");
    scanf("%d",&b);

   swap(a,b);
}

int swap(int a,int b){

    int c = a;
    a = b;
    b = c;
     printf("the a = %d and b = %d",a,b);
}
