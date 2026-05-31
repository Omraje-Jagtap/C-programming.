#include<stdio.h>
// print the table of n number input from user
int main(){
    int i, n,product;
    
    printf("enter the number to make that table:");
    scanf("%d",&n);
    
            for ( i = 1; i <= 10; i++)
            {
                product = n*i;
                printf("%d",product);
            }
            
        return 0;


}