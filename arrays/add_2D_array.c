#include<stdio.h>

   // WAP to print the sum of two matrices.

int main(){
    
    int i,j,sum,r,c;
    
    printf("enter the no.of rows of matrix:");
    scanf("%d",&r); // accept numbers of rows

     printf("enter the no.of column of matrux:");
    scanf("%d",&c);  // accept numbers of column

    int mar1[r][c];
    int mar2[r][c];

    for ( i = 0; i < r; i++){
        for ( j = 0; j< c; j++)
        {
            printf("enter the no. of first matrix:");
            scanf("%d",&mar1[i][j]);    // take input of first matrix element 
        }
    }

     for ( i = 0; i < r; i++){
        for ( j = 0; j< c; j++)
        {
            printf("%d",mar1[i][j]);  // print the first matrix element 
            
        }
        printf("\n");
    }


    for ( i = 0; i < r; i++){
        for ( j = 0; j< c; j++)
        {
            printf("enter the no. of second matrix:");
            scanf("%d",&mar2[i][j]);    // take input of second matrix element 
        }
    }

     for ( i = 0; i < r; i++){
        for ( j = 0; j< c; j++)
        {
            printf("%d",mar2[i][j]);    // print the second matrix element 
            
        }
        printf("\n");
    }

    for ( i = 0; i < r; i++){
        for ( j = 0; j< c; j++)
        {
            printf("%d",mar1[i][j]+mar2[i][j]);   // print the addtidion of two matrices
            
        }
        printf("\n");
    }
    
    return 0;
}