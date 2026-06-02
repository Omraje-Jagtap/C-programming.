#include<stdio.h>

void fib(int n);

int main(){
          
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    fib(n);
    return 0;
}

void fib(int n){

    int i=1,a=0,b=1,c=0;

    while (i<=n)
    {
        c = a+b;
        a = b;
        b = c;
         printf("%d\n",c);
        i++;
    }
    
}
