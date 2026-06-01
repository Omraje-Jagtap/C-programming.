#include<stdio.h>

 // count the no. of elements in given array than a given no. X.
 
int main(){

    int arr[100],i,n,x,m=0;

    printf("enter the number of element in array:");
    scanf("%d",&n);
    printf("enter value of that number of you want bigger no. than its:");
    scanf("%d",&x);

    for ( i = 0; i < n; i++)
    {
        printf("enter the numbers:");
        scanf("%d",&arr[i]);

         if(arr[i]>x){
           
            m++;
    
        
     }
      printf("%d",m);
    
     }
     return 0;
    
}