#include<stdio.h>
    // WAP to print sum of digits of a given nimber.
int main(){

    int n,p=0;
    printf("enter the no.");
    scanf("%d",&n);
int sum=0;

 while(n!=0){

    p= n%10;
    sum = sum + p;
    n= n/10;


 }
 printf("the sum is: %d",sum);

     return 0;
}
