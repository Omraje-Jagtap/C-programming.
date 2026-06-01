#include<stdio.h>
        // from this program we can undrestand how 2D arrays program work to print it.
int main(){
            
    int r,c,i,j;

    printf("enter the no.of rows:");
    scanf("%d",&r);

     printf("enter the no.of column:");
    scanf("%d",&c);
      
    int arr[r][c]; // take number of rows and column

    for ( i = 0; i < r; i++){
        for ( j = 0; j < c; j++)
        {
           scanf("%d",&arr[i][j]);  // accept the array element
    
        }
    }
    

    for ( i = 0; i < r; i++){
        for ( j = 0; j < c; j++)
        {
           printf("%d ",arr[i][j]);  // print the array element in matrix from.
        }
        
        printf("\n");
    }
    
       return 0;

}
