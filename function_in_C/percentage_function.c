#include<stdio.h>

 // WAP to print percentage of three subject. 

int calculate(int math,int science,int english);

int main(){
    int math,science,english;
        printf("enter the marks of math science and english:");
        scanf("%d %d %d",&math,&science,&english);
        calculate(math,science,english);
    return 0;
}


int calculate(int math,int science,int english){

    int marks = (math + science + english);
    float percentage = ( (marks/300.0))*100;
    printf("the pecentage is %f",percentage);
}