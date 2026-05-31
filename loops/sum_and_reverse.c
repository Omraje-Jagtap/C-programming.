#include<stdio.h>
  // question:- WAP to print the sum of given no. and its reverse.
int main(){

    int m, n,p,d=0;

    printf("enter the number to make it reverse:");
    scanf("%d",&n);

    m = n;

    while(n!=0){

        p = n%10;  
        d = d*10+p;  
        n = n/10;     
        
       
        
    }
    printf("the reverse no. is: %d\n",d);
    
         printf(" the addition is :%d",d+m);
   

         return 0;
}