#include<stdio.h>

     // write a function to compute the greatest common divisor of two given numbers.

int divisor(int a,int b);

int main(){
     int a,b;
     printf("enter the first no.");
     scanf("%d",&a);

     printf("enter the first no.");
     scanf("%d",&b);

    int m = divisor(a,b);
     printf("%d",m);
    return 0;

}

int divisor(int a,int b){

    int i;

    if (a>b)
    {
        i=a;
    }
    else{
        
        i=b;
    }
    while (i>=1){
        if (a%i==0 && b%i==0)
        {
           return i;
            
        }
        i--;
    }

}

   