#include<stdio.h>

      /*given an array of integers, change the value of all odd indexed elements to its second 
      multiple and increment all even indexed value by 10.*/ 

int main(){

    int arr[100],i,p,n;

    printf("enter the number of elements in array:");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
       printf("enter the no.:");
       scanf("%d",&arr[i]);
    }
    

    for ( i = 0; i < n; i= i+2)    // even indexing
    {
        printf("%d\n",arr[i]+10);
    }
    
    for ( i = 1; i < n; i = i+2)
    {
        p = arr[i]*2;
        printf("%d\n",p); 
    }

    return 0;
    

}