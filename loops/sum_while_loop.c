#include<stdio.h>
     // print the sum of this series : 1-2+3-4+5-6......upto n.
int main(){

    int i=1,sum1=1,sum2=0,m=0,n;
    printf("enter the number:");
    scanf("%d",&n);

    while (i <n && m < n)
    {
       i = i + 2;
       sum1 = sum1 + i;

       m = m +2;
       sum2 = sum2 + m;

    }
        printf("the sum is %d",sum1 - sum2);
    
}