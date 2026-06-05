#include<stdio.h>

// this program is check the number is palindrome or not

int main(){

    int n,p,d=0,m;
    printf("enter the number to check it palindrome or not: ");
    scanf("%d",&n);
        m = n;
    while (n!=0)
    {
        p = n%10;
        d = d*10+p;      // reverse the number.
        n = n/10;


    }

    if(d==m){
        printf("this no. is palindrome");
    }
    else 
    printf("the given is not palindrome");

    return 0;
}