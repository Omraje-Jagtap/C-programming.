#include<stdio.h>

// Find the Total Number of Pairs in an Array that Sum to Target 'x'

int main(){

    int arr[100],i,j,x,n,count=0;

    printf("enter the total numbers from that to find maximum value:");
    scanf("%d",&n);

    printf("enter value of that number which  is equal to sum:");
    scanf("%d",&x);

     for ( i = 0; i < n; i++)
    {
        printf("enter the numbers:");
        scanf("%d",&arr[i]);
    }

    for ( i = 0; i < n; i++){
        for ( j = 1; j < n; j++)
        {
           int sum = arr[i] + arr[j];

           if(sum == x){
            count++;
           }
    }
}

          printf("%d",count);
     return 0;
}     
    
     