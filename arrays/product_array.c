#include<stdio.h>

   //WAP to print the product of given numbers using array.

int main(){
  
    int arr[100],n,i,prod=1;
    printf("enter the no of elements you want to product:");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
       printf("enter the numbers:");
       scanf("%d",&arr[i]);
    }
    
    
   for ( i = 0; i < n; i++)
    {
        prod = prod*arr[i];
    }
    printf("the product is:%d",prod);
   
  return 0;
}