#include<stdio.h>
// question:- write a program to check the if a student is passed or failed.
int main()
{
 int marks;
 printf("enter the marks:");
 scanf("%d",&marks);
 
 if(marks>90 && marks<100)
 printf("grade A+");
 else if(marks>70 && marks<90)
       printf("grade A");
else if(marks>30 && marks>70)
 printf("grade B");
 else 
 printf("grade C");
 return 0;

 
}