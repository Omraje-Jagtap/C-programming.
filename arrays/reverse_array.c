#include<stdio.h>
        
      // WAP to print the revrese elements in an array

int main(){
    int n;
    printf("enter the number of element:");
    scanf("%d",&n);

    int i,arr[100];

    for ( i = 0; i < n; i++)
    {
       printf("enter the value:");
       scanf("%d",&arr[i]);
    }
    
    for ( i = 4; i >= 0; i--) 
    {
       printf("%d\n",arr[i]);
    }
    
    return 0;
}