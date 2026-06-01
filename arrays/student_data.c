#include<stdio.h>

   // WAP to print the roll no. of those student have a marks less than 35.

int main(){

    int n,i,marks[100];
       printf("enter the number of student:");
       scanf("%d",&n);
    
    for ( i = 0; i< n; i++)
    {     
        printf("enter the marks of %d student:",i+1);  
         scanf("%d",&marks[i]); 
        
         if (marks[i]<35)
    {
        printf("%d\n",i+1);
    }    
    }

   if (marks[i]<35)
    {
        printf("%d\n",i);
    }    
    return 0;
    
}