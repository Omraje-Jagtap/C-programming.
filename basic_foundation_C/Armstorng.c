// WAP to print armstorng number between 1-500.

#include<stdio.h>
#include<math.h>

int main(){

    int i=1,n,m,sum;
     
while (i<=500)
{  
    sum = 0;
   n =i;
   while(n>0){
   m = n%10; 
   sum = sum + pow(m,3);
   n = n/10;
   }
   if(sum == i)
   {
    printf("armstorng no: %d\n",i);
   }
   
    i++;
}

 return 0;
}