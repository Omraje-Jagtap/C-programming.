#include<stdio.h>

int main(){
    struct cricketer{

        char name[30];
        int age,no_oftest;
        float avg;
     };

     struct cricketer arr[2];
           int i;
     for ( i = 0; i < 2; i++)
     {
        printf("enter the name of crickter:");
        scanf("%s",&arr[i].name);
        printf("enter the age of crickter:");
        scanf("%d",&arr[i].age);
        printf("enter the no. of test matches of crickter:");
        scanf("%d",&arr[i].no_oftest);
        printf("enter the avrage of crickter:");
        scanf("%f",&arr[i].avg);

     }

     printf("the records of crickter\n");

     for ( i = 0; i < 2; i++)
     {
       printf("name:%s\nage:%d\nno of test match:%d\navarage:%f\n",arr[i].name,arr[i].age,arr[i].no_oftest,arr[i].avg);
     }
    
    return 0;
    
}
