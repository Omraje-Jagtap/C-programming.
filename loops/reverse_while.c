#include<stdio.h>
  // question:- print the reverse number.
int main(){

    int n,p,d=0;

    printf("enter the number to make it reverse:");
    scanf("%d",&n);

    while(n!=0){

        p = n%10;  // here n%10 is give last no. if user enter 12345 it is gives only 5.
        d = d*10+p;  // here d=0 means o x 10 = 0 & +p means 0+5 = 5.
        n = n/10;     // it remove last digit means 5. and then remeaning n is only 1234.
        // after this all step again loop is work until (n!=0) this condition is not come.
    
        
    }
         printf("the reverse no. is: %d",d);

         return 0;
}