#include<stdio.h>

   // WAP to print the transpose of matrix.(leetcode - 867).

int main(){
    
    int i,j,sum,r,c;
    
    printf("enter the no.of rows of matrix:");
    scanf("%d",&r);

     printf("enter the no.of column of matrux:");
    scanf("%d",&c);

    int arr[r][c];
    

    for ( i = 0; i < r; i++){
        for ( j = 0; j< c; j++)
        {
           
            scanf("%d",&arr[i][j]);
        }
    }

     for ( i = 0; i < c; i++){    // change in c
        for ( j = 0; j< r; j++)   // change in r
        {
            printf("%d",arr[j][i]);
            
        }
        printf("\n");
    }

    return 0;

}