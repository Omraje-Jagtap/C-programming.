#include<stdio.h>
#include<math.h>

   /* WAP to print two number entered form user find the value of one number rasied to the power of another no.*/

int main(){

    int a,b,power;

    printf("enter base number :");
    scanf("%d",&a);
    printf("enter power number:");
    scanf("%d",&b);

    power = pow(a,b);

    printf("the power no. is : %d",power);

    return 0;

}