#include<stdio.h>

   // WAP the program for the nCr.

int fcat(int n,int r);

int main(){
     int n,r,m;
     printf("enter the value of n:");
     scanf("%d",&n);
     printf("enter the value of r:");
     scanf("%d",&r);

        fcat(n,r);

    return 0;
}

int fcat(int n,int r){

    int i=1;
    int fn=1,fr=1,fnr=1;
    while (i<=n)
    {
        fn = fn*i;
        i++;
 }

    int j = 1;
    while (j<=r)
    {
        fr = fr*j;
        j++;
    }

    int m = n-r;
    int k = 1;
    while (k<=m)
    {
        fnr= fnr*k;
        k++;
    }
    
    long long factorial = fn/(fr*fnr);

    printf("the combination no.is : %lld",factorial);
    
    return 0;

}