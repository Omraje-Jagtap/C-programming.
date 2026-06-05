#include<stdio.h>
 // WAP to print the nth fibonacci no.
int main(){

    int n,a,b,i=(a=1,b=1),c=0;

    printf("enter the number:");
    scanf("%d",&n);

    while (i<=n)
    {
        c = a+b;
        a = b;
        b = c;
       
        i++;
        printf("the fibonachi series is :%d\n",c);
    }
    return 0;

}