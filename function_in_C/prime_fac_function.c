#include<stdio.h>

   // WAP to print prime factors of given no. using function.

void prime(int n);

int main(){
      int n;
      printf("enter the number:");
      scanf("%d",&n);
     prime(n);
    
    return 0;
}

void prime(int n){
     
    int i=2;
    
    while(n>1){
        

        if (n%i==0)
        {
            printf("%d",i);
            n = n / i;
        }
        else{
        i++;
        }
    
    }


}