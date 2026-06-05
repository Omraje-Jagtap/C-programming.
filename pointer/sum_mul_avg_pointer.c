#include<stdio.h>

  // WAP using a function the sum,product and avgrage of 2 numbers. print that in main function.

void cal(int *a,int *b);

int main(){

      int a,b;

     printf("enter the number : ");
     scanf("%d",&a);

     printf("enter the number:");
     scanf("%d",&b);

     cal(&a,&b);
    return 0;
}

void cal(int *a,int *b){

    int sum = *a + *b;
    printf("the sum is:%d\n",sum);

   int product = (*a) * (*b);
   printf("the product is : %d\n",product);

   int avg = (*a+*b)/2;

   printf("the avg is :%d\n",avg);

}