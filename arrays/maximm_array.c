#include<stdio.h>

    //WAP to print the maximum value from given number.  

int main(){
    
    int arr[100],n,i,a=0;

    printf("enter the total numbers from that to find maximum value:");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
       printf("enter the number to find the maximum value from them:");
       scanf("%d",&arr[i]);

        if(a<arr[i]){

            a = arr[i];

          }
    }
    
       
           printf("the maximum value is :%d",a);
    return 0;
}