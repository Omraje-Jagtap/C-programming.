#include<stdio.h>
// WAP to print sum of even digits of a given number
int main(){

    int n,p=0;
    printf("enter the no.");
    scanf("%d",&n);
int sum=0;

 while(n!=0){

    p= n%10;

    if(p % 2 == 0)
    sum = sum + p;
    n= n/10;


 }
 printf("the sum is: %d",sum);

     return 0;
}